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

int CountTwoDigit(PNODE Head)
{
    int count = 0;
    while(Head != NULL)
    {
        if((Head->Data >= 10 && Head->Data <= 99) ||
           (Head->Data <= -10 && Head->Data >= -99))
            count++;
        Head = Head->Next;
    }
    return count;
}

int main()
{
    PNODE First = NULL;
    int ret = 0;

    InsertFirst(&First, 5);
    InsertFirst(&First, 12);
    InsertFirst(&First, 99);
    InsertFirst(&First, 100);

    ret = CountTwoDigit(First);
    printf("Two digit count = %d", ret);

    return 0;
}
