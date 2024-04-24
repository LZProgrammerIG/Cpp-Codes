#include <iostream>
using namespace std; 

void bubbleSort(int arr[], int n) {
    for (int i=n-1; i>0; i--){
        
        for(int j=0; j<i; j++){
            
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int arra[7]={2, 13, 4, 1, 3, 6, 28};
    bubbleSort(arra,7);
    for (int i=0; i<7; i++){
        cout << arra[i] << " ";
    }

    return 0;
}   
