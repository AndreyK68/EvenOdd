#include<iostream>
using namespace std;
using std::cout;
//using std::cin;
//using std::endl;
#define tab "\t"
void FillRand(int arr[], const int n);
void Print(int* arr, const int n);
//#define POINTERS_BASICS
//#define POINTERS_AND_ARRAYS

void main()
{
	setlocale(LC_ALL, "Russian");
#ifdef POINTERS_BASICS


	int a = 2;
	int* pa = &a;
	cout << a << endl;
	cout << &a << endl; // �������� ����� ���������� � ����� ��� ������
	cout << pa << endl; // ������� ���. a ����� �������� � ��������� pa
	cout << *pa << endl;// �������������� ��������� pa � �������� ���� �� ������
	cout << endl;
	int* pb;
	int b = 3;
	pb = &b;
	cout << b << endl;
	cout << &b << endl;
	cout << pb << endl;
	cout << *pb << endl;

#endif // POINTERS_BASICS
#ifdef POINTERS_AND_ARRAYS
	const int n = 5;
	int arr[n] = { 3,5,8,13,21 };
	cout << *arr << endl;
	for (int i = 0; i < n; i++)
	{
		cout << *(arr + i) << tab;
	}
	cout << endl;
#endif // POINTERS_AND_ARRAYS

	int n; // ������ �������
	cout << "������� ������ �������: "; cin >> n;
	int* arr = new int[n];// ����� ������ ��� n ����. ���������� ���� � �����. ����� ����� ������
	int c = 0;						// ���� ����� ����������� ��������� arr
	FillRand(arr, n);
	Print(arr, n);
	int l = 0;
	int j = 0;
	int d = 0;
	int e = 0; // ��������� even
	int o = 0; // ��������� odd

	for (int i = 0; i < n; i++) //���������� ������
	{
		d = arr[i];// �����
		//cout << d << tab;
		c = d % 2;		//�������� �� ��������
		if (c == 0)
		{
			j = j + 1;	//���� ������, �� ���������� � j
		}
		else
		{
			l = l + 1;//������ �������� ���������� � l
		}
		//cout << j << tab; // ���������� ������
		//cout << l << endl; //���������� ��������
	}



	int* even = new int[j];// ����� ������ ��� j ����. ׸����
	int* odd = new int[l];// ����� ������ ��� l ����. ��������
	for (int i = 0; i < n; i++) //���������� ������
	{
		d = arr[i];// �����
		//cout << d << tab;
		c = d % 2;		//�������� �� ��������
		//cout << c << tab;
		//cout << endl;
		if (c == 0)
		{

			*(even + e) = d;	//���� ������, �� ���������� � even
			e = e + 1;
		}
		else
		{
			*(odd + o) = d;//������ �������� ���������� � odd
			o = o + 1;
		}
		//cout << d << tab;
		//cout << j << tab; // ���������� ������
		//cout << l << endl; //���������� ��������
	}
	cout << "׸����: ";
	Print(even, j);
	cout << endl << "��������: ";
	Print(odd, l);
	delete[] arr;
	delete[] even;
	delete[] odd;
}

void FillRand(int arr[], const int n)
{
	cout << typeid(arr).name() << endl;
	for (int i = 0; i < n; i++)
	{
		*(arr + i) = rand() % 100;
	}
}
void Print(int* arr, const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
//void Print(int* even, const int j)
//{
//	for (int i = 0; i < j; i++)
//	{
//		cout << even[i] << tab;
//	}
//	cout << endl;
//}
//void Print(int* odd, const int l)
//{
//	for (int i = 0; i < l; i++)
//	{
//		cout << odd[i] << tab;
//	}
//	cout << endl;
//}