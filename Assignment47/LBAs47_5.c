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

int IsPrime(int no)
{
    int i;
    if(no < 2)
        return 0;

    for(i = 2; i <= no / 2; i++)
    {
        if(no % i == 0)
            return 0;
    }
    return 1;
}

int CountPrime(PNODE Head)
{
    int count = 0;
    while(Head != NULL)
    {
        if(IsPrime(Head->Data))
            count++;
        Head = Head->Next;
    }
    return count;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 11);
    InsertFirst(&First, 20);
    InsertFirst(&First, 17);
    InsertFirst(&First, 25);
    InsertFirst(&First, 7);

    printf("Prime Count: %d", CountPrime(First));
    return 0;
}
