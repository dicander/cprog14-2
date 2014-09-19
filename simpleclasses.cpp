#include <iostream>
using namespace std;

struct public_by_default{};
class private_by_default{};

int main() {
	public_by_default pu;
	public_by_default robin(pu);
	pu = robin;
	private_by_default pr;
	private_by_default pr_trick(std::move(pr));
	return 0;
}