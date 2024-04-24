#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter number of rows here:- ";
    cin >> N;

    int i=1;
    while (i<=N){
        
        int j=i;
        while (j < N) {
            cout << " ";
            j++;
        }

        j=0;
        int k=i;
        while (j<i){
            cout << k;
            k++;
            j++;
        }

        j=i-1;
        k=2*(i-1);
        while(j>0){
            cout << k;
            k--;
            j--;
        }

        cout << "\n";
        i++;
    }

    return 0;
}