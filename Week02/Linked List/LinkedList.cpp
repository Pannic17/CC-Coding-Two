//
// Created by PanNic on 2023/1/25.
//

#include "LinkedList.h"
#include<iostream>

#define ERROR NULL

LinkedList::LinkedList() {
    head=tail=NULL;
}

LinkedList::~LinkedList() {
    delete head;
    delete tail;
}

void LinkedList::Print() {
    Node *p = head;
    while (p != NULL) {
        std::cout << p->data << " \a";
        p = p->next;
    }
    std::cout << std::endl;
}

int LinkedList::Length() {
    int count = 0;
    Node *p = head->next;
    while (p != NULL) {
        count++;
        p = p->next;
    }
    return count;
}

void LinkedList::Traverse() {

}

void LinkedList::Insert(int at, int v) {
    if (at < 1 || at > Length()) {
        std::cout << "Out of Index" << std::endl;
    } else {
        Node *np = new Node(v);
        Node *p = head;
        int count = 1;
        while (at > count) {
            p = p->next;
            count++;
        }
        np->next = p->next;
        p->next = np;
    }
}

void LinkedList::Delete(int at) {
    if (at < 1 || at > Length()) {
        std::cout << "Out of Index" << std::endl;
    } else {
        Node *p = head;
        int count = 1;
        while (at > count - 1) {
            p = p->next;
            count++;
        }
        Node *dp = p->next;
        p->next = dp->next;
        delete dp;
    }
}

Node* LinkedList::Find(int v) {
    Node *p = head;
    if (p == NULL) {
        std::cout << "Empty Linked List" << std::endl;
        return ERROR;
    } else {
        while (p->next != NULL) {
            if (p->data == v) {
                return p;
            }
            p = p->next;
        }
        std::cout << "Didn't Find Value" << std::endl;
        return NULL;
    }
}

Node* LinkedList::Search(int at) {
    Node *p = head;
    if (p == NULL) {
        std::cout << "Empty Linked List" << std::endl;
        return ERROR;
    } else {
        int count = 1;
        while (at > count) {
            p = p->next;
            count++;
        }
        return p;
    }
}

int LinkedList::GetValue(int at) {
    Node *p = Search(at);
    std::cout << "Value at " << "\a";
    std::cout << at << "\a";
    std::cout << " is " << "\a";
    std::cout << p->data << std::endl;
    return p->data;
}

void LinkedList::SetValue(int at, int v) {
    Node *p = Search(at);
    p->data = v;
}

bool LinkedList::isEmpty() {
    if (head->next == NULL) {
        return true;
    } else {
        return false;
    }
}

void LinkedList::Push(int v) {
    Node *np = new Node(v);
    Node *p = head;
    if (head == NULL) {
        head = np;
    } else {
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = np;
    }
}

int LinkedList::Pop() {
    Node *p = head;
    if (p == NULL) {
        std::cout << "Empty Linked List" << std::endl;
        return ERROR;
    } else {
        head = p->next;
        return p->data;
    }
}
