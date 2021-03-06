#include <iostream>
using namespace std;


struct widget {
	widget() {cout << "default" << endl;} // Not part of RO3 or 5

	virtual ~widget() {cout << "destructor" << endl;} // 1
	widget(const widget& rhs) {cout << "copy" << endl;} // 2
	widget& operator=(const widget& rhs) {cout << "assignment" << endl;
    return *this;} // 3

	widget(widget&& rhs) {cout << "move" << endl;}//4
	widget& operator=(widget&& rhs) {cout << "move assignment" << endl;
    return *this;} // 5

};


struct auto_generated{};


int main() {
	widget a;
	widget b=a;
	widget c(b);
	widget d(move(a));
	b = d;
	c = move(b);

	auto_generated f;
	auto_generated g=f;
	auto_generated h(g);
	auto_generated i(move(f));
	g = i;
	h = move(g);
}
