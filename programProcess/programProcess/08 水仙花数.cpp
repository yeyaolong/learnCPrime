#include<iostream>
#include<math.h>
using namespace std;

int main8() {

	// һ����λ��
	// ÿһλ�����η���ӵĺͣ�����������

	int current = 100;
	int max = 1000;
	cout << "ˮ�ɻ���������" << endl;
	while (current < 1000) {
		// �õ���λ
		int single = current % 10;
		// �õ�ʮλ
		int ten = current / 10 % 10;
		// �õ���λ��
		int hundred = current / 100;

		int result = pow(single, 3) + pow(ten, 3) + pow(hundred, 3);
		if (result == current) {
			cout << current << endl;
		}
		current++;
	}

	system("pause");
	return 0;
}