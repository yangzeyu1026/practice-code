#include <bits/stdc++.h>
#define maxn 105//比较打的数组放在main外面 否则可能无法运行
int a[maxn][maxn];//注意在这里加分号
//int b[maxn];
/*int main01()
{
	//逆序输出
	int x,n = 0;
	while(scanf("%d", &x) == 1)
		a[n++] = x;//首先是 a[n] = x然后是n = n + 1
	for (int i = n-1; i >= 1; i--)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[0]);//需要n - 1个空格 所以分条输出
	return 0;//运行时 输出完毕后按回车然后按CTRL+Z
}
//数组复制 从a复制k个元素到b
int main02()
{
	int x,n = 0,k = 3;
	while(scanf("%d", &x) == 1)
		a[n++] = x;
	memcpy(b,a,sizeof(int)*k);//如果是全部复制 就输memcpy(b,a,sizeof(a))
	for (int i = 2; i >= 1; i--)
	{
		printf("%d ", a[i]);
	}
	printf("%d\n", a[0]);
	return 0;
}
//先尝试一下memset这个命令
int main03()
{
	int x,n = 0;
	while(scanf("%d", &x) == 1)
		a[n++] = x;
	memset(a, 0 ,sizeof(a));//注意这里只能是0
	for (int i = 0; i <= n -1; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}
//开灯问题 
int main04()
{
	int n, k, first = 1;
	memset(a,0,sizeof(a));
	scanf("%d%d", &n, &k);
	for (int i = 1; i <= k; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (j % i == 0)
			{
				a[j] =! a[j];//取非
			}
		}
	}
	for (int i = 1; i <= n; i++)
	{
		if(a[i]) {if(first) first = 0;else printf(" "); printf("%d",i);}
	}
	printf("\n");
	return 0;
}*/
//蛇形填数（二维数组）
int main()
{
	int n,x,y,tot = 0;
	scanf("%d", &n);
	memset(a,0,sizeof(a));
	tot = a[x=0][y=n-1] = 1;
	while(tot < n*n)
	{
		while(x+1<n && !a[x+1][y]) a[++x][y] = ++tot;//&&且
		while(y-1>=0 && !a[x][y-1]) a[x][--y] = ++tot;
		while(x-1>=0 && !a[x-1][y]) a[--x][y] = ++ tot;
		while(y+1<n && !a[x][y+1]) a[x][++y] = ++tot;
	}
	for ( x = 0; x < n; x++)
	{
		for ( y = 0; y < n; y++)
		{
			printf("%3d",a[x][y] );
		}
		printf("\n");
	}
	return 0;
}
//试一下 a[++n] = ++i 的顺序
/*int main()
{
	int s = 0,t = 0;
	int a[0] = 100;
	if (n <= 3)
	{
		a[++n] = ++i
	}
	printf("%d%d%d%d%d\n",a[0],a[1],a[2],a[3],a[4] );
}*/