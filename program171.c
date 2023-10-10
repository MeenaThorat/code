#include<stdio.h>
#include<stdlib.h>//malloc & free

#pragma pack(1)
struct node  // stucture declration
{
    int data;  // 4 bite
    struct node *next;  // 8 or 12 bite

};
typedef struct node NODE;  // short names
typedef struct node * PNODE;
typedef struct node **PPNODE;  // pointer cha pointer

void InsertFirst( PPNODE First, int no)
{
  PNODE newn = (PNODE)malloc(sizeof(NODE));

  newn->data = no;
  newn-> next = NULL;

  if(*First == NULL)  // If linked list is empty
    {
        *First = newn;
    }
  
  else  // If linked list contains atleast one node
  {
    newn->next = *First;
    *First = newn;
  }
}

void InsertLast(PPNODE First, int no)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));       // 1 Allocate memory

    newn->data = no;
    newn->next = NULL;

    if(*First == NULL)  // If linked list is empty
    {
        *First = newn;
    }
    else                // If linked list contains atleast one node
    {

    }
}

void Display(PNODE First)
{
    printf("Element from the link list are : \n");

    while (First != NULL)
    {
        printf(" | %d |-> ",First->data);
        First = First -> next;
    }
    printf("NULL \n");
    
}
int main()
{
   // struct node * Head = NULL;
   PNODE Head= NULL; // It's a pointer 

  InsertFirst(&Head,51);
  InsertFirst(&Head,21);
  InsertFirst(&Head,11);

  Display(Head);

    return 0;
}
/*
// Call by address

   Insertfirst ()
   Insertlast ()
   InsertAtPosition ()

   DeleltFirst ()
   DeletLast ()
   DeletAtPosition ()

   call by value


   Display ()
   Count ()
*/