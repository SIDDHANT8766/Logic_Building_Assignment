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

int DisplayPerfect(PNODE Head)
{
    int i, sum;
    printf("Perfect numbers: ");
    while(Head != NULL)
    {
        sum = 0;
        for(i = 1; i <= Head->Data/2; i++)
        {
            if(Head->Data % i == 0)
                sum += i;
        }
        if(sum == Head->Data)
            printf("%d ", Head->Data);

        Head = Head->Next;
    }
    return 0;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 89);
    InsertFirst(&First, 6);
    InsertFirst(&First, 141);
    InsertFirst(&First, 17);
    InsertFirst(&First, 28);
    InsertFirst(&First, 11);

    DisplayPerfect(First);
    return 0;
}
