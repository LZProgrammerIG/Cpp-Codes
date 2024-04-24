#include <iostream>
using namespace std;

int main(){
	int N;
	cout << "Enter the number upto which you want prime numbers:- ";
    cin >> N;

	bool divided;
	cout << 2 << endl;
	for(int i=3; i<=N; i++){
		divided=false;
		
		for(int j=2; j<i; j++){
			if(i%j==0){
				divided=true;
				break;
			}	
		}

		if(divided==false){
			cout << i << endl;
		}
	}
	
	return 0;
}