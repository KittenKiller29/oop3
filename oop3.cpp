#include<iostream>
#include"container.h"
class test {
public:
	int t = 5;
};
class stest : public test {
public:
	int te = -5;

};
int main() {
	Storage<test> a;
	stest t,e,k;
	t.t = 1;
	/*e.t = 1;
	k.t = 2;
	a.setObject(0, t);
	a.pushObject(0,e);
	a.pushObject(-1, k);
	std::cout << a.getObject(0)->t;
	std::cout << a.getObject(1)->t;
	std::cout << a.getObject(5)->t;*/
	a.setObject(0, t);
	std::cout << a.deleteObject(0)->t;
	std::cout << a.getSize();
	a.pushObject(0, t);
	std::cout << a.getObject(0)->t;

}