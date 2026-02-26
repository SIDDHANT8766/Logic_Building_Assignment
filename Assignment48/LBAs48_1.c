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

void MakeAbsolute(PPNODE Head)
{
    PNODE temp = *Head;
    while(temp != NULL)
    {
        if(temp->Data < 0)
            temp->Data = -temp->Data;
        temp = temp->Next;
    }
}

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("%d ", Head->Data);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, -10);
    InsertFirst(&First, 20);
    InsertFirst(&First, -30);
    InsertFirst(&First, 40);

    MakeAbsolute(&First);
    Display(First);

    return 0;
}
