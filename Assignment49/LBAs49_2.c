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

bool CheckAllPositive(PNODE Head)
{
    while(Head != NULL)
    {
        if(Head->Data < 0)
            return false;
        Head = Head->Next;
    }
    return true;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 10);
    InsertFirst(&First, 20);
    InsertFirst(&First, -30);

    if(CheckAllPositive(First))
        printf("All elements are positive");
    else
        printf("All elements are NOT positive");

    return 0;
}
