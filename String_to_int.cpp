#include <iostream>
#include <cstring>
using namespace std;

void removeFrontZeroes(char arr[]){
    // No of front zeroes
    int i=0,j=0;
    for (; arr[i]=='0'; i++){

    }
    
    // Removing Zeroes
    if (i>0){
        for (; arr[i]!='\0'; i++,j++){
            arr[j]=arr[i];
        }
        arr[j]=arr[i];
    }
}


int stringToNumber(char arr[]) {
    removeFrontZeroes(arr);
    int size=strlen(arr);
    
    // Base Case
    if (size==0){
        return 0;
    }
    
    // Main Code

    // num1 stores the first digit
    int num1=arr[0]-48;
    
    // Calculating multiple of 10
    int multiple=1;
    for (int i=1; i<size; i++){
        multiple*=10;
    }
    
    // Multiplying first digit with correct multiple of 10.
    num1*=multiple;

    // It's Recursion Time!!!
    int num2=stringToNumber(arr+1);
    return num1+num2;

}

int main(){
    int string_size;
    cout << "Enter length of string here:- ";
    cin >> string_size;

    char *input=new char[string_size];
    
    cout << "Enter your string here:- ";
    cin >> input;
    
    cout << stringToNumber(input) << endl;
    
    delete [] input;
    return 0;
}