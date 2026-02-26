#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

bool CheckSorted(PNODE Head)
{
    if(Head == NULL)
        return true;

    while(Head->Next != NULL)
    {
        if(Head->Data > Head->Next->Data)
            return false;
        Head = Head->Next;
    }
    return true;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 10);

    if(CheckSorted(First))
        printf("List is Sorted");
    else
        printf("List is Not Sorted");

    return 0;
}
