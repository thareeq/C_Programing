#include <stdio.h>
#include <stdlib.h>

enum options {
    SHOW_ALL=1,
    INS_END,
    INS_BEG,
    INS_ANY,
    DEL_END,
    DEL_BEG,
    DEL_ANY,
    SEARCH,
    QUIT
};

struct node {
  int data;
  struct node *next;
};

struct node *head;

void show_all(){
    if(head==NULL){
        printf("Nothing to show\n\n\n");
    }
    else{
        struct node *temp;
        temp=head;
        int index=1;
        while(temp!=NULL){
            printf("%d. %d\n",index,temp->data);
            temp=temp->next;
            index++;
        }
    }
    
}

void insert_at_end(){
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OVERFLOW\n");
    }
    else{
        int value;
        printf("Enter the value: ");
        scanf("%d",&value);
        ptr->data=value;
        ptr->next=NULL;
        
        if(head==NULL){
            printf("Adding as first element\n");
            head=ptr;
            }
        else{
            printf("Adding at end\n");
            temp=head;
            while(temp->next!=NULL){
                temp=temp->next;
            }
            temp->next=ptr;
        }
        printf("Element inserted");
        
    }
}

void insert_at_begin(){
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OVERFLOW\n");
    }
    else{
        int value;
        printf("Enter the value: ");
        scanf("%d",&value);
        ptr->data=value;
        if(head==NULL){
            head=ptr;
            ptr->next=NULL;
        }
        else{
            struct node *temp;
            temp=head;
            head=ptr;
            ptr->next=temp;
        }
        
    }
}

void insert_at_any(){
    struct node *ptr=(struct node*)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OVERFLOW\n");
    }
    else{
        int value, index;
        printf("Enter the index: ");
        scanf("%d",&index);
        if(head==NULL || index==1){
            insert_at_begin();
            return;
        }
        else{
            int n=1;
            struct node *temp;
            temp = head;
            while(temp!=NULL){
                if(n==(index-1)){
                    printf("Enter the value: ");
                    scanf("%d",&value);
                    ptr->data=value;
                    ptr->next=temp->next;
                    temp->next=ptr;
                    break;
                }
                temp=temp->next;
                n++;
            }
            if(temp==NULL){
                printf("index out of range\n");
            }
            else if(temp->next==NULL){
                printf("Adding element at end as new\n");
                insert_at_any();
                
            }
            
        }
    }
}

int main(){
    int choice;
    while(choice!=QUIT)
    {
    printf("Enter the choice \n1. Show All \n2. Insert at end \n3. Insert at beginning \n4. Insert anywhere \n5. Quit\n");
    printf("\n");
    scanf("%d",&choice);
    switch(choice){
        case SHOW_ALL:
            show_all();
            break;
        case INS_END:
            insert_at_end();
            break;    
        case INS_BEG:
            insert_at_begin();
            break;
        case INS_ANY:
            insert_at_any();
            break;
        default:
            break;
            }
    }
    printf("QUIT");
}
