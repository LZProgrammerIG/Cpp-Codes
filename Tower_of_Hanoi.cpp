#include <iostream>

using namespace std;

void TowerOfHanoi(int rings, char source, char helper, char destination){
    // Base Case
    if (rings == 1){
        cout << source << " -> " << destination << endl;
        return;
    }

    // Main Code

    // Moving top n-1 rings to helper
    TowerOfHanoi(rings - 1, source, destination, helper);

    // Moving last ring to destination
    cout << source << " -> " << destination << endl;

    // Moving n-1 rings from helper to destination
    TowerOfHanoi(rings - 1, helper, source, destination);
}

int main(){
    char source = 'a', helper = 'b', destination = 'c';
    int n;

    cout << "Enter number of rings here:- ";
    cin >> n;

    TowerOfHanoi(n, source, helper, destination);

    return 0;
}