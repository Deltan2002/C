
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

void delNode(struct node** head_ref, int key)
{
    struct node *temp = (*head_ref), *prev;
 
    if (temp != NULL && temp->data == key) {
        (*head_ref) = temp->next; 
        free(temp); 
        return;
    }
 
    while (temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }
 
    if (temp == NULL)
        return;
 
    prev->next = temp->next;
 
    free(temp); 
}



void printList(struct node *nodes)
{
    printf("Items present in list\n");
    while (nodes)
    {
        printf("%d\t", nodes->data);
        nodes = nodes->next;
    }
}

int main()
{
    int n;
    insBeg(&head, 10);
    insBeg(&head, 20);
    insBeg(&head, 120);
    insBeg(&head, 80);
    insBeg(&head, 40);
    insBeg(&head, 50);
    insEnd(&head, 30);
    printList(head);

    printf("\nEnter the item to be removed: ");
    scanf("%d", &n);
    delNode(&head, n);
    
    reverse(&head);

    printList(head);

    return 0;
}
