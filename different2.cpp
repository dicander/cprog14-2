#include <iostream>
#include <cstdint>

using namespace std;

int solve() {
	int64_t first;
	int64_t second;
	if(!(cin >> first >> second)) {
		return 0;
	}
	cout << labs(first-second) << endl;
	return 1;
}

int main() {
	cin.sync_with_stdio(false);
	while(solve());
	return 0;
}
