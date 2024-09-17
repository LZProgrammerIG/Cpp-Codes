#include <iostream>
#include <string>

using namespace std;

class Node {
public:
    string name;
    int age;
    Node* prev;
    Node* next;

    Node(string name, int age) {
        this -> name = name;
        this -> age = age;
        prev = nullptr;
        next = nullptr;
    }
};

pair<Node*, Node*> InputData() {
    string name;
    int age;
    Node* head = nullptr;
    Node* tail = nullptr;

    for (int i = 0; i < 3; i++) {
        cout << "\nEnter the name here:- ";
        cin >> name;

        cout << "Enter the age here:- ";
        cin >> age;

        Node* temp = new Node(name, age);

        if (head == nullptr) {
            head = temp;
            tail = head;
        }
        else {
            temp -> prev = tail;
            tail -> next = temp;
            tail = tail -> next;
        }
    }

    return pair(head, tail);
}


void PrintLinkedList(Node* head) {
    Node* tail = head;
     
    while (tail != nullptr) {
        cout << "\nName = " << tail -> name << endl;
        cout << "Age = " << tail -> age << endl;

        tail = tail -> next;
    }

    cout << endl;
}


Node* InsertAtFront(Node* head, Node* temp) {
    head -> prev = temp;
    temp -> next = head;

    return temp;
}


Node* DeleteAtEnd(Node* tail) {
    if (tail == nullptr) {
        return tail;
    }
    
    tail = tail -> prev;
    delete tail -> next;
    tail -> next = nullptr;

    return tail;
}



int main() {
    string name;
    int age;
    Node* head = nullptr;
    Node* tail = nullptr;

    pair<Node*, Node*> p = InputData();
    head = p.first;
    tail = p.second;

    PrintLinkedList(head);

    cout << "\nEnter the name here:- ";
    cin >> name;

    cout << "Enter the age here:- ";
    cin >> age;

    Node* temp = new Node(name, age);
    
    head = InsertAtFront(head, temp);
    tail = DeleteAtEnd(tail);

    PrintLinkedList(head);

    return 0;
}
