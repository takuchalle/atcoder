#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define INF (1LL << 60)

template<class T>
void chmin(T& a, T b) {
	if (a > b)
		a = b;
}

int
main(int argc, char* argv[]) {
	int N;
	cin >> N;
	vector<int> a(N);
	vector<int> b(N);
	vector<int> c(N);

	rep(i, N) cin >> a[i] >> b[i] >> c[i];

	vector<vector<int>> dp(N, vector<int>(3));

	dp[0][0] = a[0];
	dp[0][1] = b[0];
	dp[0][2] = c[0];

	for(int i = 1; i < N; i++) {
		dp[i][0] = max(dp[i - 1][1] + a[i], dp[i - 1][2] + a[i]);
		dp[i][1] = max(dp[i - 1][0] + b[i], dp[i - 1][2] + b[i]);
		dp[i][2] = max(dp[i - 1][0] + c[i], dp[i - 1][1] + c[i]);
	}

	cout << max(dp[N - 1][0], max(dp[N - 1][1], dp[N - 1][2])) << endl;

	return 0;
}
