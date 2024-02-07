#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void display(struct node *head)
{
    struct node *temp = head;
    while (temp!=NULL)
    {
        printf("%d \n", (*temp).data);
        temp = temp->next;
    }
}

struct node* addback(struct node* head, int data){

    struct node* next_node = malloc(sizeof(struct node));
    next_node->data = data;
    next_node->next = NULL;
    if (head == NULL){
        head = next_node;
    }else{
        struct node* temp = head;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = next_node;
    }

    return head;
   
}

struct node* find(struct node* head,int data){
    
    
    while(head!= NULL){
        if (head->data == data){
            return head;
        }
        head = head->next;
    }
    return NULL;
}

struct node* delete(struct node* head, struct node* pelement){
    if (head == NULL){
        return NULL;
    }
    else if (head->data == pelement->data ){
        head = head->next;
        return head;
    }else{
        struct node* prev = head;
        struct node* temp = head->next;
        while (temp != NULL)
        {
            if(temp->data == pelement->data){
                prev->next = temp->next;
                free(temp);
                return head;
            }
            prev = temp;
            temp = temp->next;

        }
        return NULL;
    }
}

void freeList(struct node* head){
    
    while (head!= NULL)
    {
        struct node* temp = head;
        head = head->next;
        free(temp);
    }
    
    
}

int main()
{
    struct node *head = NULL;
    head = addback(head, 1);
    head = addback(head, 2);
    head = addback(head, 3);
    head = addback(head, 4);
    head = addback(head, 5);
    display(head);
    printf("Find 5: %d\n", find(head, 5)->data);

    head = delete(head, find(head, 5));
    display(head);
    freeList(head);

    return 0;
}