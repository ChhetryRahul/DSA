#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node *next;
};

void display(struct Node *ptr){
    while(ptr != NULL){
        printf("Element: %d\n" , ptr->data);
        ptr = ptr->next;
    }
}

struct Node * delete_end(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    } 
    p->next = NULL;
    free(q);
    return head;
}
int main()
{
     struct Node *head;
     struct Node *second;
     head = (struct Node *) malloc(sizeof(struct Node));
     second = (struct Node *) malloc(sizeof(struct Node));
     
     head->data = 8;
     head->next = second;
     second->data = 4;
     second->next = NULL;
     
     printf("before deletion\n");
     display(head);
     
     head=delete_end(head);
     printf("\nafter deletion\n");
     display(head);
     
    return 0;
}

