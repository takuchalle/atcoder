#include <iostream>
#include <string>
#include <vector>

using namespace std;
#define rep(i,n) for(int i = 0; i < (n); ++i)

int
main(int argc, char* argv[]) {
	string s;
	cin >> s;

	int count = 0;

	for (size_t i = 0; i < s.length(); i++) {
		if(s[i] == '1')	count++;
	}

	cout << count << endl;

	return 0;
}
