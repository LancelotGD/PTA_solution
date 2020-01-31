#include <iostream>
#include<vector>

using namespace std;
int main(){
    float c[1001]={0};
    int count, index;
    float temp;
    scanf("%d", &count);
    while(count--){
        scanf("%d%f", &index, &temp);
        c[index] = temp;
    }
    scanf("%d", &count);
    while(count--){
        scanf("%d%f", &index, &temp);
        c[index] += temp;
    }
    int len = 0;
    for (int i = 0; i < 1001;i++){
        if(c[i]!=0)
            len++;
    }
    cout << len;
    for (int i = 1000; i >= 0;i--){
        if(c[i]!=0)
            printf(" %d %.1f", i, c[i]);
    }
        return 0;
}