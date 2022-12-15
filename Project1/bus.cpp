#include "bus.h"
#include <iostream>
#include <string>
using namespace std;
Bus::Bus() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ �� ��������� (�������)" << endl << endl;
	marka = "";
	model = "";
	end_p = "";
	pas_sid = 0;
	pas_all = 0;
}
Bus::Bus(const Bus& other) {
	setlocale(LC_ALL, "Russian");
	cout << "����� ������������ ����������� (�������)" << endl << endl;
	*this = other;
}
Bus::~Bus() {
	setlocale(LC_ALL, "Russian");
	cout << "����� ����������� (�������)" << endl << endl;
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
ofstream& operator<<(ofstream& fout, Bus& obj) { // ������� ������ � ���� ������� (�������)
	fout << obj.marka << " " << endl;
	fout << obj.model << " " << endl;
	fout << obj.end_p << " " << endl;
	fout << obj.pas_sid << " " << endl;
	fout << obj.pas_all << " " << endl;
	fout << endl;
	return fout;
}
ifstream& operator>>(ifstream& fin, Bus& obj) { // ������� ������ ����� ������� (�������)
	fin >> obj.marka >> obj.model >> obj.end_p >> obj.pas_sid >> obj.pas_all;
	return fin;
}
ostream& operator<<(ostream& out, Bus& obj) { // ������� ������ �� ����� ������ ������� (�������)
	setlocale(LC_ALL, "Russian");
	out << "�����: " << obj.marka << endl;
	out << "������: " << obj.model << endl;
	out << "�������� �������: " << obj.end_p << endl;
	out << "���������� ������� ������������ ����: " << obj.pas_sid << endl;
	out << "����� ���������� ������������ ����: " << obj.pas_all << endl;
	return out;
}
istream& operator>>(istream& in, Bus& obj) { // ������� ����� ������ ������� (�������)
	setlocale(LC_ALL, "Russian");
	cout << "������� ������:" << endl << endl;
	cout << "�����: ";
	cin >> obj.marka;
	cout << "������: ";
	cin >> obj.model;
	cout << "�������� �������: ";
	cin >> obj.end_p;
	while (1) {
		cout << "���������� ������� ������������ ����: ";
		cin >> obj.pas_sid;
		if (cin.fail() || obj.pas_sid < 0) {
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	while (1) {
		cout << "����� ���������� ������������ ����: ";
		cin >> obj.pas_all;
		if (cin.fail() || obj.pas_all < 0) {
			cout << "������������ ������, ������� ������!" << endl;
			cin.clear();
			cin.ignore(10000, '\n');
			continue;
		}
		break;
	}
	return in;
}
