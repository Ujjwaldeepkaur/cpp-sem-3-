#include <iostream>
using namespace std;
#include <memory>
int main() {
shared_ptr<int> p1(new int(99));
shared_ptr<int> p2 = p1;
cout << "p1: " << *p1 << ", p2: " << *p2 << std::endl;
cout << "Count: " << p1.use_count() << std::endl;
return 0;
}