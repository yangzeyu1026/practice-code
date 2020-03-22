#include <stdio.h>

void swop(int* a, int* b)
{
	int t = *b; *b = *a; *a = t;
}

int sum(int* a,int n)
{
	int ans = 0;
	for (int i = 0; i < n; i++)
		ans += a[i];
	return ans;
}
int main01()
{
	int a = 3, b = 4;
	swop(&a,&b);
	printf("%d %d\n",a,b );
	return 0;
}

int main()
{
	int a[] = {1,2,3,4};
	printf("%d\n", sum(a,3));
	return 0;
}
//以数组作为参数调用函数时， 实际上只有数组首地址传递给了函数， 需要另加一个参数作为元素个数
//&表示取地址，*表示取值