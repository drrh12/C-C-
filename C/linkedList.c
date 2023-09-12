#include <stdio.h>
#include <stdlib.h>

// 1. Definir a estrutura do nó:
struct node{
    int data;
    struct node *next;
};

// 2. Inicializar a lista:
// Você pode criar uma função chamada initialize ou algo semelhante, que retorne um ponteiro NULL. Isso representará o início da sua lista vazia.
struct node *head;
struct node *current = NULL;
struct node *one = NULL;
struct node *two = NULL;
struct node *three = NULL;
struct node *tail = NULL;

// 5. Exibir a lista:
// Crie uma função para percorrer a lista e imprimir os valores de cada nó.
// Inicie do primeiro nó e siga os ponteiros next até chegar ao fim da lista.
void printList(struct node *p){
    while(p != NULL) {
        printf("%d ", p->data);
        p = p->next;
    }
}

// 3. Adicionar um nó:
// Crie uma função para adicionar um novo nó ao final da lista ou no início, conforme sua preferência.
// Aloque memória para um novo nó usando malloc.
// Defina o valor do campo de dados e inicialize o ponteiro next como NULL.
// Se a lista estiver vazia, esse novo nó será o primeiro.
// Caso contrário, percorra a lista até o último nó e adicione o novo nó.
void addStart(struct node **head , int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node)); //aloca memória para o node

    newNode->data = data; // insere o numero do novo node
    newNode->next = (*head); // transforma o proximo node como o head
    (*head) = newNode; // move o head para apontar para o novo node
}

void addEnd(struct node **head, int data){
    struct node *newNode = (struct node*)malloc(sizeof(struct node));

    struct node *last = *head;

    newNode->data = data;
    newNode->next = NULL;

    if(*head == NULL){
        *head = newNode;
        return;
    }

    while (last->next != NULL){
        last = last->next;
    }

    last->next = newNode;
    return;
}

int main(){
int size;

one = malloc(sizeof(struct node));
two = malloc(sizeof(struct node));
three = malloc(sizeof(struct node));

one->data = 1;
two->data = 2;
three->data = 3;

one->next = two;
two->next = three;
three->next = NULL;

head = one;

printList(head);

addStart(&head, 4);

printf("\n");

printList(head);

addStart(&head, 10);

printf("\n");

printList(head);

addEnd(&head, 8);

printf("\n");

printList(head);

// 4. Excluir um nó:
// Crie uma função para remover um nó com um valor específico ou em uma posição específica.
// Percorra a lista até encontrar o nó desejado.
// Ajuste os ponteiros next dos nós adjacentes para remover o nó da lista.
// Libere a memória do nó usando free.

// 6. Outras operações (opcionais):
// Você pode adicionar funções para:
// Encontrar um nó com um valor específico.
// Inverter a lista.
// Obter o tamanho da lista.
// Limpar toda a lista (excluindo todos os nós).

// 7. Finalização:
// Ao final do programa ou quando a lista não for mais necessária, certifique-se de liberar toda a memória que foi alocada usando free.
// Lembre-se:
// Sempre verifique se a alocação de memória com malloc foi bem-sucedida, verificando se o ponteiro retornado não é NULL.
// Esteja atento aos vazamentos de memória. Se você remover um nó da lista, deve também liberar sua memória.
}