#include<stdio.h>
int main()
{
	int inp;
	int i, j;
	scanf("%d", &inp);
	for (i = 0; i < inp; i++)
	{
		for (j = 0; j <= i; j++)
		{
			printf("*");
		}
		puts("");
	}
	for (i = inp - 1; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("*");
		}
		puts("");
	}
}