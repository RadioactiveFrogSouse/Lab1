#include <iostream>
#include "keeper.h"
#include "garage.h"
#include "bus.h"
#include "car.h"
#include "menu.h"
#include "moto.h"
using namespace std;
int main() {
	setlocale(LC_ALL, "Russian");
	Keeper <Bus> bus;
	Keeper <Car> car;
	Keeper <Moto> moto;
	int button;
	bool flag = true; // ��� �������� ���������� ������� (���� ���������), ��� ����������� - ��� � ����
	while (flag) {
		system("cls"); // ���� �����, ����� ���� ������� �� ���������
		cout << "����: " << endl << endl;
		cout << "1 - �������" << endl;
		cout << "2 - ��������" << endl;
		cout << "3 - ������" << endl;
		cout << "4 - ����� �� ���������" << endl << endl;
		cout << "�������� �����: ";
		cin >> button;
		if (cin.fail()) { // �������� �� ���������� ����
			button = -1;
			cin.clear();
			cin.ignore(10000, '\n');
		}
		switch (button) {
		case 1:
			menu(bus, "Bus.txt"); // ����� ���� (�������)
			break;
		case 2:
			menu(moto, "Moto.txt"); // ����� ���� (��������)
			break;
		case 3:
			menu(car, "Car.txt"); // ����� ���� (������)
			break;
		case 4:
			flag = false; // ����� �� ���������
			cout << "\n�����" << endl;
			break;
		default:
			cout << endl << "������������ ������, ������� ������!" << endl << endl; // �������� �� ���������� ����
			system("pause");
			break;
		}
	}
	return 0;
}
