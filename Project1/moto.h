#pragma once
#include <fstream>
#include "garage.h"
#include "keeper.h"
using namespace std;
class Moto : public Garage
{
private:
	string marka;
	string model;
	string eng_vol;
	string power;
	string specal;

public:
	Moto();
	~Moto();
	Moto(const Moto&);
	void setVal() override;
	friend ofstream& operator << (ofstream& fout, Moto& obj);
	friend ifstream& operator >> (ifstream& fin, Moto& obj);
	friend ostream& operator << (ostream& out, Moto& obj);
	friend istream& operator >> (istream& in, Moto& obj);
	Moto& operator =(const Moto& other);
};

