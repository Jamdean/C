/* ��� ������? */
#include <stdio.h>
int main() {
	int a;
	int b;
	int* const pa = &a;
	*pa = 3; // �ùٸ� ����
	pa = &b; // �ùٸ��� ���� ����
	return 0;
}