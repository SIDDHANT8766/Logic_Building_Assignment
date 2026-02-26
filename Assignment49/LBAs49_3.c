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

void DisplayDivByThree(PNODE Head)
{
    printf("Elements divisible by 3: ");
    while(Head != NULL)
    {
        if(Head->Data % 3 == 0)
            printf("%d ", Head->Data);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 9);
    InsertFirst(&First, 6);
    InsertFirst(&First, 11);
    InsertFirst(&First, 15);

    DisplayDivByThree(First);
    return 0;
}
