#pragma once
#include<iostream>
template<class T> class Storage {//������ ������ ����������, ���������� �����������-������, �������-������
public:
	Storage() {
		size = 1;
		mas = new T[size];
	}
	Storage(int a) {
		size = a;
		mas = new T[size];
	}
	Storage(const Storage& copy) {
		size = copy.size;
		mas = new T[size];
		for (int i = 0; i < size; ++i)
			mas[i] = copy.mas[i];
	}
	~Storage() {
		delete[] mas;
	}
	
	void pushObject(int ind, T value);//���������� �������� � ��������� ��� ������������ ��������
	void setObject(int ind, T value);//���������� �������� ������� ����������������� ��������
	T* deleteObject(int ind);//���������� � ���������
	T* getObject(int ind);//���������� ��� ��������
	int getSize();//��������� ������� ����������
private:
	T* mas;//��������� �� ������
	int size;
	void rewriteArr(int a);//����� ��������� ����������� ������� � ��� ����������
};
template<class T>
void Storage<T>::pushObject(int ind,T value) {
	mas[ind] = value;
}
template<class T>
T* Storage<T>::deleteObject(int ind) {
	if (size == 0)
		return nullptr;
	if (getObject(ind) != nullptr) {




	}
	return nullptr;
}
template<class T>
T* Storage<T>::getObject(int ind) {
	if (size == 0)
		return nullptr;
	else if (ind >= size)
		return &mas[size - 1];
	else if (ind <= 0)
		return &mas[0];
	return &mas[ind];
}
template<class T>
int Storage<T>::getSize() {
	return size;
}
template<class T>
void Storage<T>::rewriteArr(int a) {

}
template<class T>
void Storage<T>::setObject(int ind, T value) {
	if (size == 0)
		return;
	else if (ind <= 0)
		mas[0] = value;
	else if (ind >= size)
		mas[size - 1] = value;
	else
		mas[ind] = value;
}



