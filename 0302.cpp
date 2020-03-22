#include <stdio.h>
#include <string.h>
int main01()
{
	char buf[99];
	sprintf(buf, "%d%d%d%d", 3,4,5,6);//为了方便书写 C语言允许直接表示字符
	printf("%s\n",buf);//这里些buf不写buf[0]
	return 0;
}
//注意是scanf("%s",s) 没有&符号
int main()
{
	int count = 0;
	char s[20], buf[99];
	scanf("%s",s);
	for (int abc = 111; abc <= 999; abc++)
	{
		for (int de = 11; de <= 99; de++)
		{
			int x = abc*(de%10),y = abc*(de/10),z = abc*de;
			sprintf(buf, "%d%d%d%d%d", abc, de, x, y, z);//所有的输出，都是把其他字型转化成字符串输出
			int ok = 1;
			for (int i = 0; i < strlen(buf); i++)
			{
				if(strchr(s,buf[i]) == NULL) ok = 0;
			}
			if(ok)
			{
				printf("<%d>\n", ++count);
				printf("%5d\nX%4d\n-----\n%5d\n%4d\n-----\n%5d\n\n",abc,de,x,y,z );
			}
		}
	}	
		printf("The number of solutions = %d\n", count);
		return 0;
}