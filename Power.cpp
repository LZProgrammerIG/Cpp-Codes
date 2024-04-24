#include <iostream>
using namespace std;

int power(int m, int n){
    //Base Case
    if (n==0){
        return 1;
    }

    //Main Code
    int ans=power(m,--n);
    ans*=m;
    return ans;
}

double power2(double m, int n){
    //Base Case
    if (n==0){
        return 1;
    }

    //Main Code
    double ans=power2(m,--n);
    ans*=m;
    return ans;
}

int main(){
    int m,n;
    cout << "Enter integer and power here:- ";
    cin >> m >> n;
    cout << power(m,n) << endl;
    return 0;
}