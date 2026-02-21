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

bool IsEmpty(PNODE Head)
{
    if(Head == NULL)
        return true;
    else
        return false;
}

int main()
{
    PNODE First = NULL;

    if(IsEmpty(First))
        printf("Linked List is Empty");
    else
        printf("Linked List is Not Empty");

    return 0;
}
