#pragma once
#include<iostream>
template<class T> class Storage {//������ ������ ����������, ���������� �����������-������, �������-������
public:
	Storage() {

	}
	Storage(int a) {

	}
	Storage(const Storage& copy) {

	}
	~Storage() {

	}
	
	void pushObject(int ind, T value);//���������� ��������
	T deleteObject(int ind);//���������� � ���������
	T getObject(int ind);//���������� ��� ��������
	int getSize();//��������� ������� ����������
private:
	struct Node {//��������� ������ ������
		Node* next = NULL;
		T object;
	};
	int maxsize;
	int currentsize;
	Node* duck;//��������� �� ������ ������ � ������
};
template<class T>
void Storage<T>::pushObject(int ind,T value) {

}
template<class T>
T Storage<T>::deleteObject(int ind) {

}
template<class T>
T Storage<T>::getObject(int ind) {

}
template<class T>
int Storage<T>::getSize() {

}




