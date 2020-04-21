#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");

	cout << "Введите N: ";
	int n;
	cin >> n;

	int s = 0;

	int matr[4][4];
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << "Matr[" << i << "][" << j << "] = ";
			cin >> matr[i][j];
			if (matr[i][j] == n)
			{
				s++;
			}
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

	cout << "В матрице " << s << " элементов равных " << n << "\n";

	system("pause");

	return 0;
}
