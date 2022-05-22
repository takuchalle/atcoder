#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main(int argc, char* argv[]) {
	int n;
	int cnt[10][10] = {0};

	auto s = vector<string>(n);

	cin >> n;
	for (size_t i = 0; i < n; i++) {
		cin >> s[i];	
	}

	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < 10; j++) {
			cnt[(s[i][j] - '0')][j]++;
		}	
	}

	int ans = 1000;
	for (size_t i = 0; i < 10; i++) {
		int mx = 0;
		for (size_t j = 0; j < 10; j++) {
			int tmp = 10 * (cnt[i][j] - 1) + j;
			mx = std::max(mx, tmp);
		}	
		ans = std::min(ans, mx);
	}

	cout << ans << endl;

	return 0;
}
