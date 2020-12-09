#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)
#define INF (1LL <<60)

template<class T>
void chmin(T& a, T b) {
	if (a > b)
		a = b;
}

int
main(int argc, char* argv[]) {
	int N;
	cin >> N;
	vector<long long> h(N);
	rep(i, N) cin >> h[i];
	
	vector<long long> dp(N, INF);
	dp[0] = 0;

	rep(i, N - 1) {
		chmin<long long>(dp[i + 1], dp[i] + abs(h[i] - h[i + 1]));
		if(i < N - 2) {
			chmin<long long>(dp[i + 2], dp[i] + abs(h[i] - h[i + 2]));
		}	
	}

	cout << dp[N - 1] << endl;

	return 0;
}
