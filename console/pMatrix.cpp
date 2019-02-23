# pMatrix.cpp
#include "pch.h"
#include <iostream>
#include <ctime>

using namespace std;

int main()
{
	// генератор випадкових чисел
	srand((unsigned)time(NULL));
	setlocale(LC_ALL, ".1251");
	system("color 0");

	// розміри матрицi
	int A[100][100];
	int n, k, i;
	char z;

	n = 5;
	int a = -99;
	int b = 99;

	do
	{
		system("cls");
		printf("\n\tЗаповнення матрицi A[%2i][%2i] цiлими двозначними числами. \n\n", n, n);

		for (k = 0; k < n; k++)
		{
			cout << "\t";
			for (i = 0; i < n; i++)
			{
				do
				{
					A[k][i] = a + rand() % (b - a + 1);
				} while (abs(A[k][i]) < 10 || abs(A[k][i]) > 99);
				printf("%5i", A[k][i]);
			}
			cout << "\n";
		}

		printf("\n\tКопiя матрицi A[%2i][%2i] цiлими двозначними числами. \n\n", n, n);

		long dob = 1;
		int poz, neg, sum, p, min, max, B[10000];

		poz = 0;
		neg = 0;
		sum = 0;
		p = 0;

		for (int j = 0; j < n; j++) B[j] = 0;

		for (k = 0; k < n; k++)
		{
			cout << "\t";
			for (i = 0; i < n; i++)
			{
				//if(k!=i) printf("%5i", A[k][i]);							// - 01
				//if (k != n-i-1) printf("%5i", A[k][i]);					// - 02
				//if (k!=i && k != n - i - 1) printf("%5i", A[k][i]);		// - 03
				//if (i%2!=0) printf("%5i", A[k][i]);						// - 04
				//if (i % 2 == 0) printf("%5i", A[k][i]);					// - 05
				//if (k % 2 != 0) printf("%5i", A[k][i]);					// - 06
				//if (k % 2 == 0) printf("%5i", A[k][i]);					// - 07
				//if (i> n/2) printf("%5i", A[k][i]);						// - 09
				//if (i< n / 2) printf("%5i", A[k][i]);						// - 10
				//if (k> n / 2) printf("%5i", A[k][i]);						// - 11
				//if (k< n / 2) printf("%5i", A[k][i]);						// - 12
				//if (k> n-i-1) printf("%5i", A[k][i]);						// - 13
				//if (k< n - i - 1) printf("%5i", A[k][i]);					// - 14
				//if (k< i) printf("%5i", A[k][i]);							// - 15
				//if (k > i) printf("%5i", A[k][i]);						// - 16
                //if(k < i || k > n - i - 1) printf("%5i", A[k][i]);		// - 17
				//if (k > i || k < n - i - 1) printf("%5i", A[k][i]);       // - 18
				//if (k > n - i - 1 || k > i) printf("%5i", A[k][i]);       // - 19
				//if (k < n - i - 1 || k < i) printf("%5i", A[k][i]);		// - 20
				//if ((k < i || k > n - i - 1) && (k > i || k < n - i - 1)) printf("%5i", A[k][i]); // - 21
				//if ((k > n - i - 1 || k > i)&&(k < n - i - 1 || k < i)) printf("%5i", A[k][i]);	// -22
				//if (i < n / 2 && k < n / 2) printf("%5i", A[k][i]);       // - 23
				//if (i > n / 3 && k > n / 3) printf("%5i", A[k][i]);       // - 24
				//if (i > n / 3 && k < n /2) printf("%5i", A[k][i]);        // - 25
				//if (i < n / 2 && k > n / 3) printf("%5i", A[k][i]);       // - 26
				//if (i < n / 2 && k > n / 3 || i > n / 3 && k < n / 2) printf("%5i", A[k][i]); // - 27
				//if (i < n / 2 && k < n / 2 || i > n / 3 && k > n / 3) printf("%5i", A[k][i]); // - 28
				



				//if (k > n / 2 || k+2 > n - i + 1) printf("%5i", A[k][i]);	// - 33
				// if (k + 1 > n / 2 && k > i) printf("%5i", A[k][i]);		// - 34
				//if (k > n/2  || k > i) printf("%5i", A[k][i]);			// - 35
				//if (k > n / 2 && k+2 > n - i + 1) printf("%5i", A[k][i]);	// - 36
				//if (i > n / 2 || k > n - i - 1) printf("%5i", A[k][i]);   // - 37
				//if (i > n / 3 && k< i) printf("%5i", A[k][i]);            // - 38
				//if (i > n / 2 || k < i) printf("%5i", A[k][i]);			// - 39
				//if (i > n / 2 && k > n - i - 1) printf("%5i", A[k][i]);	// - 40
				//if (k < n - i - 1 && k > i) printf("%5i", A[k][i]);       // - 41
				//if (k < n - i - 1 && k < i) printf("%5i", A[k][i]);       // - 42
				//if (k < i && k> n - i - 1) printf("%5i", A[k][i]);		// - 43
				//if (k> n - i - 1 && k > i) printf("%5i", A[k][i]);        // - 44
                //if (i > n / 2 || k-2 > i) printf("%5i", A[k][i]);			// - 45
                //if (i < n / 2 || k+2 < i) printf("%5i", A[k][i]);			// - 46
				//if (k > n / 2 || k < i - 2) printf("%5i", A[k][i]);		// - 47
				//if (k > n / 2 || k < i - 2) printf("%5i", A[k][i]);		// - 47
				//if (k > n / 2 || k < i - 2) printf("%5i", A[k][i]);		// - 47
				//if (k < n / 2 || k > i+2) printf("%5i", A[k][i]);			// - 48
				

				else														// - 08
				{
				printf("    *");
				B[p] = A[k][i];
				p++;

				if (A[k][i] > 0)
				{
					poz++;
					sum += A[k][i];
				}
				else
				{
					neg++;
					dob *= A[k][i];
				}
				}
			}
			cout << "\n";
		}

		min = B[0];
		for (int j = 0; j < p; j++)
		{
			if (B[j] < min) min = B[j];
		}

		max = B[0];
		for (int j = 0; j < p; j++)
		{
			if (B[j] > max) max = B[j];
		}

		printf("\n\n\tдодатних: %i", poz);
		printf("\n\tвiд'ємних: %i", neg);
		printf("\n\tсума додатних: %i", sum);
		printf("\n\tдобуток вiд'ємних: %i", dob);
		printf("\n\tнайбiльший: %i", max);
		printf("\n\tнайменший: %i", min);

		cout << "\n\n\tПродовжити (y/n)? ";
		cin >> z;
	} while (z != 'n');

	cout << endl << endl << "\t";
	//system("pause");
	return 0;
}
