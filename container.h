#pragma once
#include<iostream>
template<class T> class Storage {//Ўаблон класса контейнера, внутренн€€ организаци€-список, внешн€€-массив
public:
	Storage() {

	}
	Storage(int a) {

	}
	Storage(const Storage& copy) {

	}
	~Storage() {

	}
	
	void pushObject(int ind, T value);//добавление элемента
	T deleteObject(int ind);//извлечение с удалением
	T getObject(int ind);//извлечение без удалени€
	int getSize();//получение размера контейнера
private:
	struct Node {//структура €чейки списка
		Node* next = NULL;
		T object;
	};
	int maxsize;
	int currentsize;
	Node* duck;//указатель на первую €чейку в списке
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




