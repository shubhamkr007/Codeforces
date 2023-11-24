#include<iostream>
using namespace std;
int main(){
	int n, k, l, r, sall, sk; //5 3 1 3 13 9
	
	cin >> n>> k>> l>> r>> sall>> sk;
	sall -= sk; //sall = 4
	n -= k; //n = 2;
	int points;
	for (int i = 1; i <= k; i++){
		points = sk / (k - i + 1);
		cout << points << " ";
		sk -= points;
	}
	for (int i = 1; i <= n; i++){
		points = sall / (n - i + 1);
		cout << points << " ";
		sall -= points;
	}
	return 0;
}