#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isValidMove(int x, int y, int N, vector < vector < int >> & arr){
    // If the cell is out of bounds
    if (x < 0 || x >= N){
        return false;
    }else if (y < 0 || y >= N){
        return false;
    }
    
    // If the cell is blocked or visited
    else if (arr[x][y] == 0){
        return false;
    }

    // GG test passed. Welcome to the army soldier.
    return true;    
}

void searchMaze_Helper(vector < vector < int >> & arr, vector<string> &ans, int n, int x, int y, string s) {
    // Base case
    if (x == n - 1 && y == n - 1){
       ans.push_back(s);
       return;
    }

    // Main Code
    
    // Marking current cell as visited
    arr[x][y] = 0;
    
    //Moving Up 
    if (isValidMove(x - 1, y, n, arr)){
        s = s + "U"; 
        searchMaze_Helper(arr, ans, n, x - 1, y, s);

        // Backtrack
        s.pop_back();
    }

    //Moving Down 
    if (isValidMove(x + 1, y, n, arr)){
        s = s + "D"; 
        searchMaze_Helper(arr, ans, n, x + 1, y, s);

        // Backtrack
        s.pop_back();
    }

    //Moving Left
    if (isValidMove(x, y - 1 , n, arr)){
        s = s + "L"; 
        searchMaze_Helper(arr, ans, n, x, y - 1, s);
        
        // Backtrack
        s.pop_back();
    }

    //Moving Right
    if (isValidMove(x, y + 1, n, arr)){
        s = s + "R"; 
        searchMaze_Helper(arr, ans, n, x, y + 1, s);

        // Backtrack
        s.pop_back();
    }

    // Marking current cell as unvisited
    arr[x][y] = 1;
}

vector < string > searchMaze(vector < vector < int >> & arr, int n){
    vector<string> ans;

    // Shitty Edge Case
    if (arr[0][0] == 0){
        return ans;
    }

    // Main Code
    string s = "";

    searchMaze_Helper(arr, ans, n, 0, 0, s);
    return ans;
}

class Runner {
    int t;
    vector<vector<int>> arr;

public:
    void takeInput() {
        int n;
        cout << "Enter no. of elements here:-";
        cin >> n;

        cout << "Enter the array here:- \n";

        for (int i = 0; i < n; i++){
            arr.push_back(vector<int>());
            
            for (int j = 0; j < n; j++){
                int x;
                cin >> x;

                arr[i].push_back(x);
            }
        }
    }

    void executeAndPrintOutput() {
        vector<string> ans = searchMaze(arr,arr.size());
        for (int i = 0; i < ans.size(); i++){
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
};

int main(){
    
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}

