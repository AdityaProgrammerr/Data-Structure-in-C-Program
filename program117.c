#include<stdio.h>
#include<stdlib.h>

// Structre declaration
struct node
{
   int data;
   struct node*next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node**PPNODE;

// Juna new      Nawin new
//  struct node   NODE
//  struct node*   PNODE
//  struct node**  PPNODE

int main()
{
    // Static memeory allocation
      NODE obj;
    
    // Dynamic memory allocation
     PNODE ptr = ( PNODE)malloc(sizeof( NODE));

    obj.data = 11;     // Direct accessing operator.
    obj.next = NULL; 
   
    ptr-> data = 11;    // Indirect accesing operator ->
    ptr-> next = NULL;

    return 0;
}