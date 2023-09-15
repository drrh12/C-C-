#include <stdio.h>
#include <stdlib.h>

struct node {
	int data;
	struct node *next;
};

typedef struct node node_t;

node_t *head;
node_t *one = NULL;
node_t *two = NULL;
node_t *three = NULL;

void print_list(node_t *n){
	while(n != NULL){
		printf("%d ", n->data);
		n = n->next;
	}
	printf("\n");
}

void add_beginning(int data){
	node_t *newNode = (node_t*)malloc(sizeof(node_t));
	
	newNode->data = data;
	newNode->next = head;

	head = newNode;
}

void add_end(node_t **n, int data){
    node_t *newNode = (node_t*)malloc(sizeof(node_t));
    newNode->data = data;
    newNode->next = NULL;
    
    node_t *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    
    temp->next = newNode;
}

int main(){
	one = malloc(sizeof(node_t));
	two = malloc(sizeof(node_t));
	three = malloc(sizeof(node_t));

	one->data = 10;
	two->data = 20;
	three->data = 30;

	one->next = two;
	two->next = three;
	three->next = NULL;

	head = one;

	print_list(head);
	add_beginning(40);
	print_list(head);
	add_end(&head, 27);
	print_list(head);
}