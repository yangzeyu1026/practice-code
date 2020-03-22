//生成元 如果x加上x的各位数字之和得到y，就说x是y的生成元
#include <stdio.h>
#include <string.h>
#define maxn 10005
int ans[maxn];
int main()
{
	int T, n;
	memset(ans,0,sizeof(ans));
	for (int m = 1; m < maxn; m++)
	{
		int x = m, y = m;
		while( x > 0 )
			{y += x % 10; x /= 10;}
		//y += x 等价于 y = y + x 且取模的优先级高于它 x /= 10 等价与 x = x/10
		if(ans[y] == 0 || m < ans[y]) ans[y] = m;
	}
	scanf("%d",&T);
	while(T--){//当t大于0时进入循环，然后t--，当t等于0时结束循环，如果t小于0就不进入循环了。跳过循环继续运行程序
		scanf("%d",&n);
		printf("%d\n",ans[n] );
	}
	return 0;
}