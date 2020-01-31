#include <iostream>
#include<vector>
#include<queue>
using namespace std;
int main(){
    int num, modinum = 0;
    cin >> num;
    string user, password;
    queue<string> modiStr;
    for (int i = 0; i < num;i++){
        cin >> user >> password;
        bool flag = false;
        int n;
        while((n=password.find("0"))!=-1){
            password.replace(n, 1, "%");
            flag = true;
            n = -1;
        }
        while((n=password.find("1"))!=-1){
             password.replace(n, 1, "@");
             flag = true;
             n = -1;
        }
        while((n=password.find("O"))!=-1){
             password.replace(n, 1, "o");
             flag = true;
             n = -1;
        }
        while((n=password.find("l"))!=-1){
             password.replace(n, 1, "L");
             flag = true;
             n = -1;
        }
        if(flag)
        {
            modiStr.push(user);
            modiStr.push(password);
            modinum++;
        }
    }
    if(modinum==0)
    {
        if(num==1)
            cout << "There is 1 account and no account is modified"<<endl ;
        else
            printf("There are %d accounts and no account is modified\n", num);
    }
    else{
        cout << modinum << endl;
        for (int i = 0; i < modinum;i++){
        cout << modiStr.front();
        modiStr.pop();
        cout << " " << modiStr.front();
        modiStr.pop();
        cout << endl;
        }
    }
    return 0;
}