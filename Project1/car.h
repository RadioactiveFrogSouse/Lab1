#pragma once
#include <fstream>
#include "garage.h"
#include "keeper.h"
using namespace std;
class Car : public Garage {
private:
	string marka;
	string model;
	string eng_vol;
	string color;
	string transm;
public:
	Car();
	~Car();
	Car(const Car&);
	void setVal() override;
	friend ofstream& operator << (ofstream& fout, Car& obj);
	friend ifstream& operator >> (ifstream& fin, Car& obj);
	friend ostream& operator << (ostream& out, Car& obj);
	friend istream& operator >> (istream& in, Car& obj);
	Car& operator =(const Car& other);
};

