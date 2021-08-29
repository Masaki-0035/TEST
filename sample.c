#include <stdio.h>

int main(void)
{
	int i, Ans, max;
	Ans = 0;
	scanf("%d", &max);
	for (i = 0; i <= max; i++)
	{
		Ans += i;
	}
	printf("1から%dまで加算すると%dになったよ！", max, Ans);
}
