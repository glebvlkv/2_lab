#pragma once
#include <fstream>
#include <iostream>
#include "Map0.h"
using namespace std;

class Map1 : public Map0 {
	int Id;

public:

	Map1(int n, double d) {
		N = n;
		D = d;
	}

	Map1() :Map0() {};

	bool PrintFile(ofstream& fout)
	{
		if (!fout.is_open()) {
			return false;
		}
		else {
			fout << this->N << ' ' << this->D << endl;
		}
		return true;
	}

	Map1& ReadFile(ifstream& fin)
	{
		if (!fin.is_open()) {
			cout << "Error\n";
		}
		else {
			while (fin >> this->N >> this->D);
		}
		return *this;
	}

	friend
		ostream& operator<< (ostream& o, Map1 f)
	{
		return o << f.N << ' ' << f.D;
	}

	friend
		istream& operator>> (istream& i, Map1& f)
	{
		return i >> f.N >> f.D;
	}

	static int Count;
};

int Map1::Count = 0;// здесь буду хранить количество созданных отображений
//а также может быть создам общий массив в котором эти отображения будут храниться, 
// и тогда к ним можно будет обращаться по индексу 