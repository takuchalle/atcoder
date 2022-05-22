#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int
main(int argc, char* argv[]) {
	int n, k;
	cin >> n >> k;
	auto a = vector<int>(n);
	auto b = vector<int>(k);

	int maxvalue = 0;
	for (size_t i = 0; i < n; i++) {
		cin >> a[i];	
		maxvalue = std::max(maxvalue, a[i]);
	}
	bool found = false;

	for (size_t i = 0; i < k; i++) {
		cin >> b[i];	
		found = a[b[i] - 1] == maxvalue;
		if(found) break;
	}
	
	if(found)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}
