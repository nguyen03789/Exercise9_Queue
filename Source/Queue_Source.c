/*
File: Queue_Source.c
Author: Phan Trong Nguyen
Date: 06/05/2023
Description:
*/
#include "../Header/Queue_Header.h"

Node *fistNode;
Node *lastNode;
Node *currentNode;
/*
Function: Init
Description: Create Queue
Input: Pointer of Queue
Output: None
*/
void Init_Queue(Queue *queue){
    queue->List = NULL;
    queue->Point = NULL;
    queue->index = 0;
}
/*
Function: new_Node
Description: Create Node
Input: data of Node
Output: new Node
*/
Node *new_Node(uint8_t data){
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}
/*
Function: Isempty
Description: Check Queue is empty or not
Input: Pointer of Queue
Output: 
0: Queue is empty
1: Queue isn't empty
*/
bool (IsEmpty(Queue *queue)){
    return queue->index == 0;
}
/*
Function: Isfull
Description: Check Queue is full or not
Input: Pointer of Queue
Output: 
0: Queue is full
1: Queue isn't full
*/
bool (IsFull(Queue *queue)){
    return queue->index == SIZE;
}
/*Function: enqueue
Description: Add new data at the end of queue
Input: 
 + Pointer of Queue
 + Data of Queue
Output: a list of Queue
*/
void enqueue(Queue *queue, uint8_t data){
    Node *addNode = new_Node(data);
    if(IsFull(queue)) printf("Queue is full\n");
    else if(IsEmpty(queue)) {
        queue->List = addNode;
        fistNode = addNode;
    }
    else queue->Point->next = addNode;
    queue->Point = addNode;
    lastNode = addNode;
    queue->index++;
}

/*Function: enqueue
Description:Get data at the top of queue and remove them
Input: 
 + Pointer of Queue
 + Data of Queue
Output: None
*/
void dequeue(Queue *queue){
    printf("The fist element of Queue is %d\n", queue->List->data);
    queue->List = queue->List->next;
    fistNode = queue->List;
    queue->index--;
}
/*Function: enqueue
Description:Get data at the top of queue
Input: 
 + Pointer of Queue
 + Data of Queue
Output: None
*/
void front(Queue *queue){
    if(IsEmpty(queue)) printf("Queue is empty\n");
        else printf("The fist element of Queue is %d\n", fistNode->data);
}
/*Function: enqueue
Description:Get data at the end of queue
Input: 
 + Pointer of Queue
 + Data of Queue
Output: None
*/
void rear(Queue *queue){
    if(IsEmpty(queue)) printf("Queue is empty\n");
    else printf("The last element of Queue is %d\n", lastNode->data);
}

void Display(Queue *queue){
    printf("Queue element list\n");
    printf("%d\n",queue->List->data);
    currentNode = queue->List->next;
    for(int i = 1; i <= queue->index; i++){
        printf("%d\n",currentNode->data);
        currentNode = currentNode->next;
    }
}
