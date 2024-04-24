#include<iostream>
using namespace std;
#include <climits>


int main(){
    int N;
    cin >> N;

    int a;
    int large=0;
    int seclarge=0;
    
    if(N<=1){
        cout << -2147483648 << endl;
    }else{
        for(int i=0; i<N; i++){
            cin >> a;

            if (a > large) {
            seclarge = large;
            large = a;
            }else if(a<large && a>seclarge){
                seclarge=a;
            }
        }

        if(seclarge==0){
            cout << -2147483648 << endl;
        }else{
            cout << seclarge << endl;
        }
    }
   
   return 0; 
}