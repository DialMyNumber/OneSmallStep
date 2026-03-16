// https://school.programmers.co.kr/learn/courses/30/lessons/120809
// Double each element of the array
// Use Linked List by Structure

#include <iostream>
#include <sstream>

struct Node {
	int data;
	Node* next;

	Node(int val) {
		data = val;
		next = nullptr;
	}
};

int main() {
    std::string str;
    std::getline(std::cin, str);

    std::stringstream ss(str);

    Node* head = nullptr;
    Node* tail = nullptr;

    int x;

    while (ss >> x) {
        Node* newNode = new Node(x);

        if (head == nullptr) {
            head = newNode;
            tail = newNode;
        }
        else {
            tail->next = newNode;
            tail = newNode;
        }
    }

    Node* cur = head;
    while (cur != nullptr) {
        cur->data *= 2;
        cur = cur->next;
    }

    cur = head;
    while (cur != nullptr) {
        std::cout << cur->data << " ";
        cur = cur->next;
    }

    return 0;
}
