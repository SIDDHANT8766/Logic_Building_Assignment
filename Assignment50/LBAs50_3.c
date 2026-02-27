#include<stdio.h>
#include<stdlib.h>

struct node {
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

void MultiplyByTwo(PNODE Head) 
{
    while (Head != NULL) 
    {
        Head->Data = (Head->Data) * 2;
        
        Head = Head->Next;
    }
}

void Display(PNODE Head) 
{
    while (Head != NULL) 
    {
        printf("| %d |-> ", Head->Data);
        Head = Head->Next;
    }
    printf("NULL\n");
}

int main() 
{
    PNODE First = NULL;
    InsertFirst(&First, 15);
    InsertFirst(&First, 10);
    InsertFirst(&First, 5);

    printf("Original List:\n");
    Display(First);

    MultiplyByTwo(First);

    printf("Updated List (Multiplied by 2):\n");
    Display(First);

    return 0;
}