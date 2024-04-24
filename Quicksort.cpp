#include <iostream>
using namespace std;

int Partition(int arr[], int start, int end){
    int count=0;
    for (int i=start+1; i<=end; i++){
        if (arr[i]<=arr[start]){
            count++;
        }
    }

    int index=start+count;

    //Placing Pivot to its correct position.
    int temp=arr[index];
    arr[index]=arr[start];
    arr[start]=temp;

    //Rearranging elements
    for (int i=start,j=end; i!=index && j!=index;){
        if (arr[i]<=arr[index]){
            i++;
        }else if (arr[j]>arr[index]){
            j--;
        }else{
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++,j--;
        }
    }

    return index;
}

void QuickSort(int arr[], int start, int end){
    //Base Case
    if (start>=end){
        return;
    }

    //Main Code
    int pivot_index=Partition(arr, start, end);
    QuickSort(arr,start,pivot_index-1);
    QuickSort(arr,pivot_index+1,end);
}

int main(){
    int arr_size,arr_elements;
    cout << "Enter the size of Array here:- ";
    cin >> arr_size;

    int *arr=new int[arr_size];

    cout << "Enter elements of Array here:- ";
    for (int i=0; i<arr_size; i++){
        cin >> arr_elements;
        arr[i]=arr_elements;
    }

    QuickSort(arr,0,arr_size-1);

    for (int i=0; i<arr_size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    delete [] arr; 
    return 0;
}
