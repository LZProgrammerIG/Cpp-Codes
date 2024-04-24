#include<iostream>
using namespace std;

int main() {
    int N;
    cout << "Enter odd number of rows here:- ";
    cin >> N;

    int i=0;
    int half=(N+1)/2;
    
    while(i<half){              //Loop for first half.
        
        int j=i;
        while(j<(half-1)){      //Loop for spaces.
            cout << " ";
            j++;
        } 

        j=0;
        while(j<=i){                //Loop for middle and left stars.
            cout << "*";
            j++;
        }

        j=i;
        while(j>0){                 //Loop for right stars.
            cout << "*";
            j--;
        }

        cout <<"\n";
        i++;
    }
    
    half=N-half;
    i=0;
    while(i<half){                  //Loop for second half.
        
        int j=-1;
        while (j<i) {                //Loop for spaces.
            cout << " ";
            j++;
        }

        j=0;
        while(j<(half-i)){          //Loop for middle and left stars.
            cout << "*";
            j++;
        }

        j=0;
        while(j<(half-i-1)){        //Loop for printing right stars.
            cout << "*";
            j++;
        }    

        cout << "\n";
        i++;
    }

    return 0;
}