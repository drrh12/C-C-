#include <stdio.h>
#include <stdlib.h>

struct node *head;
struct node *tail = NULL;

struct node {
    int data;
    struct node *next;
    struct node *prev;
};

void addNode(struct node **head, int data){
    struct node *new_node = (struct node*)malloc(sizeof(struct node));
    printf("%p", &new_node);

    struct node *last = *head;

    new_node->data = data;
    new_node->next = NULL;
    
    while(last->next != NULL){
        last = last->next;
    }

    last->next = new_node;
    return;
}

int main(){
    int i;

    addNode(&head, 1);
    
    for(i=0;i<10;++i){
        addNode(&head, i);
    }

    return 0;
}