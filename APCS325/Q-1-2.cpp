#include <bits/stdc++.h>

using namespace std;
int eval(){
    string s;
    int x, y, z;
    cin >> s;
    if(s=="f"){
        x=eval();
        return 2*x-3;
    }
    else if(s=="g"){
        x=eval();
        y=eval();
        return 2*x+y-7;
    }
    else if(s=="h"){
        x=eval();
        y=eval();
        z=eval();
        return 3*x-2*y+z;
    }
    else{
        return stoi(s);
    }
}
int main(){
    cout << eval();
}
