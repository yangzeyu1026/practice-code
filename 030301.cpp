#include <stdio.h>
// a?b:c 当a为真时值为b，否则为c
//TeX中的引号
//getch与getchar基本功能相同，差别是getch直接从键盘获取键值，不等待用户按回车，只要用户按一个键，getch就立刻返回，getch返回值是用户输入的ASCⅡ码，出错返回-1。
//stdin是C语言中标准输入流，一般用于获取键盘输入到缓冲区里的东西
//C语言中，EOF常被作为文件结束的标志。还有很多文件处理函数处错误后的返回值也是EOF，因此常被用来判断调用一个函数是否成功。
int main()
{
	int c, q = 1;
	while((c = getchar()) != EOF)
	{
		if (c == '"')
		{
			printf("%s",q?"``":"''" );
			q =! q;
		}
		else
			printf("%c", c);
	}
	return 0;
}