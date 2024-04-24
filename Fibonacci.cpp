// Fibonacci Series
// 1 1 2 3 5 8 13 21.... 

#include <iostream>
using namespace std;

long fib(int n){
    if(n == 0 || n == 1){
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int n;
    cout << "Enter the nth term you wish to find here:- ";
    cin >> n;

    int output=fib(n);
    cout << output << endl;
}