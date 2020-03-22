//自定义函数和结构体
#include <bits/stdc++.h>
//距离
double dist(double x1, double y1, double x2, double y2)
{
	return sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
//坐标定义
struct Point{ double x,y; };
double dist1(struct Point a, struct Point b)
{
	return hypot(a.x-b.x, a.y-b.y);
}
typedef struct{ double x, y;}Point;
double dist2(Point a, Point b)
{
	return hypot(a.x-b.x,a.y-b.y);
}
//组合数
long long C(int m, int n){
	if(m< n-m) m = n-m;
	long long ans = 1;
	for (int i = m+1; i <= n; i++) ans *= i;
	for (int i = 1; i<= n-m; i++) ans /= i;
	return ans;
}
//素数判定
int is_prime(int n)
{
	if(n<=1) return 0;
	int m=floor(sqrt(n)+0.5);
	for (int i = 2; i <= m; i++)
	{
		if(n % i == 0) return 0
	}
	return 1;
}