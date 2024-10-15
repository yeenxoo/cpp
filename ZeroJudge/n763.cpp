#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    deque <long long> numbers;
    long long n, m, temp;
    cin >> n;
    for(int i=0;i<n;i++){
    	cin >> m;
    	numbers.push_back(m);
    }
    while(numbers.size()>1){
    	temp=numbers.front();
    	numbers.pop_front();
    	if(temp%2==0) numbers.pop_front();
		numbers.push_back(temp);
    }
    cout << numbers.front();
}
