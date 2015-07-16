//#define _CRT_SECURE_NO_WARNINGS
/*在屏幕上打开CMD和并行或串行打开计算器或别的软件*/
#include<stdio.h>
#include<stdlib.h>

//#include<windows.h>
void main()
{
	//system("netstat -a");
	//system("pause");
	//MessageBoxA(0,"因为故障强重新登录","QQ故障",1);
	int num;
	char str[50];
	scanf("%d",&num);//输入一个整数，初始化num
	sprintf(str,"for /l %%i in (1,1,%d) do calc CHINA",num);//start是控制并行还是串行的显示。
	system(str);
	system("pause");

}
