#include <iostream>
using namespace std;

int main(){ 
    int N;
	cout << "Input N here:- ";
    cin >> N;

	int divisor=1;
	for(int i=0; i!=N;){
		divisor*=10;
		i=N%divisor;
	}

	int reverse=0;
    int a;
	for(int i=0,j=10; i!=N;){
		i=N%j;
        a=i/(j/10);
        divisor/=10;
        a*=divisor;
        reverse+=a;
        j*=10;
	}
    
	cout << reverse << endl;
   
    return 0;
}