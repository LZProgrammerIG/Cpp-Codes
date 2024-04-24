#include <iostream>
using namespace std;

void trimSpaces(char input[]) {
    for (int i=0; input[i]!='\0'; i++){
        if (input[i]==' '){
            int j=i+1;
            while (input[j]==' '){
                j++;
            }
            input[i]=input[j];
            input[j]=' ';
            if (input[i]=='\0'){
                break;
            }
        }
    }
}

int main(){
    char arra[10];
    cout << "Enter the string here:- ";
    cin.getline(arra,10);
    trimSpaces(arra);
    cout << arra << endl;

    return 0;
}