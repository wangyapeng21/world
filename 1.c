//#define _CRT_SECURE_NO_WARNINGS
/*����Ļ�ϴ�CMD�Ͳ��л��д򿪼������������*/
#include<stdio.h>
#include<stdlib.h>

//#include<windows.h>
void main()
{
	//system("netstat -a");
	//system("pause");
	//MessageBoxA(0,"��Ϊ����ǿ���µ�¼","QQ����",1);
	int num;
	char str[50];
	scanf("%d",&num);//����һ����������ʼ��num
	sprintf(str,"for /l %%i in (1,1,%d) do calc CHINA",num);//start�ǿ��Ʋ��л��Ǵ��е���ʾ��
	system(str);
	system("pause");

}
