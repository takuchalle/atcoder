#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int
main(int argc, char* argv[]) {
	int a,b,c,x;
	cin >> a >> b >> c >> x;

	int count = 0;
	for (size_t i = 0; i <= a; i++) {
		for (size_t j = 0; j <= b; j++) {
			for (size_t n = 0; n <= c; n++) {
				if((i * 500 + j * 100 + n * 50) == x) count++;
			}	
		}	
	}

	cout << count << endl;
	
	return 0;
}
