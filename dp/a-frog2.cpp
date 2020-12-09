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
	int N, K;
	cin >> N >> K;
	vector<long long> h(N);
	rep(i, N) cin >> h[i];
	
	vector<long long> dp(N, INF);
	dp[0] = 0;

	rep(i, N - 1) {
		rep(j, K + 1) {
			if(i + j < N)
				chmin<long long>(dp[i + j], dp[i] + abs(h[i] - h[i + j]));
		}
	}

	cout << dp[N - 1] << endl;

	return 0;
}
