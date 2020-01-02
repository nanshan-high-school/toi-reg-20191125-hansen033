#include <iostream>
using namespace std;
//
bool check(int &n, int m, int a[m][2], int cs, int ce, int t){
	if(t == n)
		return 0;
	bool checker = 0;
	for(int t = 0 ; t < m ; t ++){
		if(a[t][0] == cs){
			if(a[t][1] == ce)
				return 1;
			if(check(n, m, a, a[t][1], ce, t + 1) == 1)
				return 1;
		}
	}
	return 0;
}

int main() {
	int n, m, q;
	bool result;
	cin >> n >> m >> q;
	int a[m][2], o[q][2];
	for(int t = 0 ; t < m ; t ++)
		cin >> a[t][0] >> a[t][1];
	for(int t = 0 ; t < q ; t ++)
		cin >> o[t][0] >> o[t][1];
	for(int t = 0 ; t < q ; t ++){
		result = check(n, m, a, o[t][0], o[t][1], 1);
		if(result == 1)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
}
