#pragma once
#include<iostream>
template<class T> class Storage {//Шаблон класса контейнера, внутренняя организация-массив, внешняя-массив
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
	
	void pushObject(int ind, T value);//добавление элемента
	T* deleteObject(int ind);//извлечение с удалением
	T* getObject(int ind);//извлечение без удаления
	int getSize();//получение размера контейнера
private:
	T* mas;
	int size;
	void rewriteArr(int a);//метод изменения размерности массива и его перезаписи
};
template<class T>
void Storage<T>::pushObject(int ind,T value) {
	mas[ind] = value;
}
template<class T>
T* Storage<T>::deleteObject(int ind) {
	if (getObject(ind) != nullptr) {




	}
	return nullptr;
}
template<class T>
T* Storage<T>::getObject(int ind) {
	if (ind >= size || ind < 0)
		return nullptr;
	return &mas[ind];
}
template<class T>
int Storage<T>::getSize() {

}
template<class T>
void Storage<T>::rewriteArr(int a) {

}



