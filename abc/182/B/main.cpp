#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	vector<int> a(N);
	for(int i = 0; i < N; i++) cin >> a[i];
	
	int max = 0;
	int gcd = 0;
	for(int i = 2; i <= 1000; i++) {
		int count = 0;
		for(int j = 0; j < N; j++) {
			if(a[j]%i == 0) count++;
		}

		if(count >= max) {
			max = count;
			gcd = i;
		}
	}
	cout << gcd<< endl;
	
	return 0;
}

