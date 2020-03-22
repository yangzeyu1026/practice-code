#include <bits/stdc++.h>
int main()
{
	//阶乘之和的末六位
	const int MOD = 1000000;
	int n,S = 0;
	scanf("%d",&n);
	for (int i = 0; i <= n; i++)
	{
		int factorial = 1;
		for (int j = 1; j <= i; j++)
		{
			factorial = (factorial*j%MOD);
		}
		S = (S + factorial) % MOD;
	}
	printf("%d\n", S);
	printf("Time used = %.2f\n", (double)clock() /CLOCKS_PER_SEC);
	return 0;
}
//两个问题 算法溢出和程序效率低下