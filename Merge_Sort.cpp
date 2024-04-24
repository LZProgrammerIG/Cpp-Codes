#include <iostream>
using namespace std;

void merge(int arr[], int ans[], int start, int end){
    int mid=(start+end)/2;
    int i=start,j=mid+1;
    while (i<=mid && j<=end){
        if (arr[i]<=arr[j]){
            ans[0]=arr[i];
            i++;
        }else{
            ans[0]=arr[j];
            j++;
        }
        ans++;
    }

    for (; i<=mid; i++){
        ans[0]=arr[i];
        ans++;
    }

    for (; j<=end; j++){
        ans[0]=arr[j];
        ans++;
    }

    ans--;
    for(int k=end; k>=start; k--, ans--){
        arr[k]=ans[0];
    }
}

void merge_Sort(int arr[], int start, int end){
    //Base Case
    if (start>=end){
        return;
    }
    
    // Main Code
    int mid=(start+end)/2;

    merge_Sort(arr,start,mid);
    merge_Sort(arr,mid+1,end);
    int *ans=new int[start+end+1];
    merge(arr,ans,start,end);

    delete [] ans;
}

int main(){
    int n,element;
    cout << "Enter the size of array here:- ";
    cin >> n;
    
    int *arr=new int[n];

    cout << "Enter elements here:- ";
    for(int i=0; i<n; i++){
        cin >> element;
        arr[i]=element;
    }

    //int *ans=new int[n];

    merge_Sort(arr,0,n-1);

    for (int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    
    delete [] arr;
    //delete [] ans;

    return 0;
}