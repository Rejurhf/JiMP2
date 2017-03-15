//
// Created by Rejurhf on 15.03.2017.
//

#include "SimpleForwardList.h"

struct ForwardList;

ForwardList *CreateNode(int value){
    ForwardList *node = new ForwardList;
    node->value = value;
    node->next = nullptr;
    return node;
}

ForwardList *PushFront(ForwardList *list, int value){
    if(list == nullptr){
        return nullptr;
    }
    ForwardList *newNode = CreateNode(value);
    newNode->next = list;
    return newNode;
}

void Append(ForwardList *list, ForwardList *tail){
    ForwardList *pomNode = list;
    if(pomNode == nullptr)
        return;
    while(pomNode->next != nullptr){
        pomNode = pomNode->next;
    }
    pomNode->next = tail;
}

void DestroyList(ForwardList *list){
    ForwardList *pomNode;
    while(list != nullptr){
        pomNode = list;
        list = list->next;
        delete pomNode;
    }
}