#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int Create(int* t, const int size, const int Low, const int High)
{
	for (int i = 0; i < size; i++)
		t[i] = Low + rand() % (High - Low + 1);
	return t[size];
}

void Print(int* t, const int size)
{
	for (int i = 0; i < size; i++)
		cout << setw(4) << t[i];
	cout << endl;
}


int Sum(int* t, const int size)
{
	int S = 0;
	int k = 0;
	for (int i = 0; i < size; i++)
		if ((t[i] % 2) == 0)
			S += t[i], k++;
	cout << "kilkist elementiv = " << k << endl;
	cout << "syma = " << S << endl;
	return S;

}

int main()
{
	srand((unsigned)time(NULL));
	int n;
	cin >> n;
	int* t = new int[n];
	int Low = -5;
	int High = 12;
	Create(t, n, Low, High);
	Print(t, n);
	Sum(t, n);
	return 0;
}
