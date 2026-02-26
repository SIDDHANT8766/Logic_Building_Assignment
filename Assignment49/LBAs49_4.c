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

int CountDivByFive(PNODE Head)
{
    int count = 0;
    while(Head != NULL)
    {
        if(Head->Data % 5 == 0)
            count++;
        Head = Head->Next;
    }
    return count;
}

int main()
{
    PNODE First = NULL;
    int ret = 0;

    InsertFirst(&First, 10);
    InsertFirst(&First, 25);
    InsertFirst(&First, 7);
    InsertFirst(&First, 30);

    ret = CountDivByFive(First);
    printf("Count = %d", ret);

    return 0;
}
