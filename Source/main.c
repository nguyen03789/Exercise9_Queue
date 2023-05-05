/*
File: main.c
Author: Phan Trong Nguyen
Date: 06/05/2023
Description:
*/
#include"Queue_Source.c"

int main(int argc, char const *argv[])
{
    Queue a;
    Init_Queue(&a);
    enqueue(&a,2);
    enqueue(&a,4);
    enqueue(&a,6);
    enqueue(&a,8);
    enqueue(&a,10);
    enqueue(&a,12);
    enqueue(&a,14);
    dequeue(&a);
    front(&a);
    rear(&a);
    Display(&a);
    return 0;
}



