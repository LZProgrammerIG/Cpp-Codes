#include <iostream>
using namespace std;

int main(){
    char a;
    cout << "Enter you character here:- ";
    cin >> a;

    if(isupper(a)){
        cout << 1 << endl;
    } else if(islower(a)){
        cout << 0 << endl;
    } else if(!(isalpha(a))){
        cout << -1 << endl;
    }

    return 0;
}