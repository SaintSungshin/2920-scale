#include <iostream>
using namespace std;

int main()
{
	const int size = 8;
	int list[size] = {};

	cout << "Enter the number 1~8: ";
	for (int i = 0; i < size; i++)
		cin >> list[i];

	/*
	for (int i = 0; i < size; i++)
	{
		int Min = list[i];
		int MinIndex = i;

		for (int j = i + 1; j < size; j++) {
			if (Min > list[j])
				Min = list[j];
		}

		if (MinIndex != i)
		{
			list[MinIndex] = list[i];
			list[i] = Min;
		}
	}
	*/
		int ascending[] = { 1,2,3,4,5,6,7,8 };
		int descending[] = { 8,7,6,5,4,3,2,1 };
		{
			if (list[size] == ascending[size])
				cout << "ascending" << endl; 

			else if (list[size] == descending[size])
				cout << "descending" << endl;

			else
				cout << "Mixed" << endl;
		}
		return 0;
	}