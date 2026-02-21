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

int LastOccur(PNODE Head, int No)
{
    int pos = 1, last = -1;

    while(Head != NULL)
    {
        if(Head->Data == No)
            last = pos;

        pos++;
        Head = Head->Next;
    }
    return last;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 40);

    printf("Last Occurrence Position: %d", LastOccur(First, 20));
    return 0;
}
