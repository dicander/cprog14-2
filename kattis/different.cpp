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
	printf("%ld\n", labs(first-second));
	return 1;
}


int main() {
	while(solve());
}
