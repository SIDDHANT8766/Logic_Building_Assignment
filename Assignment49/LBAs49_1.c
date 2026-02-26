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

int Difference(PNODE Head)
{
    int max = Head->Data;
    int min = Head->Data;

    while(Head != NULL)
    {
        if(Head->Data > max)
            max = Head->Data;
        if(Head->Data < min)
            min = Head->Data;
        Head = Head->Next;
    }
    return max - min;
}

int main()
{
    PNODE First = NULL;
    int ret = 0;

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 5);
    InsertFirst(&First, 30);

    ret = Difference(First);
    printf("Difference is: %d", ret);

    return 0;
}
