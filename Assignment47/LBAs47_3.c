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

void SumDigits(PNODE Head)
{
    int no, sum, digit;

    while(Head != NULL)
    {
        no = Head->Data;
        sum = 0;

        while(no != 0)
        {
            digit = no % 10;
            sum += digit;
            no = no / 10;
        }
        printf("%d -> %d\n", Head->Data, sum);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 123);
    InsertFirst(&First, 25);
    InsertFirst(&First, 7);
    InsertFirst(&First, 90);

    SumDigits(First);
    return 0;
}
