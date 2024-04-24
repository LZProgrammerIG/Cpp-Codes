// Finds all indexes of integer x.

#include <iostream>
using namespace std;

int Index(int input[], int istart, int ostart, int size, int x, int output[]){
  // Base Case
  if (size==0){
    return ostart;
  }
  
  if (input[istart]==x){
    output[ostart]=istart;
    ostart++;
  }
  Index(input, istart+1, ostart, size-1, x, output);

}


int allIndexes(int input[], int size, int x, int output[]) {
  // Base Case
  if (size==0){
    return 0;
  }

  // Main Code
  int input_start=0;
  int output_start=0;

  return Index(input, input_start, output_start, size, x, output);

}


int main(){
    int n;
    cout << "Enter the size of Array here:- ";
    cin >> n;
  
    int *input = new int[n];
    
    cout << "Enter elements in the array:- ";
    for(int i = 0; i < n; i++) {
        cin >> input[i];
    }
    
    int x;
    cout << "Enter the element you wish to find here:- ";
    cin >> x;
    
    int *output = new int[n];
    
    int size = allIndexes(input, n, x, output);
    for(int i = 0; i < size; i++) {
      cout << output[i] << " ";
    }
    
    delete [] input;
    
    delete [] output;
    
    return 0;
}