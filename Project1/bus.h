#pragma once
#include <fstream>
#include "keeper.h"
#include "garage.h"
using namespace std;
class Bus : public Garage
{
private:
	string marka;
	string model;
	double pas_sid;
	double pas_all;
	string end_p;
public:
	Bus();
	Bus(const Bus& other);
	~Bus();
	void setVal() override;
	friend ofstream& operator << (ofstream& fout, Bus& obj);
	friend ifstream& operator >> (ifstream& fin, Bus& obj);
	friend ostream& operator << (ostream& out, Bus& obj);
	friend istream& operator >> (istream& in, Bus& obj);
	Bus& operator =(const Bus& other);
};

