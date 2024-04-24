#include<iostream>
using namespace std;


int main(){
	int N;
	cout <<"Enter no. of rows here:- ";
    cin >> N;

	int i=1;			//For No. of rows.
	int l=1;			//For printing stars.
	while(i<=N){
		int j=i;		//For No. of spaces.

		while(j<N){			//Prints spaces.
			cout <<" ";
			j++;		
		}

		int k=1;			//Prints stars.
		while(k<=l){
			cout << "*";
			k++;
		}
		
		i++;
		l=l+2;
		cout << endl;	
	}
	
	return 0;
}