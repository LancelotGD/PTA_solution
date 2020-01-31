#include <iostream>
#include<vector>

using namespace std;
int main(){
    int count;
    cin >> count;
    int floor[100];
    for (int i = 0; i < count;i++)
        cin >> floor[i];
    int fee = 0, curr_posi = 0;
    for (int i = 0; i < count;i++){
        if(curr_posi>floor[i])
            fee += 4 * (curr_posi - floor[i]) + 5;
        else
            fee += 6 * (floor[i] - curr_posi) + 5;
        curr_posi = floor[i];
    }
    cout << fee;
    return 0;
}