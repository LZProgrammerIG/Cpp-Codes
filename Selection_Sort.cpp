#include <iostream>
using namespace std;

void SelectionSort(int arr[],int n){
    for (int i=0; i<n-1; i++){
        int min=arr[i];
        int minindex=i;

        for (int j=i+1; j<n; j++){
            if (arr[j]<min){
                min=arr[j];
                minindex=j;
            }
        }

        int temp=arr[i];
        arr[i]=min;
        arr[minindex]=temp;
    }
}

int main(){
    int arra[7]={2, 13, 4, 1, 3, 6, 28};
    SelectionSort(arra,7);
    
    for (int i=0; i<7; i++){
        cout << arra[i] << " ";
    }

    return 0;
}