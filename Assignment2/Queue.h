//
//  Queue.h
//  Assignment2
//
//  Created by zw896 on 30/08/2016.
//  Copyright © 2016 UOW. All rights reserved.
//

#ifndef Queue_h
#define Queue_h

#include "Node.h"

//create a queue with head node
typedef struct Queue{
    Node *front;            //head node
    Node *rear;             //rear node
}Queue;

void initQueue(Queue &queue);
void insertQueue(Queue &queue, Node &node);
void outQueue(Queue &queue, Node &node);
void deleteQueue(Queue &queue, Node &node);
int lengthQueue(Queue &queue);
void printQueue(Queue &queue);


#endif /* Queue_h */
