#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = *Head;
    *Head = newn;
}

void DisplayGreaterThanAvg(PNODE Head)
{
    PNODE temp = Head;
    int sum = 0, count = 0;
    float avg;

    while(temp != NULL)
    {
        sum += temp->Data;
        count++;
        temp = temp->Next;
    }

    avg = (float)sum / count;
    printf("Average = %.2f\n", avg);
    printf("Elements greater than average: ");

    while(Head != NULL)
    {
        if(Head->Data > avg)
            printf("%d ", Head->Data);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 40);

    DisplayGreaterThanAvg(First);
    return 0;
}
