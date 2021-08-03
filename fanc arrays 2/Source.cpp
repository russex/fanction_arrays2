#include<iostream>
#include<conio.h>
using namespace std;

int const ROWS = 4;
int const COLS = 6;

int summa(const int n, int arr[]);
int AVG(const int n, int arr[]);
void randArr(const int n, int arr[]);
void println(const int n, int arr[]);
int minValueIn(const int n, int arr[]);
int maxValueIn(const int n, int arr[]);

double summa(const int n, double arr[]);
double AVG(const int n, double arr[]);
void randArr(const int n, double arr[]);
void println(const int n, double arr[]);
double minValueIn(const int n, double arr[]);
double	maxValueIn(const int n, double arr[]);

long long summa(const int n, long long arr[]);
long long AVG(const int n, long long arr[]);
void randArr(const int n, long long arr[]);
void println(const int n, long long arr[]);
long long minValueIn(const int n, long long arr[]);
long long maxValueIn(const int n, long long arr[]);

char Abc(char abc, int j);
float Abc(float abc, int j);

void random2x2(int arr[ROWS][COLS]);
void println2x2(int arr[ROWS][COLS]);
void sort(int arr[ROWS][COLS]);

void random2x2(double arr[ROWS][COLS]);
void println2x2(double arr[ROWS][COLS]);
void sort(double arr[ROWS][COLS]);

void main()
{
	char program;
	setlocale(LC_ALL, "Rus");
	cout << "��� ����� ���� �������� ������� �� Enter: " << endl;
do{	
	const int n = 10;
	const int k = 4;
	int arr[n];
	double arr2[n];
	long long arr3[k];
	char abcd='t';
	float abcdf='y';
	int a = 0;
	int const ROWS = 4;
	int const COLS = 6;
	int arr2x2[ROWS][COLS] = {};
	double arr2x22[ROWS][COLS] = {};
	
	program = _getch();
	switch (program)
	{
	case '1':
		do {
			switch (program)
			{
				program = _getch();
				cout << "��������� �1 ""\"int""\": " << endl;
				cout << "��������� �2 ""\"double""\": " << endl;
				cout << "��������� �3 ""\"long long ""\": " << endl;
				cout << "������� ����� ���������: " << endl;
			case '1':
				do {
					switch (program)
					{
					case '1':
						system("CLS");
						randArr(n, arr);
						println(n, arr);
						cout << "����� ���� ��������� ������� : " << summa(n, arr);
						cout << endl;
						cout << "������� �������������� ���� ��������� ������� : " << AVG(n, arr);
						cout << endl;
						break;
					case '2':
						randArr(n, arr);
						println(n, arr);
						cout << "����������� �������� �������: " << minValueIn(n, arr) << endl;
						cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;
						break;
					case '3':
						println(n, arr);
						cout << "������������ �������� �������: " << maxValueIn(n, arr) << endl;
						break;
					case 13:
						system("CLS");
						cout << "int" << endl;
						cout << "��������� �1 ""\"������ �������������� � ����� �������""\": " << endl;
						cout << "��������� �2 ""\"����������� �������� �������""\": " << endl;
						cout << "��������� �3 ""\"������������ �������� �������""\": " << endl;
						cout << "������� ����� ���������: " << endl;
						break;
					default: if (program != 27)
						system("CLS");
						cout << "int" << endl;
						cout << "��������� �1 ""\"������ �������������� � ����� �������""\": " << endl;
						cout << "��������� �2 ""\"����������� �������� �������""\": " << endl;
						cout << "��������� �3 ""\"������������ �������� �������""\": " << endl;
						cout << "������� ����� ���������: " << endl;
						break;
					}
				} while (program != 27);
				break;
			case '2':
				do {
					switch (program)
					{
					case '1':
					system("CLS");
					randArr(n, arr2);
					println(n, arr2);
					cout << "����� ���� ��������� ������� : " << summa(n, arr2);
					cout << endl;
					cout << "������� �������������� ���� ��������� ������� : " << AVG(n, arr2);
					cout << endl;
					break;
					case'2':
					randArr(n, arr2);
					println(n, arr2);
					cout << "����������� �������� �������: " << minValueIn(n, arr2) << endl;
					cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;
					break;
					case'3':
					println(n, arr2);
					cout << "������������ �������� �������: " << maxValueIn(n, arr2) << endl;
					cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;

					case 13:
						system("CLS");
						cout << "double" << endl;
						cout << "��������� �1 ""\"������ �������������� � ����� �������""\": " << endl;
						cout << "��������� �2 ""\"����������� �������� �������""\": " << endl;
						cout << "��������� �3 ""\"������������ �������� �������""\": " << endl;
						cout << "������� ����� ���������: " << endl;
						break;
					default: if (program != 27)
						system("CLS");
						cout << "double" << endl;
						cout << "��������� �1 ""\"������ �������������� � ����� �������""\": " << endl;
						cout << "��������� �2 ""\"����������� �������� �������""\": " << endl;
						cout << "��������� �3 ""\"������������ �������� �������""\": " << endl;
						cout << "������� ����� ���������: " << endl;
						break;
					}
				} while (program != 27);
				break;
			case '3':
				do {
					switch (program)
					{
						cout << "long long" << endl;
						cout << "��������� �1 ""\"������ �������������� � ����� �������""\": " << endl;
						cout << "��������� �2 ""\"����������� �������� �������""\": " << endl;
						cout << "��������� �3 ""\"������������ �������� �������""\": " << endl;
						cout << "������� ����� ���������: " << endl;
					case '1':
						system("CLS");
						randArr(k, arr3);
						println(k, arr3);
						cout << "����� ���� ��������� ������� : " << summa(k, arr3);
						cout << endl;
						cout << "������� �������������� ���� ��������� ������� : " << AVG(k, arr3);
						cout << endl;
						cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;
						break;
					case '2':
						randArr(k, arr3);
						println(k, arr3);
						cout << "����������� �������� �������: " << minValueIn(k, arr3) << endl;
						cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;
					break;
					case'3':
						println(k, arr3);
						cout << "������������ �������� �������: " << maxValueIn(k, arr3) << endl;
						cout << "������� ����� �������� ��������� ��� ������� Enter, ����� ����� � ����: " << endl;
					case 13:
						system("CLS");
						cout << "long long" << endl;
						cout << "��������� �1 ""\"������ �������������� � ����� �������""\": " << endl;
						cout << "��������� �2 ""\"����������� �������� �������""\": " << endl;
						cout << "��������� �3 ""\"������������ �������� �������""\": " << endl;
						cout << "������� ����� ���������: " << endl;
						break;
					default: if (program != 27)
						system("CLS");
						cout << "long long" << endl;
						cout << "��������� �1 ""\"������ �������������� � ����� �������""\": " << endl;
						cout << "��������� �2 ""\"����������� �������� �������""\": " << endl;
						cout << "��������� �3 ""\"������������ �������� �������""\": " << endl;
						cout << "������� ����� ���������: " << endl;
						break;
					
					}
				} while (program != 27);
				break;
			case 13:
				system("CLS");
				cout << "��������� �1 ""\"int""\": " << endl;
				cout << "��������� �2 ""\"double""\": " << endl;
				cout << "��������� �3 ""\"long long ""\": " << endl;
				cout << "������� ����� ���������: " << endl;
				break;
			default: if (program != 27)
				system("CLS");
				cout << "��������� �1 ""\"int""\": " << endl;
				cout << "��������� �2 ""\"double""\": " << endl;
				cout << "��������� �3 ""\"long long ""\": " << endl;
				cout << "������� ����� ���������: " << endl;
				break;
			}
		} while (program != 27);
		break;
		case '2':
			do {
				switch (program)
				{
				case '1':
					cout << "������� ���������� ����� �������� ���-�� ASCII ������� ������ ������� �� �����: " << endl;; cin >> a;
					cout << Abc(abcd, a) << endl;
					break;
				case '2':
					cout << "������� ����� ����� ������� ������ ������� �� �����: " << endl;; cin >> a;
					cout << Abc(abcdf, a) << endl;
					break;
				case 13:
					system("CLS");
					cout << "��������� �1 ""\"D int""\": " << endl;
					cout << "��������� �2 ""\"���������� ���������� ������� � ������� double""\": " << endl;
					cout << "������� ����� ���������: " << endl;
					break;
				default: if (program != 27)
					system("CLS");
					cout << "��������� �1 ""\"���������� ���������� ������� � ������� int""\": " << endl;
					cout << "��������� �2 ""\"���������� ���������� ������� � ������� double""\": " << endl;
					cout << "������� ����� ���������: " << endl;
					break;
				}
			} while (program != 27);
		case '3':
			do {
				switch (program)
				{
				cout << "��������� �1 ""\"���������� ���������� ������� � ������� int""\": " << endl;
				cout << "��������� �2 ""\"���������� ���������� ������� � ������� double""\": " << endl;
				cout << "������� ����� ���������: " << endl;
				case '1':
					random2x2(arr2x2);
					println2x2(arr2x2);
					sort(arr2x2);
					println2x2(arr2x2);
					break;

				case '2':
					random2x2(arr2x22);
					println2x2(arr2x22);
					sort(arr2x22);
					println2x2(arr2x22);
					break;
				case 13:
					system("CLS");
					cout << "��������� �1 ""\"���������� ���������� ������� � ������� int""\": " << endl;
					cout << "��������� �2 ""\"���������� ���������� ������� � ������� double""\": " << endl;
					cout << "������� ����� ���������: " << endl;
					break;
				default: if (program != 27)
					system("CLS");
					cout << "��������� �1 ""\"���������� ���������� ������� � ������� int""\": " << endl;
					cout << "��������� �2 ""\"���������� ���������� ������� � ������� double""\": " << endl;
					cout << "������� ����� ���������: " << endl;
					break;
				}
			} while (program != 27);
	case 13:
		system("CLS");
		cout << "��������� �1 ""\"���������� �������""\": " << endl;
		cout << "��������� �2 ""\"��������� ������� ""\": " << endl;
		cout << "������� ����� ���������: " << endl;
		break;
	default: if (program != 27)
		system("CLS");
		cout << "��������� �1 ""\"���������� �������""\": " << endl;
		cout << "��������� �2 ""\"��������� ������� ""\": " << endl;
		cout << "������� ����� ���������: " << endl; 
		break;
	}
	}while (program != 27);

}
int summa(const int n, int arr[])
{
	int y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];

	}
	return y;
}
int AVG(const int n, int arr[])
{
	int y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];

	}
	y= (double)y / n;
	return y;
}
int minValueIn(const int n, int arr[])
{
	int min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
int maxValueIn(const int n, int arr[])
{
	int max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}
void randArr(const int n, int arr[])
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n;
	}
}
void println(const int n, int arr[])
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}

double summa(const int n, double arr[])
{
	double y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];

	}
	return y;
}
double AVG(const int n, double arr[])
{
	double y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];
	}
	y /= n;
	return y;
}
void randArr(const int n, double arr[])
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % n/3.08;
	}
}
void println(const int n, double arr[])
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
double minValueIn(const int n, double arr[])
{
	double min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
double	maxValueIn(const int n, double arr[])
{
	double max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

long long summa(const int n, long long arr[])
{
	long long y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];

	}
	return y;
}
long long AVG(const int n, long long arr[])
{
	long long  y = 0;
	for (int i = 0; i < n; i++)
	{
		y += arr[i];
	}
	y /= n;
	return y;
}
void randArr(const int n, long long arr[])
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (3500000000-3000000000)+3000000000;
	}
}
void println(const int n, long long arr[])
{
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
}
long long minValueIn(const int n, long long arr[])
{
	long long min = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] < min) min = arr[i];
	}
	return min;
}
long long maxValueIn(const int n, long long arr[])
{
	long long max = arr[0];
	for (int i = 0; i < n; i++)
	{
		if (arr[i] > max) max = arr[i];
	}
	return max;
}

char Abc(char abc,int j)
{
	 abc= (char)j;
	return abc;
}

float Abc(float abc, int j)
{
	abc = (float)j;
	return abc;
}

void random2x2(int arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (ROWS * COLS);
		}
	}
}

void println2x2(int arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void sort(int arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int x = 0; x < ROWS; x++)
			{
				for (int d = 0; d < COLS; d++)
				{
					if (arr[i][j] < arr[x][d])
					{
						int el = arr[x][d];
						arr[x][d] = arr[i][j];
						arr[i][j] = el;
					}
				}
			}
		}
	}
}

void random2x2(double arr[ROWS][COLS]) 
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % (ROWS * COLS);
		}
	}
}
void println2x2(double arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
}
void sort(double arr[ROWS][COLS])
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int x = 0; x < ROWS; x++)
			{
				for (int d = 0; d < COLS; d++)
				{
					if (arr[i][j] < arr[x][d])
					{
						int el = arr[x][d];
						arr[x][d] = arr[i][j];
						arr[i][j] = el;
					}
				}
			}
		}
	}
}