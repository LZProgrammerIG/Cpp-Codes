#include<iostream>
using namespace std;


int main(){
	int N;
	cout <<"Enter number of rows here:- ";
    cin >>N;
	
    int i=1;
	
	while(i<=N){
		int k=i;
		int j=1;
		
        while (j <= i) {
			cout << k;
			j++;
			k++;
		}
		
        cout <<endl;
		i++;
		 
	}
	
	return 0;
}
