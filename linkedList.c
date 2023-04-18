// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
} node;


node* addToList(int n, node* list) {
    node* new_node = calloc(1,sizeof(node));
    new_node -> data = n;
    new_node -> next = list;
    
    return new_node;
}

void printList(node* head) {
    printf("[");
    while (head) {
        printf("%d, ", head -> data);
        head = head -> next;
    }
    printf("]\n");
}

node* createList(int size, int arr[]) {
    node* head = addToList(arr[0],NULL);
    for (int i =1; i < size; i++) {
        head = addToList(arr[i],head);
    }
    return head;
}

int main() {
    int L1[] = {1,82,3,25,368,78,1,0,-657,-8,-58,5};
    node* b = createList(sizeof(L1)/sizeof(int),L1); // cant calculate size inside createList() because arrays are call by reference
    printList(b);
}