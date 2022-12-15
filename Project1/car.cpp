#include "car.h"
#include <iostream>
#include <string>
using namespace std;
Car::Car() {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов конструктора по умолчанию (Машина)" << endl << endl;
	marka = "";
	model = "";
	eng_vol = "";
	color = "";
	transm = "";
}
Car::Car(const Car& other) {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов конструктора копирования (Машина)" << endl << endl;
	*this = other;
}
Car::~Car() {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов деструктора (Машина)" << endl << endl;
}
void Car::setVal() {
	cin >> *this;
}
Car& Car::operator=(const Car& other) {
	this->marka = other.marka;
	this->model = other.model;
	this->eng_vol = other.eng_vol;
	this->color = other.color;
	this->transm = other.transm;
	return *this;
}
ofstream& operator<<(ofstream& fout, Car& obj) { // Функция записи в файл объекта (Машина)
	fout << obj.marka << " " << endl;
	fout << obj.model << " " << endl;
	fout << obj.eng_vol << " " << endl;
	fout << obj.color << " " << endl;
	fout << obj.transm << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Car& obj) { // Функция чтения файла объекта (Машина)
	fin >> obj.marka >> obj.model >> obj.eng_vol >> obj.color >> obj.transm;
	return fin;
}
ostream& operator<<(ostream& out, Car& obj) { // Функция вывода на экран данных объекта (Машина)
	setlocale(LC_ALL, "Russian");
	out << "Марка: " << obj.marka << endl;
	out << "Модель: " << obj.model << endl;
	out << "Объём двигателя: " << obj.eng_vol << endl;
	out << "Цвет: " << obj.color << endl;
	out << "Тип КПП: " << obj.transm << endl;
	return out;
}
istream& operator>>(istream& in, Car& obj) { // Функция ввода данных объекта (Машина)
	setlocale(LC_ALL, "Russian");
	cout << "Введите данные:" << endl << endl;
	cout << "Марка: ";
	cin >> obj.marka;
	cout << "Модель: ";
	cin >> obj.model;
	cout << "Объём двигателя: ";
	cin >> obj.eng_vol;
	cout << "Цвет: ";
	cin >> obj.color;
	cout << "Тип КПП: ";
	cin >> obj.transm;
	return in;
}
