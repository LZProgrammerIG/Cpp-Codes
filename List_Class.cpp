#include <iostream>
using namespace std;

class List{

int *list;
int index;
int length;

public : 

    // Constructor
    List(){
        index = 0;
        length = 20;
        list= new int[length]; 
    }

    // Copy Constructor
    List(List const & l1){
        
        // Deep Copy !!!
        list = new int [l1.length];
        
        for (int i=0; i<l1.index; i++){
            list[i] = l1.list[i];
        }

        index = l1.index;
        length = l1.length;
    }

    // = Operator Overload
    void operator=(List const & l1){
        delete [] list;
       
        list = new int [l1.length];
        
        for (int i=0; i<l1.index; i++){
            list[i] = l1.list[i];
        }

        index = l1.index;
        length = l1.length;
    }
    
    
    // Insert Elements functions
    void add(int size){
        
        // If array is full, create a new, bigger array
        if (index==length){
            length+=10;
            int *newlist = new int [length]; 
            
            for (int i=0; i<index; i++){
                newlist[i]=list[i];
            }

            delete [] list;

            list = newlist;
        }

        int element;
        
        cout << "Enter your elements here:- ";
        
        for (int i=0; i<size; i++){
            cin >> element;
            list[index] = element;
            index++;
        }
    }

    // Get element
    int get(int index) const{
        if (index >= this -> index ){
            return -1;
        }else{
            return list[index];
        }
    }

    // Print whole array
    void print() const{
        for (int i=0; i<index; i++){
            cout << list[index] << " ";
        }
        cout << endl;
    }   


};