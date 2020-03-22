#include <bits/stdc++.h>
/*int main01()
{
	int n;
	scanf("%d",&n);
	for (int i = 1; i <= n; i++)
	{
		printf("%d\n",i );
	}
	return 0;
}*/
int main()
{
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 0; b <= 9; b++)
		{
			int n = a*1100 +b*11;
			int m = floor(sqrt(n) + 0.5);
			if(m*m == n) printf("%d\n", n );
		}
	}
	return 0;
}