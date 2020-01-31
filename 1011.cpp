#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
    float a[3] = {};
    float maxtemp = 0 ,multinum = 1;
    for (int i = 0; i < 3;i++){
        for (int j = 0; j < 3;j++)
            cin >> a[j];
        maxtemp = max(a[0], max(a[1], a[2]));
        multinum *= maxtemp;
        if(a[0]>max(a[1], a[2]))
            cout << "W ";
        else if(a[1]>a[2])
            cout << "T ";
        else
            cout<<"L ";
    }
    printf("%.2f", (multinum * 0.65 - 1) * 2);
    return 0;
}