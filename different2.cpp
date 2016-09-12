#include <iostream>
#include <cstdint>

using namespace std;

int solve() {
	int64_t first;
	int64_t second;
	if(!(cin >> first >> second)) {
		return 0;
	}
	int64_t answer;

	if(first > second) {
		answer = first - second;
	} else {
		answer = second - first;
	}
	cout << answer << endl;
	return 1;
}

int main() {
	cin.sync_with_stdio(false);
	while(solve());
	return 0;
}
