#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int
main(int argc, char* argv[]) {

	int a,b;
	cin >> a >> b;

	cout << (((a & 1) && (b & 1)) ? "Odd" : "Even") << endl;

	return 0;
}
