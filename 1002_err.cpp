#include <iostream>
#include<vector>
#include<stack>
#include <iomanip>
using namespace std;

class poly{
    public:
    stack<float> an;
    stack<float> exp;
};
void calcupoly(poly &s1, poly &s2, poly &s3);
int main(){
    while(1){
    int terms1, terms2;
    cin >> terms1;
    poly s1, s2, s3;
    float num;
    while(terms1--){
        cin >> num;
        s1.exp.push(num);
        cin >> num;
        s1.an.push(num);
    }
    cin >> terms2;
    while(terms2--){
        cin >> num;
        s2.exp.push(num);
        cin >> num;
        s2.an.push(num);
    }
    calcupoly(s1, s2, s3);
    int len = s3.an.size();
    cout << len ;
    while(!s3.an.empty()){
        cout << " " << s3.exp.top();
        cout << " " <<setiosflags(ios::fixed)<<setprecision(1) << s3.an.top();
        cout.unsetf(ios::fixed);
        s3.exp.pop();
        s3.an.pop();
    }
    }
    return 0;
}

void calcupoly(poly &s1,poly &s2,poly &s3){
    while(!s1.an.empty()&&!s2.an.empty()){
    if(s1.exp.top()<s2.exp.top()){
        s3.exp.push(s1.exp.top());
        s1.exp.pop();
        s3.an.push(s1.an.top());
        s1.an.pop();
    }
    else if(s1.exp.top()>s2.exp.top()){
        s3.exp.push(s2.exp.top());
        s2.exp.pop();
        s3.an.push(s2.an.top());
        s2.an.pop();
    }
    else{
        s3.exp.push(s1.exp.top());
        s2.exp.pop();
        s1.exp.pop();
        s3.an.push(s1.an.top()+s2.an.top());
        s1.an.pop();
        s2.an.pop();
    }
}
while(!s1.an.empty()){
    s3.exp.push(s1.exp.top());
    s3.an.push(s1.an.top());
    s1.an.pop();
    s1.exp.pop();
}
while(!s2.an.empty()){
    s3.exp.push(s2.exp.top());
    s3.an.push(s2.an.top());
    s2.an.pop();
    s2.exp.pop();
}
}#include <iostream>
#include<vector>
#include<stack>
#include <iomanip>
using namespace std;

class poly{
    public:
    stack<float> an;
    stack<float> exp;
};
void calcupoly(poly &s1, poly &s2, poly &s3);
int main(){
    while(1){
    int terms1, terms2;
    cin >> terms1;
    poly s1, s2, s3;
    float num;
    while(terms1--){
        cin >> num;
        s1.exp.push(num);
        cin >> num;
        s1.an.push(num);
    }
    cin >> terms2;
    while(terms2--){
        cin >> num;
        s2.exp.push(num);
        cin >> num;
        s2.an.push(num);
    }
    calcupoly(s1, s2, s3);
    int len = s3.an.size();
    cout << len ;
    while(!s3.an.empty()){
        cout << " " << s3.exp.top();
        cout << " " <<setiosflags(ios::fixed)<<setprecision(1) << s3.an.top();
        cout.unsetf(ios::fixed);
        s3.exp.pop();
        s3.an.pop();
    }
    }
    return 0;
}

void calcupoly(poly &s1,poly &s2,poly &s3){
    while(!s1.an.empty()&&!s2.an.empty()){
    if(s1.exp.top()<s2.exp.top()){
        s3.exp.push(s1.exp.top());
        s1.exp.pop();
        s3.an.push(s1.an.top());
        s1.an.pop();
    }
    else if(s1.exp.top()>s2.exp.top()){
        s3.exp.push(s2.exp.top());
        s2.exp.pop();
        s3.an.push(s2.an.top());
        s2.an.pop();
    }
    else{
        s3.exp.push(s1.exp.top());
        s2.exp.pop();
        s1.exp.pop();
        s3.an.push(s1.an.top()+s2.an.top());
        s1.an.pop();
        s2.an.pop();
    }
}
while(!s1.an.empty()){
    s3.exp.push(s1.exp.top());
    s3.an.push(s1.an.top());
    s1.an.pop();
    s1.exp.pop();
}
while(!s2.an.empty()){
    s3.exp.push(s2.exp.top());
    s3.an.push(s2.an.top());
    s2.an.pop();
    s2.exp.pop();
}
}