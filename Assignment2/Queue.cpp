//
//  Queue.cpp
//  Assignment2
//
//  Created by zw896 on 30/08/2016.
//  Copyright © 2016 UOW. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include "Queue.h"

//intialize the queue
void initQueue(Queue &queue)
{
    queue.front = new Node;
    if (!queue.front) {
        exit(-1);
    }
    queue.front->next = NULL;
    queue.rear = queue.front;
}

//insert new element into the queue
void insertQueue(Queue &queue, Node &node)
{
    //Node *
}
void outQueue(Queue &queue, Node &node);
void deleteQueue(Queue &queue, Node &node);
int lengthQueue(Queue &queue);
void printQueue(Queue &queue);
