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
        while(temp->next!=head){
            printf("%d. %d\n",index,temp->data);
            temp=temp->next;
            index++;
        }
        printf("%d. %d\n",index,temp->data);
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
        
        
        if(head==NULL){
            printf("Adding as first element\n");
            head=ptr;
            ptr->next=head;
            }
        else{
            printf("Adding at end\n");
            temp=head;
            while(temp->next!=head){
                temp=temp->next;
                printf("HERE\n");
            }
            printf("HERE 2\n");
            temp->next=ptr;
            ptr->next=head;
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
            ptr->next=head;
        }
        else{
            struct node *temp;
            temp=head;
            while(temp->next!=head){
                temp=temp->next;
            }
            temp->next=ptr;
            ptr->next=head;
            head=ptr;
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
            while(temp->next!=head){
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
            }
            
        }
    }

void delete_at_end(){
    struct node *ptr, *ptr1;
    if(head==NULL){
        printf("List is empty\n");
    }
    else if(head->next==head)
    {
        head=NULL;
        free(head);
        printf("Only element in the list deleted\n");
    }
    else{
        ptr=head;
        while(ptr->next!=head)
        {
            ptr1=ptr;
            ptr=ptr->next;
        }
        free(ptr);
        ptr1->next=head;
        /*while(ptr->next->next!=NULL)
        {
            ptr=ptr->next;
        }
        free(ptr->next);
        ptr->next=NULL;*/
        printf("Deleted Last node");
    }
    }

void delete_at_bgn(){
    struct node *ptr;
    if(head==NULL){
        printf("empty List");
    }
    else{
        ptr=head;
        while(ptr->next!=head){ptr=ptr->next;}
        ptr->next=head->next;
        free(head);
        head=ptr->next;
        printf("Deleted at beginning");
    }
}

void delete_at_any(){
    if(head==NULL){
        printf("Empty List");
    }
    else{
        struct node *ptr,*ptr1;
        ptr=head;
        int index;
        printf("Enter the index: ");
        scanf("%d",&index);
        if(index==1){delete_at_bgn();return;}
        for(int i=1;i<index;i++){
            ptr1=ptr;
            ptr=ptr->next;
            if(ptr==NULL){
                printf("Cannot delete\n");
                return;
            }
        }
        printf("DATA %d\n",ptr1->data);
        printf("DATA %d\n",ptr->data);
        ptr1->next=ptr->next;
        free(ptr);
        printf("Delected at %d element\n",index);
    }
}

void search(){
    int value;
    printf("Enter the value: ");
    scanf("%d",&value);
    struct node *ptr;
    ptr = head;
    int index=1;
    if(head==NULL){
        printf("No element");
    }
    while(ptr->next!=head){
        if(ptr->data==value){
            printf("found the element: at index %d\n",index);
            return;
        }
        index++;
        ptr=ptr->next;
    }
    if(ptr->data==value){
        printf("items found in %d\n",index);
    }
}

int main(){
    int choice;
    while(choice!=QUIT)
    {
    printf("Enter the choice \n1. Show All \n2. Insert at end \n3. Insert at beginning \n4. Insert anywhere \n5. Delete at end\n\
6. Delete at bgn\n7. Delete any node\n8. Search\n9. Quit\n");
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
        case DEL_END:
            delete_at_end();
            break;
        case DEL_BEG:
            delete_at_bgn();
            break;
        case DEL_ANY:
            delete_at_any();
            break;
        case SEARCH:
            search();
            break;
        case QUIT:
            break;
        default:
            break;
            }
    }
    printf("QUIT");
}
