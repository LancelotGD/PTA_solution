#include <iostream>
#include<vector>
#include<string>
#include<array>
using namespace std;
int main(){
    unsigned long long num, doublenum;
    cin >> num;
    doublenum = num * 2;
    
    string a, b;
    a = to_string(num);
    b = to_string(doublenum);
    if(b.length()!=a.length())
        cout << "No" << endl;
    else{
        array<int, 10> anum{};
        array<int, 10> bnum{};
        for (int i = 0; i < b.length();i++){
            anum[a[i] - '0'] +=1;
            bnum[b[i] - '0'] +=1;
        }
        if(anum==bnum)
            cout << "Yes" << endl;
        else
            cout << "No"<<endl;
    }
    cout << b;
    return 0;
}