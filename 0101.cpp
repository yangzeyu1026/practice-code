#include <bits/stdc++.h>
int main()
{
	printf("%d\n",1 + 2 );
	//实验1
	printf("%d\n",3 - 4 );
	//2
	printf("%d\n",5 * 6 );
	//3
	printf("%d\n",8 / 4 );
	//4
	printf("%d\n",8 / 5 );
	//5 
	printf("%.1f\n",8.0 / 5.0 );
	//6 err
	printf("%.1f\n",8/5 );
	//7 err 整数/整数=整数 浮点数/浮点数=浮点数
	printf("%d\n",8.0/5.0 );
	printf("%.8f\n",1+2*sqrt(3)/(5-0.1));//整数-浮点数=浮点数（整数先变为浮点数）
	return 0;
}