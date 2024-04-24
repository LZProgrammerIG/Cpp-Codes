#include <iostream>
using namespace std;

void spiralPrint(int input[][5], int nRows, int nCols)
{
    int i=0,j=0;
    int row_start=0, row_end=nRows-1;
    int col_start=0, col_end=nCols-1;
    

    while(row_start<=row_end && col_start<=col_end){
        bool Looprun=false;
     
        
        for (; j<=col_end; j++){
            cout << input[i][j] << " ";
            Looprun=true;
        }
        row_start++;
       
        if (Looprun==0){
            break;
        }
        Looprun=false;



        for (j-=1,i+=1; i<=row_end; i++){
            cout << input[i][j] << " ";
            Looprun=true;
        }
        col_end--;
        
        if (Looprun==0){
            break;
        }
        Looprun=false;



        for (i-=1,j-=1; j>=col_start; j--){
            cout << input[i][j] << " ";
            Looprun=true;
        }
        row_end--;
        
        if (Looprun==0){
            break;
        }
        Looprun=false;



        for (j+=1,i-=1; i>=row_start; i--){
            cout << input[i][j] << " ";
            Looprun=true;
        }
        col_start++;
        
        if (Looprun==0){
            break;
        }
        
        i+=1;
        j+=1;
    }
}

int main(){
    int arra[5][5];
    int Rows,Cols;
    cout << "Enter Rows and Columns here:- ";
    cin >> Rows >> Cols;

    cout << "Enter Elements here:- ";
    for (int i=0; i<Rows; i++){
        for (int j=0; j<Cols; j++){
            cin >> arra [i][j];
        }
    }

    cout << "Your original Array is:- " << endl;
    for (int i=0; i<Rows; i++){
        for (int j=0; j<Cols; j++){
            cout << arra [i][j] << " ";
        }
        cout << endl;
    }

    cout << "Array in Spiral form:- " << endl;
    spiralPrint(arra,Rows,Cols);

    return 0;
}