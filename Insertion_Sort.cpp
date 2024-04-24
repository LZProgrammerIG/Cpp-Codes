#include <iostream>
using namespace std;

void insertionSort(int input[], int size)
{
    for (int i=1; i<size; i++){
        int j=i-1;
        int temp=input[i];
        
        for ( ; j>=0; j--){
            if (input[i]>=input[j]){
                break;
            }
        }

        for (int k=i-1; k>j; k--){
            input[k+1]=input[k];
        }
        input[j+1]=temp;
    }
}

void printArray(int arra[], int n){
    for (int i=0; i<n; i++){
        cout << arra[i] << " ";
    }
}

int main(){
    int arra[5]={9, 3, 6, 2, 0};
    insertionSort(arra,5);
    printArray(arra,5);

    return 0;
}