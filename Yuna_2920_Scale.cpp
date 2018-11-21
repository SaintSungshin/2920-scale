#include<iostream>
using namespace std;

int main()
{
	int list[8] = { 0 };
	for (int i = 0; i < 8; i++) {
		list[i] = i + 1;
	}
	
	int answer[8] = { 0 };
	cout << "Enter the 8 numbers : ";
	for (int i = 0; i < 8; i++) {
		cin >> answer[i];
	}


	int j = 0;
	for (int i = 0; i < 8; i++) {
			if (list[i] == answer[j])
				j++;
	}
	if (j == 8) 
		cout << "ascending " << endl;

	int a = 0;
		for (int i = 0,k = 7; i < 8; i++,k--) {
					if (list[i] == answer[k])
						a++;
		}

	if (a == 8)
		cout << "descending" << endl;
	else          //ÀÌ ºÎºÐÀÌ ¹®Á¦ ÀÎµí....
		cout << "mixed" << endl;

	system("pause");
	return 0;
}
