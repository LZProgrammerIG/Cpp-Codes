#include <iostream>
using namespace std;

template <typename unknown>
class Node{

unknown data;
Node<unknown> *next;

public:
    
    // Parameterised Constructor
    Node(int data){
        this -> data = data;
        next = nullptr;
    }
};

template <typename what>
class Linked_List{

Node<what> *head;
Node<what> *tail;
int count;

public:

    // Constructor
    Linked_list(){
        head = nullptr;
        tail = nullptr;
        count = 0;
    }

    // Inserting elements in Linked List
    void Input(){
        while ()
        
        if (head == nullptr){
            
        }
    }


};