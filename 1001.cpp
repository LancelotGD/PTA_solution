#include <iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int a, b;
    cin >> a >> b;
    string s = to_string(a + b);
    int len = s.size();
    for (int i = 0; i < len;i++){
        if(s[i]=='-'){
            cout << '-';
            continue;
        }
            
        cout << s[i];
        if((i+1)%3==len%3&&(i+1)<len)
            cout << ",";
    }
    cin.get();
    cin.get();
    return 0;
}