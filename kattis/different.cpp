#include <iostream>
#include <cstdio>
#include <cmath>
#include <cstdlib>


int solve() {
	int64_t first;
	int64_t second;
	if(scanf("%lld %lld", &first, &second)==EOF) {
		return 0;
	}
	printf("%lld\n", llabs(first-second));
	return 1;
}


int main() {
	std::cin.sync_with_stdio(false);
	while(solve());
}
