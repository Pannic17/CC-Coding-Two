//
// Created by PanNic on 2023/1/25.
//

#ifndef LINKED_LIST_LINKEDLIST_H
#define LINKED_LIST_LINKEDLIST_H

class Node {
public:
    int data;
    Node* next;

    Node(int value = 0, Node* p = nullptr) {
        data = value;
        next = p;
    }
};

class LinkedList {
private:
    Node *head, *tail;
    int position;
public:
    LinkedList();
    ~LinkedList();
    void Print();
    void Traverse();
    int Length();
    bool isEmpty();

    Node* Find(int v);
    Node* Search(int at=0);

    int Pop();
    void Push(int v);
    void Insert(int at=0, int v=0);
    void Delete(int at=0);
    int GetValue(int at=0);
    void SetValue(int at=0, int v=0);
};


#endif //LINKED_LIST_LINKEDLIST_H
