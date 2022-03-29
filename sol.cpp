#include <bits/stdc++.h>
using namespace std;

void perform_test() {
	int x;
	cin >> x;
	// just check if the sum of x and 7 is > 170
	cout << (x + 7 > 170 ? "Yes" : "No") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tc = 1;
	//cin >> tc;
	for(int t = 0; t < tc; t++) {
		perform_test();
	}
	return 0;
}
