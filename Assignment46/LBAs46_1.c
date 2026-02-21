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

void DisplayGreater(PNODE Head, int X)
{
    printf("Elements greater than %d: ", X);
    while(Head != NULL)
    {
        if(Head->Data > X)
            printf("%d ", Head->Data);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 10);
    InsertFirst(&First, 25);
    InsertFirst(&First, 30);
    InsertFirst(&First, 5);
    InsertFirst(&First, 40);

    DisplayGreater(First, 20);
    return 0;
}
