#include <iostream>
#include <cstring>
using namespace std;

bool isPalindrome(char arr[],int n){

    //Base Case
    if (n==0 || n==1){
        return true;
    }

    //Main Code
    if (arr[0]!=arr[n-1]){
        return false;
    }
    
    bool ans=isPalindrome(arr+1,n-2);
    return ans;

}

int main(){
    char arra[]="wow";
    int size=strlen(arra);

    string check= (isPalindrome(arra,size))?"true":"false";
    cout << check << endl;

    return 0;
}