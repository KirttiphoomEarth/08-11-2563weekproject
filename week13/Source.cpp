#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	int X1 = 0, X2 = 0, X3 = 0, e = 0;
	int i;
	char x1[10], x2[10], x3[10], check[10];
	scanf("%s %s %s", &x1, &x2, &x3);

	for (i = 0; x1[i] != '\0'; i++)
	{
		if (x1[i] == 53)
		{
			X1++;

		}
		else e++;
	}

	for (i = 0; x2[i] != '\0'; i++)
	{
		if (x2[i] == 53)
		{
			X2++;

		}
		else e++;
	}

	for (i = 0; x3[i] != '\0'; i++)
	{
		if (x3[i] == 53)
		{
			X3++;

		}
		else e++;
	}
	if (X1 > 10 or X2 > 10 or X3 > 10 or e > 0)
	{
		printf("ERROR");
	}
	else if (X1 == X2 and X1 == X3 and X2 == X3)
	{
		printf("Thery are crazy");
	}
	else if (X1 == X2)
	{
		printf("Noon and Jane is crazy");
	}
	else if (X1 == X3)
	{
		printf("Noon and Bow is crazy");
	}
	else if (X2 == X3)
	{
		printf("Jane and Bow is crazy");
	}
	else if (X1 > X2 and X1 > X3)
	{
		printf("Noon is crazy");
	}
	else if (X2 > X1 and X2 > X3)
	{
		printf("Jane is crazy");
	}
	else if (X3 > X1 and X3 > X2)
	{
		printf("Bow is crazy");
	}



}