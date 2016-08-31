//
//  Node.h
//  Assignment2
//
//  Created by zw896 on 30/08/2016.
//  Copyright © 2016 UOW. All rights reserved.
//

#ifndef Node_h
#define Node_h

typedef struct Node
{
    double arrival_time;
    double service_time;
    struct Node *next;
}Node, Customer;

#endif /* Node_h */
