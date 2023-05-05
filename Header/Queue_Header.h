/*
File: Queue_Header.h
Author: Phan Trong Nguyen
Date: 06/05/2023
Description:
*/
#ifndef _Queue_
#define _Queue_
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 10

typedef struct Node
{
    uint8_t data;
    struct Node *next;
}Node;

typedef struct 
{
    Node *List;
    Node *Point;
    uint8_t index;
}Queue;

#endif