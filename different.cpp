#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>
int solve() {
	int64_t first;
	int64_t second;
	if(scanf("%ld %ld", &first, &second)==EOF) {
		return 0;
	}
	int64_t answer;
	printf("%ld\n", labs(first-second));
	return 1;
}

int main() {
	while(solve());
	return 0;
}
