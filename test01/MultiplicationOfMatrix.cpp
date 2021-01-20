//整型矩阵相乘
#include <iostream>
//#include <string.h> 
using namespace std;

int main()
{
	int Ra, Ca, Rb, Cb;

	//矩阵a输入 
	cin >> Ra >> Ca;
	int a[100][100] = { 0 };
	for (int i = 0; i < Ra; i++)
		for (int j = 0; j < Ca; j++)
			cin >> a[i][j];

	//矩阵b输入		
	cin >> Rb >> Cb;
	int b[100][100] = { 0 };
	for (int i = 0; i < Rb; i++)
		for (int j = 0; j < Cb; j++)
			cin >> b[i][j];

	//不能相乘的情况 
	if (Ca != Rb)
		cout << "Error: " << Ca << " != " << Rb << endl;
	//a的列数与b的行数相等，可以相乘 
	else
	{
		int m[100][100] = { 0 };
		//memset(m, 0, sizeof(m));
		for (int i = 0; i < Ra; i++)
			for (int j = 0; j < Cb; j++)
				for (int k = 0; k < Ca; k++)
					m[i][j] += a[i][k] * b[k][j];

		//输出相乘后矩阵
		cout << Ra << " " << Cb << endl;
		for (int i = 0; i < Ra; i++)
			for (int j = 0; j < Cb; j++)
			{
				if (j == Cb - 1)
					cout << m[i][j] << endl;
				else
					cout << m[i][j] << " ";
			}
	}

	return 0;
}