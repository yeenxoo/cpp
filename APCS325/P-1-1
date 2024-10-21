#include <bits/stdc++.h>

using namespace std;
int eval(){
    string s;
    int x, y;
    cin >> s;
    if(s=="f"){
        x=eval();
        return 2*x-1;
    }
    else if(s=="g"){
        x=eval();
        y=eval();
        return x+2*y-3;
    }
    else{
        return stoi(s);
    }
}
int main(){
    cout << eval();
}
