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

void DisplayOddPosition(PNODE Head) 
{
    int iPos = 1;

    printf("Elements at Odd Positions: ");

    while (Head != NULL)
    {
        if ((iPos % 2) != 0)
        {
            printf("%d  ", Head->Data);
        }
        iPos++;
        Head = Head->Next;
    }
    printf("\n");
}

int main() 
{
    PNODE First = NULL;
    InsertFirst(&First, 40); // Pos 4
    InsertFirst(&First, 30); // Pos 3
    InsertFirst(&First, 20); // Pos 2
    InsertFirst(&First, 10); // Pos 1

    DisplayOddPosition(First);

    return 0;
}