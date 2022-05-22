   //  Singly Linear Linked list
   /*
    
        InsertFirst
        InsertLast
        InsertAtPosition

        DeleteFirst
        DeleteLast
        DeleteAtPosition

        Display
        Count
*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
   int data;
   struct node*next;
};

typedef struct node NODE;
typedef struct node*PNODE;
typedef struct node**PPNODE;

/*
 
   1:   Allocate memory for node
   2 :  Initialise the node
   3:   Check whether LL is empty or not   LL= Linked List
   4:   If LL is empty the new node is first node
   5 :  If LL contains atleast one node in it then store the address of previous first node in the next pointer of new node
*/
 
void InsertFirst(PPNODE Head,int iNo)
{
   PNODE newn = NULL;
  
  newn = (PNODE)malloc(sizeof(NODE));
  
 newn->data = iNo;
 newn->next = NULL;

if(*Head == NULL)    //if LL is empty
  {
     *Head = newn;
  }
   else  // if LL contains atleast one node
   {
 
      newn -> next = *Head;
      *Head = newn;
   }
}


int main()
{
   PNODE First = NULL;  // struct node*First = NULL;

   InsertFirst(&First,101);  //call by address
   InsertFirst(&First,51);
   InsertFirst(&First,21);
   InsertFirst(&First,11);

   return 0;
}


/* Rules

   1. Use only dynamic memory allocations
   2. Don't write any technical syntax in main
   3. Don't use any global variables
   4. Be careful while manipulating the first pointer 
   5. Pass the First pointer directly if the function is not going to modify the LL. (Display,Count)
   6. Pass the address of First pointer if the function is going to modify the LL. (InsertFirst.InsertLast,InsertAtPos,DeleteFirst,DeleteLast,DeleteAtPosition

*/