#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}Node;

Node* create_new_node(int data){
    Node* new_node = (Node*)malloc(sizeof(Node));
    new_node->data = data;
    new_node->next = new_node;
    return new_node;
}

void insert_at_end(Node** head, int data){
    Node* new_node = create_new_node(data);
    if(*head==NULL){
        *head=new_node;
        return;
    }
    Node *temp = *head;
    while(temp->next!=*head){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=*head;
    
}

void display(Node* head){
    Node *temp = head;
    do{
       printf("%d->",temp->data);
       temp=temp->next;
    }
    while(temp!=head);
    printf("\n");
}


int main(){
    Node *head = NULL;
    insert_at_end(&head,10);
    insert_at_end(&head,20);
    insert_at_end(&head,30);
    display(head);
}
