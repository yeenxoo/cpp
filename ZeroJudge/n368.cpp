#include <bits/stdc++.h>
using namespace std;
bool cmp(long long x, long long y){
	return x>y;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long n, a, b, i, sum=0;
    cin >> n;
    vector<long long> numbers;
    for(i=0;i<n;i++){
    	cin >> a >> b;
    	if(max(a,b)>0) numbers.push_back(max(a,b));
    }
    sort(numbers.begin(),numbers.end(),cmp);
    for(i=0;i<n;i++){
    	if(i<numbers.size()) sum+=numbers[i];
    	cout << sum << "\n";
    }
    
}
