#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int main(){
    int num;
    cin >> num;
    int maxn = sqrt(num)+1,len=0;
    int beginnum=0;
    for (int i = 2; i <= maxn;i++){
        int divNum = 1;
        for (int j = i; j <= maxn&&divNum<num;j++){
            divNum *= j;
            if(divNum==0)
                return 0;
            if(num%divNum==0){
                if(j-i+1>len){
                    len = j - i + 1;
                    beginnum = i;
            }
            }
            else
                break;
        }
    }
    if(len==0){
        cout << 1 <<endl;
        cout << num;
        return 0;
    }
    cout << len<<endl;   
        cout << beginnum;
        for (int i = 1; i < len;i++){
            cout << "*" << beginnum + i;
        }
        return 0;
}