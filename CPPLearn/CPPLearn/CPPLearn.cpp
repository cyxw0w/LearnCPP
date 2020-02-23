#include<iostream>
#include<Windows.h>
#include<time.h>
using namespace std;

int main() {
	srand(time(NULL));

	/*int *arr = new int[6];
	for (int n = 0; n < 6; n++) {
		arr[n] = rand();
	}
	for (int n = 0; n < 6; n++) {
		cout << "arr[" << n << "] = " << arr[n] << endl;
	}
	if (arr) {
		delete[]arr;
		arr = NULL;
	}*/
	
	//int m, n;
	//cout << "행을 입력하시오 : ";
	//cin >> m;
	//
	//cout << "열을 입력하시오 : ";
	//cin >> n;
	//
	////주소변수를 가진 배열 동적할당
	//int **arr = new int*[m];
	//
	////값변수를 가진 배열 동적할당
	//for (int i = 0; i < m; i++)
	//	arr[i] = new int[n];
	//
	////이왕이면, 연산부와 출력부를 나누는것을 습관화하자
	//for (int i = 0; i < m; i++) {
	//	for (int j = 0; j < n; j++) {
	//		//연산
	//		arr[i][j] = rand();
	//		//출력
	//		cout << "arr[" << i << "]"
	//			<< "[" << j << "] = "
	//			<< arr[i][j] << endl;
	//	}
	//	cout << "==========================" << endl;
	//}
	//
	//if (arr) {
	//	for (int i = 0; i < m; i++) {
	//		delete[]arr[i];
	//		//arr[i] = NULL; -> NULL로 해줄 필요 없다. 값이 쓰레기값이 되어질 수가 있다.
	//	}
	//	delete[] arr;
	//	arr = NULL;
	//}



	system("pause");
	return 0;
}