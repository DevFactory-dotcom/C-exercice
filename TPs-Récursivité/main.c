#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct n {
    int data;
    struct n* next;
} Node;


void print_linked_list(Node* n){
    while (n != NULL){
        printf("%d", n->data);
        if (n->next != NULL){
            printf(" -> ");
        }
        n = n->next;
    }
}

void insert_after_value(Node *head, Node *insert, int value){
    Node *n = head;
    while (n != NULL){
        if (n->data == value){
            Node *tmp = n->next;
            insert->next = tmp;
            break;
        }
        n = n->next;
    }
}

int sum_linked_list(Node* n){
    int compt = 0;
    while (n != NULL){
        compt += n->data;
        n = n->next;
    }
    return compt;
}

int sum_linked_list_recursive(Node* n){
    if (n == NULL){
        return 0;
    } else {
        return n->data + sum_linked_list_recursive(n->next);
    }
}

int powe(int value, int power){
    int result = 1;

    if (power == 0){
        return result;
    } else{
        result *= value;
        return result *= powe(value, power - 1);
    }
}

char inverse(Node *n){
    printf("\n");
    if (n != NULL){
        inverse(n->next);
        if (n->next != NULL){
            printf(" -> ");
        }
        return printf("%d", n->data);
    }
}


int main(){
    Node *head = malloc(sizeof(Node));
    head->data = 1;
    head->next = NULL;

    Node *current = head;

    for (int i = 2; i < 5; i++){
        Node *node = malloc(sizeof(Node));
        node->data = i;
        node->next = NULL;

        current->next = node;
        current = node;
    }
    print_linked_list(head);
    // printf("\n%d", sum_linked_list(head));
    // printf("\n%d", sum_linked_list_recursive(head));
    // printf("\n%d",powe(5,6));
    printf("%c",inverse(head));


}