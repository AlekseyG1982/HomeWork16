#include <iostream>
#include <conio.h>
#include <ctime>


int main()
{
	std::cout << "Task 1\n\n";
	int const size = 10;
	int arr[size];
	srand(time(NULL));

	for (int i = 0; i < size; i++)
		arr[i] = 1 + rand() % 25;

	int sum = 0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	double average = sum / size;
	int n = 0;
	for (int i = 0; i < size; i++)
		if (arr[i] < average) n++;

	for (int i = 0; i < size; i++)
		std::cout << arr[i] << '\t';

	std::cout << '\n' << "Average = " << average << '\t' << ", number of elements less then average - " << n << "\n\n";


	std::cout << "Task 2\n\n";
	int const rol = 5, col=5;
	int arr1[rol][col], arr2[rol][col], arr3[rol][col];
	
	for (int i = 0; i < rol; i++)
		for(int j=0;j<col;j++)
			arr1[i][j]=1 + rand() % 25;

	for (int i = 0; i < rol; i++)
		for (int j = 0; j < col; j++)
			arr2[i][j] = 1 + rand() % 25;

	
	for (int i = 0; i < rol; i++)
		for (int j = 0; j < col; j++)
			arr3[i][j] =arr1[i][j]+arr2[i][j];

	for (int i = 0; i < rol; i++)
	{
		for (int j = 0; j < col; j++)
			std::cout << arr1[i][j] << '\t';
		std::cout << '\n';
	}
	std::cout << "\n\t\t+\n\n";
	for (int i = 0; i < rol; i++)
	{
		for (int j = 0; j < col; j++)
			std::cout << arr2[i][j] << '\t';
		std::cout << '\n';
	}
	std::cout << "\n\t\t=\n\n";

	for (int i = 0; i < rol; i++)
	{
		for (int j = 0; j < col; j++)
			std::cout << arr3[i][j] << '\t';
		std::cout << '\n';
	}
	std::cout << '\n';


	std::cout << "Task 3\n\n";

	std::cout << "Enter the 6-digit number - ";
	int num,n1,n2,n3,n4,n5,n6;
	std::cin >> num;

	if (num / 100000 < 10 and num /100000>=1)
	{
		n1 = num / 100000,
			n2 = num % 100000 / 10000,
			n3 = num % 10000 / 1000,
			n4 = num % 1000 / 100,
			n5 = num % 100 / 10,
			n6 = num % 10;

		int arr0[6]{ n1,n2,n3,n4,n5,n6 };
		for (int i = 0; i < 6; i++)
			std::cout << arr0[i] << '\t';
	}
	else std::cout << "Error whrong number!!!";

	return 0;
}