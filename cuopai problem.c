#include<stdio.h>

int main(void)
{
	int a[999];
	int result = 1, n;
	scanf("%d", &n);
	a[1] = 0;
	a[2] = 1;
	if(n == 1)
	{
		result = a[1];
	}
	else
	{
		if(n == 2)
		{
			result = 1;
		}
		else
		{
			for(int i = 3; i <= n; i++)
			{
				a[i] = (i-1) * (a[i-1] + a[i-2]);
			}
			result = a[n];
		}
	}
	printf("%d", result);
	return 0;
}