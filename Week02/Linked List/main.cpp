#include <iostream>
#include "LinkedList.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Pointer Example" << std::endl;
    std::cout << "Linked List Implementation" << std::endl;

    LinkedList list;
    list.Push(1);
    list.Push(2);
    list.Push(3);
    list.Push(4);
    list.Push(5);
    list.Push(6);
    list.Push(7);
    list.Print();
    list.Insert(3, 9);
    list.Print();
    list.Pop();
    list.Print();
    list.Delete(4);
    list.Print();
    list.GetValue(4);
    list.SetValue(4, 8);
    list.Print();
    std::cout << "THE END!" << std::endl;
    return 0;
}
