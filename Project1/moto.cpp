#include "moto.h"
#include <iostream>
#include <string>
using namespace std;
Moto::Moto() {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов конструктора по умолчанию (Мотоцикл)" << endl << endl;
	marka = "";
	model = "";
	eng_vol = "";
	power = "";
	specal = "";
}
Moto::Moto(const Moto& other) {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов конструктора копирования (Мотоцикл)" << endl << endl;
	*this = other;
}
Moto::~Moto() {
	setlocale(LC_ALL, "Russian");
	cout << "Вызов деструктора (Мотоцикл)" << endl << endl;
}
void Moto::setVal() {
	cin >> *this;
}
Moto& Moto::operator=(const Moto& other) {
	this->marka = other.marka;
	this->model = other.model;
	this->eng_vol = other.eng_vol;
	this->power = other.power;
	this->specal = other.specal;
	return *this;
}
ofstream& operator<<(ofstream& fout, Moto& obj) { // Функция записи в файл объекта (Мотоцикл)
	fout << obj.marka << " " << endl;
	fout << obj.model << " " << endl;
	fout << obj.eng_vol << " " << endl;
	fout << obj.power << " " << endl;
	fout << obj.specal << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Moto& obj) { // Функция чтения файла объекта (Мотоцикл)
	fin >> obj.marka >> obj.model >> obj.eng_vol >> obj.power >> obj.specal;
	return fin;
}
ostream& operator<<(ostream& out, Moto& obj) { // Функция вывода на экран данных объекта (Мотоцикл)
	setlocale(LC_ALL, "Russian");
	out << "Марка: " << obj.marka << endl;
	out << "Модель: " << obj.model << endl;
	out << "Объём двигателя: " << obj.eng_vol << endl;
	out << "Мощность двигателя: " << obj.power << endl;
	out << "Местность: " << obj.specal << endl << endl;
	return out;
}
istream& operator>>(istream& in, Moto& obj) { // Функция ввода данных объекта (Мотоцикл)
	setlocale(LC_ALL, "Russian");
	cout << "Введите данные:" << endl << endl;
	cout << "Марка: ";
	cin >> obj.marka;
	cout << "Модель: ";
	cin >> obj.model;
	cout << "Объём двигателя: ";
	cin >> obj.eng_vol;
	cout << "Мощность двигателя: ";
	cin >> obj.power;
	cout << "Местность: ";
	cin >> obj.specal;
	return in;
}
