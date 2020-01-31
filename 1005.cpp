#include <iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
void to_alpha(char c){
    switch(c){
        case '0':
            cout << "zero";
            break;
        case '1':
            cout << "one";
            break;
        case '2':
            cout << "two";
            break;
        case '3':
            cout << "three";
            break;
        case '4':
            cout << "four";
            break;
        case '5':
            cout << "five";
            break;
        case '6':
            cout << "six";
            break;
        case '7':
            cout << "seven";
            break;
        case '8':
            cout << "eight";
            break;
        case '9':
            cout << "nine";
            break;
        default:
            break;
    }
}
int main(){
    string str;
    stringstream tmp;
    getline(cin, str);
    
    int sum = 0,n;
    for (int i = 0; i < str.size();i++){
        n = str[i] - '0';
        sum += n;
    }
    string result;
    tmp << sum;
    tmp >> result;
    to_alpha(result[0]);
    if(result.size()<=1)
        return 0;  
    for (int i = 1; i < result.size();i++){
        cout << " ";
        to_alpha(result[i]);
    }
        return 0;
}