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

	int count = 0;
	while(1) {
		bool odd = false;
		for (size_t i = 0; i < n; i++) {
			if(a[i] & 1) {
				odd = true;
			} else {
				a[i] >>= 1;
			}	
		}
		if (odd) break;
		count++;
	}

	cout << count << endl;
	
	return 0;
}
