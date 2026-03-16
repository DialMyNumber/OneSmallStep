// https://school.programmers.co.kr/learn/courses/30/lessons/120809
// Double each element of the array
// Use Linked List by Class

#include <iostream>
#include <sstream>

class Node {
public:
    int data;
    Node* next;

    Node(int val) {     // constructor
        data = val;
        next = nullptr;
    }
};

class myLinkedList {
private:
    Node* head;
    Node* tail;

public:
    myLinkedList() {    // constructor
        head = nullptr;
        tail = nullptr;
    }

    void insert(int x) {
        Node* newNode = new Node(x);

        if (nullptr == head) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void doubleEachElement() {
        Node* cur = head;

        while (nullptr != cur) {
            cur->data *= 2;
            cur = cur->next;
        }
    }

    void printAll() {
        Node* cur = head;

        while (nullptr != cur) {
            std::cout << cur->data << " ";
            cur = cur->next;
        }
    }

};

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::stringstream ss(str);

    myLinkedList mylist;

    int x;
    while (ss >> x) {
        mylist.insert(x);
    }

    mylist.doubleEachElement();
    mylist.printAll();

    return 0;
}
