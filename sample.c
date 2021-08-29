#include <stdio.h>

int main(void)
{
	int i, add, cls, max;
	add = 0;
	cls = 1;
	scanf("%d", &max);
	for (i = 1; i <= max; i++)
	{
		add += i;
		cls *= i;
	}
	printf("1から%dまで加算すると%dになったよ！\n 乗算すると%dになるよ！\n", max, add, cls);
}
