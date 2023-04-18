#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// list node struct definition 
typedef struct node{
    int data;
    struct node* next;
} node;


// adds element to linked list
node* addToList(int n, node* list) {
    node* new_node = calloc(1,sizeof(node));
    new_node -> data = n;
    new_node -> next = list;
    return new_node;
}

// creates linked list 
node* createRandomLinkedList(int size) {
    int limit = 100; // max value for integers in the list 
    
    node* head = addToList((rand()%limit)+1,NULL);
    for (int i =1; i < size; i++) {
        head = addToList((rand()%limit)+1,head);
    }
    return head;
}

// print list in requested format
void printList(node* head) {
    int count = 0;
    while (head) {
        printf("%-10d", head -> data);
        head = head -> next;
        count = ++count%5; 
        if (count==0) printf("\n"); // skips line every 5 numbers
    }
}

// swap data of two nodes
void swap(node* n1, node* n2) {
    int temp = n1 -> data;
    n1 -> data = n2 -> data;
    n2 -> data = temp;
}

// bubble sort for liked list
void bubble(int size, node* head) {
    while(size>0) {
        node* tempHead = head;
        while (tempHead -> next) {
            
            if ((tempHead -> data) > (tempHead -> next -> data)) {
                swap(tempHead, tempHead -> next);
            }
            tempHead = tempHead -> next;
        }
        size--;
    }
}

int main() {
    int listSize = 100;
    srand(time(NULL)); // seed rand function
    node* linkedList = createRandomLinkedList(listSize);
    bubble(listSize, linkedList);
    printList(linkedList);
}