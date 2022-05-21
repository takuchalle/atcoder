#include <algorithm>
#include <functional>
#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int
main(int argc, char* argv[]) {
	int n;
	cin >> n;
	auto a = vector<int>(n);
	for (size_t i = 0; i < n; i++) {
		cin >> a[i];	
	}

	sort(a.begin(), a.end(), greater<int>());
	
	int alice = 0;
	int bob = 0;

	for (size_t i = 0; i < n; i++) {
		cout << a[i] << endl;
		if (i & 1) bob += a[i];
		else alice += a[i];
	}

	cout << alice - bob << endl;
	
	return 0;
}
