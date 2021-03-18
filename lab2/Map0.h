#pragma once
#include <fstream>
#include <iostream>
#include <string>
using namespace std;

class Map0
{
protected:
	int N;
	double D;
	string stroka;

public:
	Map0()
	{
		this->N = 0;
		this->D = 0;
		this->stroka = "\0";
	}

	Map0(const Map0& other)
	{
		this->N = other.N;
		this->D = other.D;
		this->stroka = other.stroka;
	}

	void SetN(int N)
	{
		this->N = N;
	}

	void SetD(double D)
	{
		this->D = D;
	}

	void SetStroka(string stroka)
	{
		this->stroka = stroka;
	}

	int GetN()
	{
		return this->N;
	}

	double GetD()
	{
		return this->D;
	}

	string GetStroka()
	{
		return this->stroka;
	}

	Map0& operator = (const Map0& other)
	{
		this->N = other.N;
		this->D = other.D;
		this->stroka = other.stroka;
		return *this;
	}

};