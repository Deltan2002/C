
#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head = NULL;
void insBeg(struct node **headRef, int item)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    if (newNode == NULL)
        return;
    newNode->data = item;
    newNode->next = (*headRef);
    (*headRef) = newNode;
}

void insEnd(struct node **headRef, int item)
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = item;
    newNode->next = NULL;

    struct node *lastNode = (*headRef);

    while (lastNode->next != NULL)
    {
        lastNode = lastNode->next;
    }
    lastNode->next = newNode;
}

void delBeg(struct node **headRef)
{
    if (*headRef == NULL)
    {
        return;
    }
    struct node *del = *headRef;
    *headRef = del->next;
    free(del);
}

void delEnd(struct node **headRef)
{
    struct node *delL = (*headRef);
    while (delL->next->next != NULL)
    {
        delL = delL->next;
    }
    struct node *last = delL->next;
    delL->next = NULL;
    free(last);
}

void printList(struct node *nodes)
{
    while (nodes)
    {
        printf("%d\t", nodes->data);
        nodes = nodes->next;
    }
}

int main()
{

    insBeg(&head, 10);
    insBeg(&head, 20);
    insBeg(&head, 20);

    insEnd(&head, 30);

    delBeg(&head);

    delEnd(&head);

    printList(head);
    return 0;
}
