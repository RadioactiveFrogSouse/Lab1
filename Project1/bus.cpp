#include "bus.h"
#include <iostream>
#include <string>
using namespace std;
Bus::Bus() {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов конструктора по умолчанию (Автобус)" << endl << endl;
	marka = "";
	model = "";
	end_p = "";
	pas_sid = 0;
	pas_all = 0;
}
Bus::Bus(const Bus& other) {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов конструктора копирования (Автобус)" << endl << endl;
	*this = other;
}
Bus::~Bus() {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов деструктора (Автобус)" << endl << endl;
}
void Bus::setVal() {
	cin >> *this;
}
Bus& Bus::operator=(const Bus& other) {
	this->marka = other.marka;
	this->model = other.model;
	this->end_p = other.end_p;
	this->pas_sid = other.pas_sid;
	this->pas_all = other.pas_all;
	return *this;
}
ofstream& operator<<(ofstream& fout, Bus& obj) { // Функция записи в файл объекта (Автобус)
	fout << obj.marka << " " << endl;
	fout << obj.model << " " << endl;
	fout << obj.end_p << " " << endl;
	fout << obj.pas_sid << " " << endl;
	fout << obj.pas_all << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Bus& obj) { // Функция чтения файла объекта (Автобус)
	fin >> obj.marka >> obj.model >> obj.end_p >> obj.pas_sid >> obj.pas_all;
	return fin;
}
ostream& operator<<(ostream& out, Bus& obj) { // Функция вывода на экран данных объекта (Автобус)
	setlocale(LC_ALL, "Russian");
	out << "Марка: " << obj.marka << endl;
	out << "Модель: " << obj.model << endl;
	out << "Конечный маршрут: " << obj.end_p << endl;
	out << "Количество сидячих пассажирских мест: " << obj.pas_sid << endl;
	out << "Общее количество пассажирских мест: " << obj.pas_all << endl;
	return out;
}
istream& operator>>(istream& in, Bus& obj) { // Функция ввода данных объекта (Автобус)
	setlocale(LC_ALL, "Russian");
	cout << "Введите данные:" << endl << endl;
	cout << "Марка: ";
	cin >> obj.marka;
	cout << "Модель: ";
	cin >> obj.model;
	cout << "Конечный маршрут: ";
	cin >> obj.end_p;
	while (1) {
		cout << "Количество сидячих пассажирских мест: ";
		cin >> obj.pas_sid;
		if (cin.fail() || obj.pas_sid < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "Общее количество пассажирских мест: ";
		cin >> obj.pas_all;
		if (cin.fail() || obj.pas_all < 0) {
			cout << "Некорректные данные, введите заново!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	return in;
}
