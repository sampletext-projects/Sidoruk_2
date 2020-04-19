#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	int matr[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Matr[" << i << "][" << j << "] = ";
			cin >> matr[i][j];
		}
	}

	cout << "\nВы ввели матрицу\n";
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << setw(3) << matr[i][j] << " ";
		}
		cout << "\n";
	}

	cout << "Введите N: ";
	int n;
	cin >> n;

	int count = 0;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (matr[i][j] == n)
			{
				count++;
			}
		}
	}

	cout << "В матрице " << count << " элементов равных " << n << "\n";

	system("pause");

	return 0;
}
