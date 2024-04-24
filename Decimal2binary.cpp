#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;

	long Binary=0;
	for(long j=1,r=0; N>0; j*=10){
		r=N%2;
		N/=2;
		Binary+=(r*j);

	}

	cout << Binary << endl;

	return 0;
}
