#include<iostream>
using namespace std;

int main()
{
	//초기화 불필요, 배열 안에 상수는 const상수로 만든 다음에 넣는 것이 더 일반적이라고 설현교수님이 말씀해주심 (민진)
	//배열 2개를 비교하는 것도 괜찮지만 메모리 차지가 커지니까 한 개의 배열 속의 원소끼리 비교해서 결과를 얻는 것이 더 효율적으로 보임. (민진)
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
		for (int i = 0, k = 7; i < 8; i++, k--) {
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
