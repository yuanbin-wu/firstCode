#include<stdio.h>
#include"twj.h"


int input(stuData s[])
{
	printf("请按以下格式输入(输入-1结束)\n");
	printf("k1,k2,t1,t2\n");
	int n=-1;
	do
	{
		n++;
		printf("请输入\n");
		scanf("%d,%d,%f,%f",&s[n].k1,&s[n].k2,&s[n].t1,&s[n].t2);
		if (s[n].k1<=0) break;
	} while (1);
	return n;

}
void Beita(stuData s[],float beita[],int count)
{
	for (int i = 0; i < count; ++i)
	{
		beita[i]=(2*3.14*(s[i].k2*s[i].t1-s[i].k1*s[i].t2))/(s[i].t2*s[i].t2*s[i].t1-s[i].t1*s[i].t1*s[i].t2);

	}
	return;
	
}
void print(float beita[],int count)
{
	for (int i = 0; i < count; ++i)
	{
		printf("第%d个数据:%-.3f\n",i+1,beita[i]);
	}
	return;
}
