﻿#include<iostream>
#include"container.h"
class test {
public:
	int t = 5;
};
class stest : public test {
public:
	int t = 0;
};
int main() {
	Storage<test> a(10);
	stest t;
	a.pushObject(0,t);
	std::cout << a.getObject(0)->t;
}