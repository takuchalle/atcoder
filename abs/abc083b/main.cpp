#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int
main(int argc, char* argv[]) {
	int n, a, b;
	cin >> n >> a >> b;
	
	int ans = 0;
	for (size_t i = 1; i <= n; i++) {
		int num = i;
		int sum = 0;
		do {
			sum += num % 10;
			num /= 10;
		} while(num != 0);	

		if(sum >= a && sum <= b) {
			ans += i;
		}
	}

	cout << ans << endl;
	
	return 0;
}
