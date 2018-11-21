#include <iostream>
using namespace std;

int main()
{
	int userNum[8];
	int descending = 0;
	int ascending = 0;

	for (int i = 0;i < 8;i++)
	{
		cin >> userNum[i];
	}


	for (int i = 0; i < 7;i++)
	{
		if (userNum[i] - userNum[i + 1] == 1)
			descending++;
	    if (userNum[i] - userNum[i + 1] == -1)
			ascending++;
	}

	if (descending == 7)
		cout << "descending";
	else if (ascending == 7)
		cout << "ascending";
	else cout << "mixed";

	system("pause");
	return 0;
}
