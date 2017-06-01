//
// Created by Rejurhf on 15.03.2017.
//

#ifndef JIMP_EXERCISES_SIMPLEFORWARDLIST_H
#define JIMP_EXERCISES_SIMPLEFORWARDLIST_H

struct ForwardList{
    int value;
    ForwardList *next = nullptr;
};

ForwardList *CreateNode(int value);
ForwardList *PushFront(ForwardList *list, int value);
void Append(ForwardList *list, ForwardList *tail);
void DestroyList(ForwardList *list);

#endif //JIMP_EXERCISES_SIMPLEFORWARDLIST_H
