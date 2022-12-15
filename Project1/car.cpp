#include "car.h"
#include <iostream>
#include <string>
using namespace std;
Car::Car() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� (������)" << endl << endl;
	marka = "";
	model = "";
	eng_vol = "";
	color = "";
	transm = "";
}
Car::Car(const Car& other) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ ����������� (������)" << endl << endl;
	*this = other;
}
Car::~Car() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� (������)" << endl << endl;
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
ofstream& operator<<(ofstream& fout, Car& obj) { // ������� ������ � ���� ������� (������)
	fout << obj.marka << " " << endl;
	fout << obj.model << " " << endl;
	fout << obj.eng_vol << " " << endl;
	fout << obj.color << " " << endl;
	fout << obj.transm << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Car& obj) { // ������� ������ ����� ������� (������)
	fin >> obj.marka >> obj.model >> obj.eng_vol >> obj.color >> obj.transm;
	return fin;
}
ostream& operator<<(ostream& out, Car& obj) { // ������� ������ �� ����� ������ ������� (������)
	setlocale(LC_ALL, "Russian");
	out << "�����: " << obj.marka << endl;
	out << "������: " << obj.model << endl;
	out << "����� ���������: " << obj.eng_vol << endl;
	out << "����: " << obj.color << endl;
	out << "��� ���: " << obj.transm << endl;
	return out;
}
istream& operator>>(istream& in, Car& obj) { // ������� ����� ������ ������� (������)
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "�����: ";
	cin >> obj.marka;
	cout << "������: ";
	cin >> obj.model;
	cout << "����� ���������: ";
	cin >> obj.eng_vol;
	cout << "����: ";
	cin >> obj.color;
	cout << "��� ���: ";
	cin >> obj.transm;
	return in;
}
