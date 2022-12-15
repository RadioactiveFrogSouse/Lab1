#include "moto.h"
#include <iostream>
#include <string>
using namespace std;
Moto::Moto() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� (��������)" << endl << endl;
	marka = "";
	model = "";
	eng_vol = "";
	power = "";
	specal = "";
}
Moto::Moto(const Moto& other) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ ����������� (��������)" << endl << endl;
	*this = other;
}
Moto::~Moto() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� (��������)" << endl << endl;
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
ofstream& operator<<(ofstream& fout, Moto& obj) { // ������� ������ � ���� ������� (��������)
	fout << obj.marka << " " << endl;
	fout << obj.model << " " << endl;
	fout << obj.eng_vol << " " << endl;
	fout << obj.power << " " << endl;
	fout << obj.specal << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Moto& obj) { // ������� ������ ����� ������� (��������)
	fin >> obj.marka >> obj.model >> obj.eng_vol >> obj.power >> obj.specal;
	return fin;
}
ostream& operator<<(ostream& out, Moto& obj) { // ������� ������ �� ����� ������ ������� (��������)
	setlocale(LC_ALL, "Russian");
	out << "�����: " << obj.marka << endl;
	out << "������: " << obj.model << endl;
	out << "����� ���������: " << obj.eng_vol << endl;
	out << "�������� ���������: " << obj.power << endl;
	out << "���������: " << obj.specal << endl << endl;
	return out;
}
istream& operator>>(istream& in, Moto& obj) { // ������� ����� ������ ������� (��������)
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "�����: ";
	cin >> obj.marka;
	cout << "������: ";
	cin >> obj.model;
	cout << "����� ���������: ";
	cin >> obj.eng_vol;
	cout << "�������� ���������: ";
	cin >> obj.power;
	cout << "���������: ";
	cin >> obj.specal;
	return in;
}
