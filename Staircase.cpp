/* To find the number of ways in which one can reach the top of 
stairs by taking one, two or three steps. */

#include <iostream>
using namespace std;

int staircase(int n){
    //Base Case
    if (n<0){
        return 0;
    }else if (n==0 || n==1){
        return 1;
    }

    // Main Code
    int x=staircase(n-1);
    int y=staircase(n-2);
    int z=staircase(n-3);

    return x+y+z;
    
}

int main() {
    int n, output;
    cout << "Enter the number of stairs here:- ";
    cin >> n;
    
    output=staircase(n);
    
    cout << "The numbers of ways are:- ";
    cout<< output <<endl;

    return 0;
}