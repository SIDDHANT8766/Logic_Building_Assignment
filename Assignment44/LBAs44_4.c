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

int Frequency(PNODE Head, int No)
{
    int count = 0;
    while(Head != NULL)
    {
        if(Head->Data == No)
            count++;
        Head = Head->Next;
    }
    return count;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 70);
    InsertFirst(&First, 30);
    InsertFirst(&First, 50);
    InsertFirst(&First, 30);
    InsertFirst(&First, 10);

    printf("Frequency: %d", Frequency(First, 30));
    return 0;
}
