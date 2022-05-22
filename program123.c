#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;           // 4
    struct node *next;  // 8
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE head, int no)
{
    // Allocate memory for node (dynamically)
    // Initialise that node

    // Check whether LL is empty or not
    // If LL is empty then new node is the first node so update its address in first pointer through head

    // If LL is not empty then store the address of first node in the next pointer of our new node
    // update the first pointer thruogh head
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     // newn = (struct node *)malloc(12);

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   // LL is empty
    {
        *head = newn;
    }
    else        // LL contains atleast one node
    {
        newn->next = *head;
        *head = newn;
    }
}

void InsertLast(PPNODE head, int no)
{
    // Allocate memory for node (dynamically)
    // Initialise that node

    // Check whether LL is empty or not
    // If LL is empty then new node is the first node so update its address in first pointer through head

    // If LL is not empty then
    // travel till last node of LL
    // store address of new node in the next pointer of last node

    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));     // newn = (struct node *)malloc(12);

    newn->data = no;
    newn->next = NULL;

    if(*head == NULL)   // LL is empty
    {
        *head = newn;
    }
    else        // LL contains atleast one node
    {
            // travel till last node
            // store address of new node in the next pointer of last node
          temp = *head;

          while(temp->next != NULL)
          {
            temp = temp->next;
          }
          temp->next = newn;
    }
}

void Display(PNODE head)
{
    printf("Elements from linked list are : \n");

    while(head != NULL)
    {
        printf("| %d |-> ",head->data);
        head = head -> next;
    }
    printf("NULL\n");
}

int Count(PNODE head)
{
    int iCnt = 0;

    while(head != NULL)
    {
        iCnt++;
        head = head -> next;
    }
    return iCnt;
}

void DeleteFirst(PPNODE head)
{
   // if LL is empty then  return
   // if LL contains atleast one node then
   // store the address of second node in the first pointer through head
   // And delete the first node
  
   PNODE temp = NULL;

   if(*head == NULL)  // LL is empty
    {
        return;
    }
    else        // LL contain atleast one node
    {

      temp = *head;
      *head = temp->next;
      free(temp);
    
    }
}
void DeleteLast(PPNODE head)
{ 
   // if LL is empty then return
   // if LL contain one node then delete that node and return
   // if LL contains more than one node then travel till last node and delete last node
   
     PNODE temp = NULL;

    if(*head == NULL) // LL is empty
    {
        return;
    }
   else if((*head) -> next == NULL)// LL contain one node
    {
         free(*head);
         *head = NULL;
    }
    else   // LL contains more than one node
    {
         temp = *head;
        while(temp->next->next!= NULL)
        {
            temp = temp -> next;
        }

        free(temp->next);
        temp->next = NULL;
 }
}

int main()
{
    int iRet = 0;
    PNODE first = NULL;

    InsertFirst(&first,101);    // call by address
    InsertFirst(&first,51);
    InsertFirst(&first,21);
    InsertFirst(&first,11);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertFirst(&first,1);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    InsertLast(&first,111);
    InsertLast(&first,121);

    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    DeleteFirst(&first);
    DeleteFirst(&first);
   
    Display(first);     // Call by value

    iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    DeleteLast(&first);
    Display(first);
    
   iRet = Count(first);
    printf("Number of nodes are  : %d\n",iRet);

    return 0;
}