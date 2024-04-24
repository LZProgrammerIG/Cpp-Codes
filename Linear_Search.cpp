#include <iostream>
using namespace std;

int LinearSearch(int arr[], int n, int target){
    for (int i=0; i<n; i++){
        if (arr[i]==target){
            return i;
        }
    }
    return -1;

}

void printArray(int arr[],int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arra[7]={1,6,3,8,9,2,5};
    printArray(arra,7);
    int s=LinearSearch(arra,7,2);
    cout << "The position of required element is:- " << s << endl;

    return 0;
}