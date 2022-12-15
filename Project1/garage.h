#pragma once
#include <fstream>
#include "garage.h"
#include "keeper.h"
using namespace std;
class Garage
{
public:
	Garage();
	virtual ~Garage();
	virtual void setVal() = 0;
};

