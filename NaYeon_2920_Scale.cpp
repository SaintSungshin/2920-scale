#include <iostream>
using namespace std;

int main()
{
	const int size = 8;
	int list[size] = {};

	cout << "Enter the number 1~8: ";
	for (int i = 0; i < size; i++)
		cin >> list[i];

		int ascending = 0;
		int descending = 0;

		for (int i = 0; i < size; i++) {
			if (list[i + 1] - list[i] == 1)
				ascending++; //count증가의 개념

			else if (list[i] - list[i + 1] == 1)
				descending++; // 똑같음
		}
		if (ascending == 7)
			cout << "ascending" << endl;
		else if (descending == 7)
			cout << "descending" << endl;
		else
			cout << "mixed" << endl;

		return 0;
	}