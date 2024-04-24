#include <iostream>
#include <algorithm>

using namespace std;

int pairSum(int *arr, int size, int x){
	//sort(arr, arr+size);
	
	int count=0;
	
	for (int i=0, j=size-1; i<j; ){
		
		int sum=arr[i]+arr[j];
		
		if (sum < x){
			i++;
		} else if (sum > x){
			j--;
		}else{
			
			// If all elements in the array are same.
			if (arr[i]==arr[j]){
				for (int s=size-1; s>0; s--){
					count+=s;
				}
				return count;

			}else{
				
				// If the two elements are repeating
				int sub_count_left=1;
				int sub_count_right=1;
				
				for (; arr[i+1]==arr[i]; i++,size--){
					sub_count_left++;
				}
				i++;
				size--;

				for (; arr[j-1]==arr[j]; j--,size--){
					sub_count_right++;
				}
				j--;

				count+= (sub_count_left*sub_count_right);
			}
		}
		size--;
	}
	return count;
}

int tripletSum(int *input, int size, int x)
{
	sort(input,input+size);
	int super_count=0;
	
	for(int i=0; i<size-2; i++){
		int pairs=pairSum(input+i+1, size-i-1, x-input[i]);
		super_count+=pairs;
	}
		
	return super_count;
}

int main(){
    int array_size, elements,sum_element;
    cout << "Enter the size of array here:- ";
    cin >> array_size;

    int *arra=new int[array_size];

    cout << "Enter array elements here:- ";
    for (int i=0; i<array_size; i++){
        cin >> elements;
        arra[i]=elements;
    }

    cout << "Enter number whose triplets you wish to find here:- ";
    cin >> sum_element;

    cout << "The number of triplets are:- ";
    cout << tripletSum(arra,array_size,sum_element) << endl;;

    return 0;
}