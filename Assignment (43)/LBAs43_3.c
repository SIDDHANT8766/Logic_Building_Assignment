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

int AdditionEven(PNODE Head)
{
    int sum = 0;
    while(Head != NULL)
    {
        if(Head->Data % 2 == 0)
            sum += Head->Data;

        Head = Head->Next;
    }
    return sum;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 141);
    InsertFirst(&First, 32);
    InsertFirst(&First, 20);
    InsertFirst(&First, 11);

    printf("Addition of even elements: %d", AdditionEven(First));
    return 0;
}
