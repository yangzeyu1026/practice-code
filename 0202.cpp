#include <stdio.h>
/*int main01()
{
	int n2,count = 0;
	scanf("%d",&n2);
	long long n = n2;
	while (n>1)
	{
		if (n % 2 == 1)
		{
			n = 3*n + 1;
		}
		else n /= 2;
		count++;
	}
	printf("%d\n", n);
	return 0;
}*/
int main()
{
	//近似计算
	double sum = 0;
	for (int i = 0; ; i++)
	{
		double term = 1.0/(i*2 + 1);
		if (i % 2 == 0) sum += term;
		else sum -= term;
		if(term < 1e-6) break;//1e-6表示1乘以十的负六次方 注意是数字1
	}
	printf("%.6f\n", sum);
	return 0;
}