#pragma once
#include <fstream>
#include <iostream>
#include "Map0.h"
using namespace std;

class Map2 :public Map0 {
	int Id;

public:

	Map2(double d, string str) {
		D = d;
		stroka = str;
		Count++;
		Id = Count;
	}

	bool PrintFile(ofstream& fout)
	{
		if (!fout.is_open()) {
			return false;
		}
		else {
			fout << this->D << ' ' << this->stroka << endl;
		}
		return true;
	}

	Map0& ReadFile(ifstream& fin)
	{
		if (!fin.is_open()) {
			cout << "Error\n";
		}
		else {
			while (fin >> this->D >> this->stroka);
		}
		return *this;
	}

	friend
		ostream& operator<< (ostream& o, Map2 f) {
		return o << f.D << ' ' << f.stroka;
	}

	friend
		istream& operator>> (istream& i, Map2& f) {
		return i >> f.D >> f.stroka;
	}

	static int Count;
};

int Map2::Count = 0;// здесь буду хранить количество созданных отображений
//а также может быть создам общий массив в котором эти отображения будут храниться, 
// и тогда к ним можно будет обращаться по индексу 