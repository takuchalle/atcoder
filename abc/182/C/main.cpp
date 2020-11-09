#include <iostream>
#include <vector>

using namespace std;

int main() {
	int N;
	cin >> N;
	
	
	for(int i = 0; i < 1 << 18; i++) {
		int a = N;
		while(a) {
			a = a >> 1;
		}

	}
	return 0;
}

