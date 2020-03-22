#include <bits/stdc++.h>
int main()
{
	//三位数反转
	/*
	不含0
	int n;
	scanf("%d",&n);
	printf("%d%d%d\n",n%10,n/10%10,n/100 );//注意这里是逗号
	*/
	/*
	含0
	int n,m;
	scanf("%d", &n);
	m = (n%10)*100 + (n/10%10)*10 + n/100;
	printf("%03d\n", m );*/
	//变量交换
	/*
	引入新的变量
	int a,b,t;
	scanf("%d%d",&a,&b);
	t = a;
	a = b;
	b = t;
	printf("%d %d\n",a,b );*/
	//直接交换
	int a,b;
	scanf ("%d%d",&a,&b);
	printf("%d %d\n",b,a);
	return 0;
}