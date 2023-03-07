#include<iostream>
#include"container.h"
#include<time.h>
class Test {//Родительский класс
public:
	Test() {
		value = 0;
	}
	void setValue(int value) {//сеттер для value
		this->value = value;
	}
	int getValue() {//геттер для value
		return value;
	}
protected:
	int value;
};
class Daughtertest : public Test {//Дочерний класс для тестирования контейнера
public:
	Daughtertest() : Test() { value = 5;}
};
int main() {//основной код программы
	srand(time(0));
	Storage<Test> a;
	int count = 0;
	int itternum = 100;
	while (count < 3) {//цикл для тестирования контейнера
		long double time_spent = 0;
		clock_t begin = clock();
		for (int i = 0; i < itternum; i++) {//100;1000;10000 иттераций
			switch (rand()%3) {//выбор случайного действия
			case 0://удаление объекта
				a.deleteObject(rand()%a.getSize());
				break;
			case 1://вставка объекта
				a.pushObject(rand() % a.getSize(),new Daughtertest());
				break;
			case 2://вызов случайного метода объекта
				switch (rand() % 2) {
				case 0://вызов метода геттера
					a.getObject(rand() % a.getSize())->getValue();
					break;
				case 1://вызов метода сеттера
					a.getObject(rand() % a.getSize())->setValue(rand()%100);
					break;
				}
				break;
			}
		}
		clock_t end = clock();
		time_spent += (double)(end - begin) / CLOCKS_PER_SEC;
		printf("itterations: %i; time: %lf seconds\n", itternum, time_spent);
		count++;
		itternum *= 10;
	}
	
	return 0;
}