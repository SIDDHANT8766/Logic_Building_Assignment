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

void Display(PNODE Head, int pos)
{
    int i = 1;
    while(Head != NULL)
    {
        if(i == pos)
        {
            printf("Element at position %d: %d", pos, Head->Data);
            return;
        }
        i++;
        Head = Head->Next;
    }
    printf("Invalid Position");
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 40);

    Display(First, 3);
    return 0;
}
