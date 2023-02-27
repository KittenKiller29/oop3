#pragma once
#include<iostream>
template<class T> class Storage {
public:
	Storage() {

	}
	Storage(int a) {

	}
	Storage(const Storage& copy) {

	}
	~Storage() {

	}
	void frontPush(T value);
	void backPush(T value);
	void midPush(T value);
	int elemDelete(T value);
	void infoTake(T value);
private:
	struct Node {
		Node* next = NULL;
		T object;
	};
	int size;
	Node* duck;
};
template<class T>
void Storage<T>::backPush(T value) {

}
template<class T>
void Storage<T>::frontPush(T value) {

}
template<class T>
void Storage<T>::midPush(T value) {

}
template<class T>
int Storage<T>::elemDelete(T value) {

}
template<class T>
void Storage<T>::infoTake(T value) {

}



