/* * �������� �̿� */
#include <stdio.h>
int main() {
	int* p;
	int a;
	p = &a;
	a = 2;
	printf("a �� �� : %d \n", a);
	printf("*p �� �� : %d \n", *p);
	return 0;
}

int main() {
	int* p;
	int a;
	p = &a;
	a = 2;
	printf("a�� �� : %d \n", a);
	printf("*p�� �� : %d \n", *p);
}