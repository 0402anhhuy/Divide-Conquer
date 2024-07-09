#include<bits/stdc++.h>
using namespace std;

int count(vector<int> a, int l, int r, int x){
	if(l == r){
		if(a[l] == x) return 1;
		else return 0;
	} 
	else{
		int m = (l + r) / 2;
		return count(a, l, m, x) + count(a, m + 1, r, x);
	}
}
int main(){
	int n, x; cin >> n;
	vector<int> a(n);
	for(int i = 0; i < n; i++) cin >> a[i];
	cin >> x;
	cout << count(a, 0, n - 1, x);
	return 0;
}
