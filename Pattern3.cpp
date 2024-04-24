#include<iostream>
using namespace std;


int main(){
	int N;
	cout <<"Enter number of rows here:- ";
    cin >> N;

	int i=1;
	while(i<=N){
		int j=i;
		while(j<N){
			cout << " ";
			j++;
		}
		
        int k=1;
        int l=i;
		
        while(k<=i){
			cout <<l;
			k++;
			l++;
		}
		
        cout << endl;
		i++;
	}

	return 0;
}