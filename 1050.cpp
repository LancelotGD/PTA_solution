#include <iostream>
#include<vector>
#include<string>
#include<string.h>
using namespace std;
int main(){
    char str1[10000], str2[10000];
    cin.getline(str1, 10000);
    cin.getline(str2, 10000);
    bool flag[256] = {false};
    for (int i = 0; i < strlen(str2);i++)
    {
        flag[str2[i]] = true;
    }
    for(int i = 0; i < strlen(str1);i++){
        if(flag[str1[i]]==false){
            printf("%c", str1[i]);
        }
    } 
    return 0;
}