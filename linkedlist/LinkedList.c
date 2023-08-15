#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>
struct node{
    int data;
    struct node *next;
    
};

void push(struct node **headref,int item){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data =item;
    newNode->next=*headref;
    *headref=newNode;
}

void display(struct node *n){
    if(n==NULL)
    return;
    while(n){
        printf("%d\t",n->data);
        n=n->next;
    }
}


void pushEnd(struct node **headref,int data){
    if(headref == NULL)
    return;
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    struct node *end = *headref;
    while(end->next!=NULL){
        
    end=end->next;
    
    }
    newNode->data=data;
    end->next=newNode;
}

void pop(struct node **headref,int item){
    if(*headref==NULL)
        return;
    struct node *temp = *headref,*prev;
    if(temp->data==item){
        *headref = (*headref)->next;
        free(temp);
        return;
    }
    while(temp->data!=item){
       prev=temp;
       temp = temp->next;
   }
   prev->next=temp->next;
   free(temp);
}

void reverse(struct node *head){
    struct node *rev = head;
    if(head==NULL)
    return;
    reverse(rev->next);
    printf("%d\t",rev->data);
}


int count(struct node *head){
    int count =0;
    
    while(head!=NULL){
        count++;
        head=head->next;
    
    }
   return count++;
}

bool search(struct node *head, int x)
{
    struct node* current = head; 
    while (current != NULL) {
        if (current->data == x)
            return true;
        current = current->next;
    }
    return false;
}

int main(){
    struct node *head = NULL;
    
    push(&head,10);
    push(&head,20);
    push(&head,30);
    push(&head,40);
    push(&head,40);

display(head);

search(head, 10) ? printf("Yes\n") : printf("No\n");

int c = count(head);
printf("Number of elements in list are: %d\n",c);

// pop(&head,40);
// reverse(head);

return 0;
}