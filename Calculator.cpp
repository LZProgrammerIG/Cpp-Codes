#include <iostream>
using namespace std;

int main(){
    int a;
    int b;
    int c;
    int op;
   
    while(true){

        cout <<"1. Add two numbers. \n";
        cout <<"2. Subtract two numbers. \n";
        cout <<"3. Multiply two numbers. \n";
        cout <<"4. Divide two numbers. \n";
        cout <<"5. Exit. \n";

        cout <<"Enter your choice here:- ";
        cin >> op;

        if (op==5) {
            break;
        } else{
            cout <<"Enter your first number here:- ";
            cin >> a;
            cout <<"Enter you second number here:- ";
            cin >> b;

            if (op==1) {
                c=a+b;
                cout << c <<endl;
            } else if(op==2){
                c=a-b;
                cout << c <<endl;
            } else if(op==3){
                c=a*b;
                cout << c <<endl;
            } else if(op==4){
                if (b!=0){
                    c=a/b;
                    cout << c <<endl;
                } else {
                    cout <<"Can't divide by 0 \n";
                }
            } else{
                cout <<"Enter correct choice!!";
            }
        }
    }
    
    return 0;
}