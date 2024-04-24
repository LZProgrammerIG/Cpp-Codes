#include <iostream>
#include <algorithm>

using namespace std;

void intersection(int *arr1, int *arr2, int n, int m) 
{
    sort(arr1, arr1+n);
    sort(arr2, arr2+m);

    for (int i=0,j=0; i<n && j<m; ){
        if (arr1[i]<arr2[j]){
            i++;
        }else if(arr1[i]>arr2[j]){
            j++;
        }else{
            cout << arr1[i] << " ";
            i++,j++;
        }
    }
}

int main(){
    int arra1[6]={2, 6, 8, 5, 4, 3};
    int arra2[4]={2, 3, 4, 7 };
    intersection(arra1,arra2,6,4);

    return 0;
}   