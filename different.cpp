#include <iostream>
#include <cstdio>
#include <cmath>

int solve() {
	int64_t first;
	int64_t second;
	if(scanf("%ld %ld", &first, &second)==EOF) {
		return 0;
	}
	int64_t answer;
	if(first > second) {
		answer = first - second;
	} else {
		answer = second - first;
	}
	printf("%ld\n", answer);
	return 1;
}

int main() {
	while(solve());
	return 0;
}
