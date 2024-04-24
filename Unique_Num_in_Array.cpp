#include<iostream>
using namespace std;

int findUnique(int arr[], int size)
{   
    int Unique;
    for(int i=0; i<size; i++){
        Unique=arr[i];
        int j=0;
        bool isUnique=true;
		
		for(; j<size; j++){
            //cout << j<< " ";
			if (j==i){
				continue;
			}else{
				if(arr[j]==Unique){
					isUnique=false;
					break;
            	}	
			}
        }

		if(isUnique){
			return Unique;
		}
    }
}

int main() {
	int arra[11]={5, 3, 1, 5, 1, 3, 4, 7, 4, 8, 8 };
	int a = findUnique(arra,11);
	cout << "Unique element is :- "<< a << endl;;

	return 0;	
}