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
	//cout << "���� �Է��Ͻÿ� : ";
	//cin >> m;
	//
	//cout << "���� �Է��Ͻÿ� : ";
	//cin >> n;
	//
	////�ּҺ����� ���� �迭 �����Ҵ�
	//int **arr = new int*[m];
	//
	////�������� ���� �迭 �����Ҵ�
	//for (int i = 0; i < m; i++)
	//	arr[i] = new int[n];
	//
	////�̿��̸�, ����ο� ��ºθ� �����°��� ����ȭ����
	//for (int i = 0; i < m; i++) {
	//	for (int j = 0; j < n; j++) {
	//		//����
	//		arr[i][j] = rand();
	//		//���
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
	//		//arr[i] = NULL; -> NULL�� ���� �ʿ� ����. ���� �����Ⱚ�� �Ǿ��� ���� �ִ�.
	//	}
	//	delete[] arr;
	//	arr = NULL;
	//}



	system("pause");
	return 0;
}