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
	cout << &a << endl; // получаем адрес переменной а прямо при выводе
	cout << pa << endl; // выводим адр. a котор хранится в указателе pa
	cout << *pa << endl;// разименовываем указатель pa и получаем знач по адресу
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

	int n; // размер массива
	cout << "Введите размер массива: "; cin >> n;
	int* arr = new int[n];// выдел память для n элем. указанного типа и возвр. адрес выдел памяти
	int c = 0;						// этот адрес присваиваем указателю arr
	FillRand(arr, n);
	Print(arr, n);
	int l = 0;
	int j = 0;
	int d = 0;
	int e = 0; // заполнить even
	int o = 0; // заполнить odd

	for (int i = 0; i < n; i++) //перебираем массив
	{
		d = arr[i];// буфер
		//cout << d << tab;
		c = d % 2;		//проверка на чётность
		if (c == 0)
		{
			j = j + 1;	//если чётное, то складываем в j
		}
		else
		{
			l = l + 1;//Значит нечётное складываем в l
		}
		//cout << j << tab; // количество чётных
		//cout << l << endl; //количество НЕчётных
	}



	int* even = new int[j];// выдел память для j элем. Чётные
	int* odd = new int[l];// выдел память для l элем. НЕчётные
	for (int i = 0; i < n; i++) //перебираем массив
	{
		d = arr[i];// буфер
		//cout << d << tab;
		c = d % 2;		//проверка на чётность
		//cout << c << tab;
		//cout << endl;
		if (c == 0)
		{

			*(even + e) = d;	//если чётное, то складываем в even
			e = e + 1;
		}
		else
		{
			*(odd + o) = d;//Значит нечётное складываем в odd
			o = o + 1;
		}
		//cout << d << tab;
		//cout << j << tab; // количество чётных
		//cout << l << endl; //количество НЕчётных
	}
	cout << "Чётные: ";
	Print(even, j);
	cout << endl << "НЕчётные: ";
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