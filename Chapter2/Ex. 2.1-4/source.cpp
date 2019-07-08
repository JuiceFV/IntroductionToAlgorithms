#include<iostream>
void BinaryAddition(int* A, int* B, int* C, int length);
void Input(int* Array, int length);
void Output(int* A, int* B, int* C, int length);


int main()
{
	int size;
	do
	{
		std::cout << "Input size of the numbers: ";
		std::cin >> size;
	} while (size <= 0);
	int* A = new int[size];
	int* B = new int[size];
	int* C = new int[size + 1];
	std::cout << "Input 1-st number: ";
	Input(A, size);
	std::cout << "Input 2-nd number: ";
	Input(B, size);
	BinaryAddition(A, B, C, size-1);
	Output(A, B, C, size);
	delete[] A;
	delete[] B;
	delete[] C;
	return 0;
}

void BinaryAddition(int* A, int* B, int* C, int length)
{
	int carry = 0;
	for (int i = length; i >= 0; i--)
	{
		C[i + 1] = (A[i] + B[i] + carry) % 2;
		(A[i] + B[i] + carry) >= 2 ? carry = 1 : carry = 0;
	}
	C[0] = carry;
}
void Input(int* Array, int length)
{
	for (int i(0); i < length; i++)
	{
		std::cin >> Array[i];
		while (Array[i] != 0 && Array[i] != 1)
		{
			system("cls");
			std::cout << "Invalid input! Try again: ";
			std::cin >> Array[i];
		}
	}
}
void Output(int* A, int* B, int* C, int length)
{
	for (int i(0); i < length; i++)
	{
		std::cout << A[i] << ' ';
	}
	std::cout << "+ ";
	for (int i(0); i < length; i++)
	{
		std::cout << B[i] << ' ';
	}
	std::cout << "= ";
	for (int i(0); i < length + 1; i++)
	{
		std::cout << C[i] << ' ';
	}

}
