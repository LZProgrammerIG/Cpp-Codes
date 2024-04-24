#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> age;
    age.push_back(2);
    
    int number = 1;
    int useless = 0;

    int time;
    cout << "Enter number of years here:- ";
    cin >> time;

    while(time--){

        for (int i = 0; i < age.size(); i++){
            if (age[i] >= 2 && age[i] < 6){
                age.push_back(0);
                number++;
            }else if (age[i] > 20){
                age.erase(age.begin() + i);
                --i;
                number--;
            }

            if (age[i] >= 6){
                useless++;
            }

            age[i]++;
        }

    }

    cout << number << endl;
    cout << useless << endl;
    
    return 0;
}