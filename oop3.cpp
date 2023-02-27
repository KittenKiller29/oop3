#include<iostream>
#include"container.h"
class test {

};
class stest : public test {

};
int main() {
	Storage<test> a;
	stest t;
	a.backPush(t);
}