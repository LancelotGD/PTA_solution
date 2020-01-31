#include <iostream>
#include<vector>

using namespace std;
int main(){
    char c[13] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C'};
    int red, green, blue;
    cin >> red >> green >> blue;
    int num[6] = {0};
    num[0] = red / 13;
    num[1] = red % 13;
    num[2] = green / 13;
    num[3] = green % 13;
    num[4] = blue / 13;
    num[5] = blue % 13;
    cout << "#";
    for (int i = 0; i < 6;i++)
        cout << c[num[i]];
        return 0;
}