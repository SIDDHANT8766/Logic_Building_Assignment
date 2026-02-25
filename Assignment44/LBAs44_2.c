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

int CountEven(PNODE Head)
{
    int count = 0;
    while(Head != NULL)
    {
        if(Head->Data % 2 == 0)
            count++;
        Head = Head->Next;
    }
    return count;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 41);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    printf("Even count: %d", CountEven(First));
    return 0;
}
