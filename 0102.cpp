#include <stdio.h>
#include <math.h>
int main()
{
	/*int a,b;
	scanf("%d%d", &a, &b);
	printf("%d\n",a + b);
	return 0;*/
	const double pi = acos(-1.0);
	double r,h,s1,s2,s;
	scanf("%lf%lf",&r,&h);//注意 这里是lf而不是1（数字1）
	s1 = pi*r*r;
	s2 = 2*pi*r*h;
	s = s1*2.0 + s2;
	printf("Area = %.3f\n", s );
	return 0;
}