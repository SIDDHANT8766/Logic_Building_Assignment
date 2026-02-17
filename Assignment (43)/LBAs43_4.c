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

int SecMaximum(PNODE Head)
{
    int max1 = -1, max2 = -1;

    while(Head != NULL)
    {
        if(Head->Data > max1)
        {
            max2 = max1;
            max1 = Head->Data;
        }
        else if(Head->Data > max2 && Head->Data < max1)
        {
            max2 = Head->Data;
        }
        Head = Head->Next;
    }
    return max2;
}

int main()
{
    PNODE First = NULL;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    printf("Second Maximum: %d", SecMaximum(First));
    return 0;
}
