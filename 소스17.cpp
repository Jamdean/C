/* 상수 포인터? */
#include <stdio.h>
int main() {
	int a;
	int b;
	int* const pa = &a;
	*pa = 3; // 올바른 문장
	pa = &b; // 올바르지 않은 문장
	return 0;
}