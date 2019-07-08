#include<iostream>

template<typename Type>
void InsertionSort(Type* Array, int Length);
template<typename Type>
void Print(Type* Array, int Length);

int main()
{
	int Array_int[] = { 5,8,11,-3,0,35,2000,863,28,17 };
	char Array_char[] = { 'c','a','f','b','l','s','k','p','o','z' };
	double Array_double[] = { 1.25,35,2.18,7,99999,3.011,7.258, 1018.1018, 0, 5,501 };
	InsertionSort(Array_int, 10);
	InsertionSort(Array_char, 10);
	InsertionSort(Array_double, 10);
	Print(Array_int, 10);
	Print(Array_char, 10);
	Print(Array_double, 10);
	return 0;
}

template<typename Type>
void InsertionSort(Type* Array, int Length)
{
	for (int i(1); i < Length; i++)
	{
		Type key = Array[i];
		int j = i - 1;
		while (j > -1 && Array[j] > key)
		{
			Array[j + 1] = Array[j];
			j--;
		}
		Array[j + 1] = key;
	}
}

template<typename Type>
void Print(Type* Array, int Length)
{
	std::cout << "{ ";
	for (int i(0); i < 10; i++)
	{
		std::cout << Array[i] << ", ";
	}
	std::cout << " }" << std::endl;
}
