#include <iostream>
#include <vector>
using namespace std;

template <typename unknown>
class Node{
public:

    unknown data;
    Node<unknown> *next;
    
    // Parameterised Constructor
    Node(unknown data){
        this -> data = data;
        next = nullptr;
    }
};


template <typename unknown>
class Linked_List{
Node<unknown> *head;
Node<unknown> *tail;
int count;

public:

    // Constructor
    Linked_List(){
        head = nullptr;
        tail = nullptr;
        count = 0;
    }

    // Destructor
    ~Linked_List(){
        while (head != nullptr){
            tail = head;
            head = head -> next;
            delete tail;
        }
        
    }


    void input(vector<unknown> arra){
        int i = 0;

        while (i < arra.size()){
            Node<unknown> *temp = new Node<unknown>(arra[i]);
            
            if (head == nullptr){
                head = temp;
                tail = head;
            }else{
                tail -> next = temp;
                tail = tail -> next;
            }
            
            count++;
            i++;
        }
    }

    void input(unknown number){
        Node<unknown> *temp = new Node<unknown>(number);
        
        if (head == nullptr){
            head = temp;
            tail = head;
        }else{
            tail -> next = temp;
            tail = tail -> next;
        }
        
        count++;
    }


    void pop(){
        Node<unknown> *temp = head;

        if (count == 0){
            return;
        }else if (count == 1){
            delete head;
            head = nullptr;
            tail = nullptr;
            
            count--;
            return;
        }

        while (temp -> next -> next != nullptr){
            temp = temp -> next;
        }
        delete tail;
        temp -> next = nullptr;
        tail = temp;
        count--;
    }


    void print() const{
        Node<unknown> *temp = head;

        while (temp != nullptr){
            cout << temp -> data << " ";
            temp = temp -> next;
        }
        cout << endl;
    }


    int size() const{
        return count;
    }

};