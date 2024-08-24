#include <stdio.h>
#include <stdlib.h>

enum options {
    SHOW_ALL=1,
    INS_END,
    INS_BGN,
    INS_ANY,
    DEL_END,
    DEL_BGN,
    DEL_ANY,
    SEARCH
};

struct node {
    struct node *prev;
    int data;
    struct node *next;
};

struct node *head;

void show_all(){
    struct node *temp;
    temp=head;
    int index=1;
    if(head==NULL){
        printf("Nothing to show\n");
    }
    while(temp!=NULL){
        printf("%d. %d\n",index,temp->data);
        temp=temp->next;
        index++;
    }
    
}

void insert_at_end(){
    struct node *ptr;
    int value;
    printf("Enter the value: ");
    scanf("%d",&value);
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OverFLoW");
    }
    else{
    ptr->data=value;
    ptr->next=NULL;
    if(head==NULL){
        ptr->prev=NULL;
        head=ptr;
    }
    else{
        struct node *temp;
        temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=ptr;
        ptr->prev=temp;
    }
    }
    
}

void insert_at_bgn(){
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OverFLoW\n");
    }
    else{
    int value;
    printf("Enter the value: ");
    scanf("%d",&value);
    ptr->data=value;
    ptr->prev=NULL;
    ptr->next=head;
    head=ptr;
        
    }
}

void insert_at_any(){
    struct node *ptr, *temp;
    ptr=(struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("OVERFLOW\n");
    }
    else{
        int value,index;
        printf("Enter the index: ");
        scanf("%d",&index);
        if(index==1)
        {
            insert_at_bgn();
            return;
        }
        else{
            struct node *temp;
            temp=head;
            for(int i=1;i<index;i++){
                temp=temp->next;
                if(temp==NULL){
                    printf("Out of index\n");
                    return;
                }
            }
           // printf("temp: %d",temp->data);
            printf("Enter the value: ");
            int value;
            scanf("%d",&value);
            ptr->data=value;
            ptr->prev=temp->prev;
            ptr->next=temp;
            temp->prev->next=ptr;
            temp->prev=ptr;
        //printf("Enter the value: ");
        //scanf("%d",&value);
        //ptr->data=value;
        }
        
    }
    
}

void delete_at_end(){
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("Nothing to delete\n");
        return;
    }
    if(head->next==NULL){
        free(head);
        head=NULL;
        return;
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
}

void delete_at_bgn(){
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("Nothing to delete\n");
        return;
    }
    if(head->next==NULL){
        free(head);
        head=NULL;
        return;
    }
    head=head->next;
    head->prev=NULL;
    free(temp);
}

void delete_at_any(){
    struct node *temp;
    temp=head;
    if(head==NULL){
        printf("Nothing to delete\n");
        return;
    }
    int index;
    printf("Enter the index: ");
    scanf("%d",&index);
    if(index==1){
        delete_at_bgn();
    }
    else{
        for(int i=1;i<index;i++){
            temp=temp->next;
            if(temp==NULL){
                printf("INdex out of range\n");
                return;
            }
        }
        if(temp->next==NULL){
            delete_at_end();
            return;
        }
        temp->next->prev=temp->prev;
        temp->prev->next=temp->next;
        free(temp);
    }
}

void search(){
    struct node *temp;
    temp=head;
    int value;
    printf("Value you wanted to search");
    scanf("%d",&value);
    int index=1;
    while(temp!=NULL){
        if(value==temp->data){
            printf("Fount the value at index: %d\n",index);
            return;
        }
        index++;
        temp=temp->next;
    }
}

int main(){
    int choice=0;
    while(choice!=9){
        printf("Enter the choice:\n1. Show All\n2. Insert at end\n3. Insert at bgn\n4. Insert Anywhere\n\
5. Delelte at end\n6. Delete at bgn\n7. Delete any\n8. Search\n");
        scanf("%d",&choice);
        switch(choice){
            case SHOW_ALL:
                show_all();
                break;
            case INS_END:
                insert_at_end();
                break;
            case INS_BGN:
                insert_at_bgn();
                break;
            case INS_ANY:
                insert_at_any();
                break;
            case DEL_END:
                delete_at_end();
                break;
            case DEL_BGN:
                delete_at_bgn();
                break;
            case DEL_ANY:
                delete_at_any();
                break;
            case SEARCH:
                search();
                break;
            default:
                break;
        }
        
    }
    
}
