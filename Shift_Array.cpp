#include <iostream>
using namespace std;

void reverse(int input[], int start, int end){
    while (start<end){
        int temp=input[start];
        input[start]=input[end];
        input[end]=temp;
        start++;
        end--;
    }
}

void shift(int input[], int d, int n)
{
    reverse(input,0,d-1);
    reverse(input,d,n-1);
    reverse(input,0,n-1);
}

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arra[6]={1,3,6,11,12,17};
    printArray(arra,6);

    shift(arra,4,6);
    cout << "The shifted Array is:- ";
    printArray(arra,6); 

    return 0;
}

