#include<cstdio>
#include<iostream>
#include<string>
using namespace std;
int main() {
	int n,kase=0;
	while (cin >> n&&n) {
		int t,ans = 0;
		while (n--) {
			cin >> t;
			if (t == 0) ans--;
			else ans++;
		}
		cout << "Case " << ++kase << ": " << ans<<endl;
	}
	
	//system("PAUSE");
	return 0;
}