#include<stdio.h>
#include<stdlib>

// Structre declaration
struct node
{
   int Data;
   struct node*next;
};

int main()
{
    // Static memeory allocation
    struct node obj;
    
    // Dynamic memory allocation
    struct node *ptr = (struct node*)malloc(sizeof(struct node));

    obj.data = 11;     // Direct accessing operator.
    obj.next = NULL; 
   
    ptr -> data = 11;    // Indirect accesing operator ->
    ptr -> next = NULL;

    return 0;
}