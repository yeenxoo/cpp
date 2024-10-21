#include <bits/stdc++.h>
using namespace std;

struct ab{
	int a;
	int b;
};
bool cmp(const ab &x, const ab &y){
	if(x.a!=y.a) return x.a<y.a;
	else return x.b<y.b;
}
int main(){
	int n;
	cin >> n;
	vector<ab> vec(n);
	for(int i=0;i<n;i++){
		cin>>vec[i].a>>vec[i].b;
	}
	sort(vec.begin(),vec.end(),cmp);
	for(int i=0;i<n;i++){
		cout << vec[i].a << " " << vec[i].b <<"\n";
	}

}
