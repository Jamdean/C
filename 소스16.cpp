/* ��� ������? */
#include <stdio.h>
int main() {
	int a;
	int b;
	const int* pa = &a;
	*pa = 3; // �ùٸ��� ���� ����

		pa = &b; // �ùٸ� ����
	return 0;
}int main() {	int a;	int b;	const int* pa = &a;	*pa = 3;	pa = &b;	return 0;}