//函数的调用与参数的传递
//实参与形参
#include <bits/stdc++.h>
int main()
{
	int a[20];
	for(int i = 1; i <= 10; i++) a[i] = i;
	for(int i = 1; i <= 10; i++) printf("%d ",a[i] ); putchar(10);
	for(int i = 1; i <= 10; i++) printf("%d ", *(a+i)); putchar(10);
	return 0;
}