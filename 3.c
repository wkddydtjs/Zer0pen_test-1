#include<stdio.h>
int main()
{
	int arr[5][5] = { 0 };
	int i, j;
	int Isum = 0;
	int inp;
	int max = 0;
	int MaxI = 0;
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf("%d", &inp);
			arr[i][j] = inp;
		}
	}
	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			Isum += arr[i][j];
		}
		arr[i][4] = Isum;
		Isum = 0;
	}
	for (i = 0; i < 4; i++)
	{
		max = (arr[i][4]>arr[i + 1][4]) ? arr[i][4] : arr[i + 1][4];
		MaxI = (arr[i][4]>arr[i + 1][4]) ? i + 1 : i + 2;
	}
	printf("%d %d",MaxI, max);
	puts("");

}