#include<iostream>
using namespace std;

int main() {
	int N;
	cout << "Enter Binary number here:- ";
    cin >> N;

	int num=0;
	for(int i=0,j=10,k=1,m=0; i!=N; k*=2,j*=10){
		i=N%j;
		m=i/(j/10);
		m=m*k;
		num=num+m;

	}
	cout << num << endl << endl;

	return 0;
}