#include <iostream>
#include "Map1.h"
#include "Map0.h"
#include <windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int i = 0;
	while (cout << "1. ������� ������ ������;\n",
		cout << "2. ������/������� ������ �� �����;\n",
		cout << "3. ������� ������ �� �����;\n",
		cout << "4. �������� ����������� �������� �� �������.\n",
		cout << "0. ����� ���������(��� ���������� ������ ����).\n", cin>>i, i!=0)
	{
		switch (i) {
		case 1:
			int j = 0;
			while (cout << "������� ������ ��� ����������;\n", cout << "������� ������ � �����������;\n", cin >> j, j != 0)
			{
				if (j == 1) {
					Map1 f;
					break;
				}
				if (j == 2) {
					cout << " ������� ����� : ";
					int N; double D;
					cin >> N >> D;
					Map1 f(N, D);
					break;
				}

			}
			system("pause");
			system("cls");
			break;

		case 2:
			cout << "������ ��������� �� ���������� ����� �� ������ ������� � ����, ������� ��������." << endl;
			cout << "��� ������ ������ � ��� ��������� ������ ������ �� �����." << endl;
			int j = 0;

			break;
		case 3:
			break;
		case 4:
			break;
		}

		system("pause");
		system("cls");
	}

	Map1 f(4, 8.9);
	Map1 d(9, 6.7);
	d = f;

	cout << d;
	return 0;
}