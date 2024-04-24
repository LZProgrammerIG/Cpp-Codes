#include <iostream>
using namespace std;

void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{
   int i=0,j=0,a=0;
      
   while(i<size1 && j<size2){
      if (arr1[i]<=arr2[j]){
         ans[a]=arr1[i];
         i++;
      }else{
         ans[a]=arr2[j];
         j++;
      }
      a++;
   }

   while (i<size1){
      ans[a]=arr1[i];
      a++;
      i++;
   }

   while (j<size2){
      ans[a]=arr2[j];
      a++;
      j++;
   }

}

void printArray(int arr[],int n){
    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){
    int l1[5]={1, 3, 4, 7, 11};
    int l2[7]={4, 7, 9, 25, 30, 300, 450};
    int l3[12]={};

    cout << "List l1 is:- ";
    printArray(l1,5);

    cout << "List l2 is:- ";
    printArray(l2,7);

    merge(l1,5,l2,7,l3);

    cout << "List l3 is:- ";
    printArray(l3,12);

    return 0;
}