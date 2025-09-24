#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node* next;
}Node;

Node* head = NULL;

Node* create_new_node(int data){
    Node* new_node = (Node*)malloc(sizeof(Node));
    if(new_node==NULL){
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}

void add_element_to_tail(int data){
    Node* new_node = create_new_node(data);
    if(head==NULL){
        head=new_node;
        return;
    }
    Node *temp = head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next = new_node;
}

void add_element_to_head(int data){
    Node *new_node = create_new_node(data);
    if(head==NULL){
        head=new_node;
        return;
    }
    new_node->next=head;
    head=new_node;
}
/**
 * Insert element at given position
 * @param position (1-based index)
 * @param data value to insert
 * @return 1 if success, 0 if failure
 */
int add_element_at_pos(int position, int data){
    if(position<1){
        fprintf(stderr, "Invalid position\n");
        return 0;
    }
    if(position==1){
        add_element_to_head(data);
        return 1;
    }
    Node* temp = head;
    for(int i=1;temp!=NULL && i<(position-1);i++)
    {
        temp=temp->next;
    }
    if(temp==NULL){
        fprintf(stderr,"Out of index\n");
        return 0;
    }
    Node* new_node = create_new_node(data);
    new_node->next=temp->next;
    temp->next=new_node;
    return 1;
}

void delete_head(){
    if(head==NULL) return;
    Node* temp=head;
    head=head->next;
    free(temp);
}

void delete_tail(){
    if(head==NULL)return;
    if(head->next==NULL){
        free(head);
        head=NULL;
        return;
    }
    Node *temp = head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    free(temp->next);
    temp->next=NULL;
}

int delete_at_position(int position){
    if(position<1){
        fprintf(stderr,"Invalid Position\n");
        return 0;
    }
    if(position==1){
        delete_head();
        return 1;
    }
    Node *temp=head;
    for(int i=1; temp!=NULL && i<position-1;i++){
        temp=temp->next;
    }
    if(temp->next==NULL){
        fprintf(stderr,"DEL: Out of Index\n");
        return 0;
    }
    Node* next = temp->next->next;
    free(temp->next);
    temp->next=next;
    return 1;
}

int search_node(int key){
    Node *temp = head;
    int position=1;
    while(temp!=NULL){
        if(temp->data==key)break;
        position++;
        temp=temp->next;
    }
    if(temp==NULL)
    {
        printf("Value %d is not available in list",key);
        return -1;
    }
    printf("Value %d found in the position %d\n", key, position);
    return position;
}

void display(){
    Node *temp = head;
    while(temp!=NULL){
        printf("%d",temp->data);
        if(temp->next!=NULL) printf("->");
        temp=temp->next;
    }
    printf("\n");
}

void free_list(){
    Node*temp=head;
    while(head!=NULL){
        temp=head;
        head=head->next;
        free(temp);
    }
}
int main(){
    add_element_to_tail(10);
    add_element_to_tail(20);
    add_element_to_tail(30);
    display();
    add_element_to_head(9);
    add_element_to_head(80);
    add_element_at_pos(6,31);
    display();
    add_element_at_pos(1,5);
    add_element_at_pos(2,6);
    add_element_at_pos(7,28);
    add_element_at_pos(9,31);
    add_element_at_pos(11,32);
    display();
    delete_head();
    delete_tail();
    display();
    printf("Delete at position: \n");
    delete_at_position(8);
    display();
    delete_at_position(7);
    display();
    delete_at_position(1);
    display();
    delete_at_position(3);
    display();
    search_node(9);
    search_node(8);
    search_node(28);
    search_node(45);

}