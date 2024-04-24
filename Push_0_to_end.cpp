#include <iostream>
using namespace std;

void pushZeroesEnd(int input[], int size)
{
    int i = 0 , j =0 ;

    while( j <  size ){
        if( input[j] == 0 ){
            j++;
        }
        else {
            input[i] = input[j];
            i++;
            j++;
        }
    }

    while( i < size ){
        input[i] = 0;
        i++;
    }
}

void printArray(int arr[], int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int arra[10]={0, 1, -2, 3, 4, 0, 5, -27, 9, 0};
    pushZeroesEnd(arra,10);
    printArray(arra,10);
    return 0;
}