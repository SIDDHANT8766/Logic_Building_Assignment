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

void CountDigits(PNODE Head)
{
    int no, count;

    while(Head != NULL)
    {
        no = Head->Data;
        count = 0;

        while(no != 0)
        {
            count++;
            no = no / 10;
        }
        printf("%d -> %d digits\n", Head->Data, count);
        Head = Head->Next;
    }
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 101);
    InsertFirst(&First, 21);
    InsertFirst(&First, 7);
    InsertFirst(&First, 123);

    CountDigits(First);
    return 0;
}
