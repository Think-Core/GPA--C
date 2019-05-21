#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"StuInfo.h"
void Querybyname();
void menu();
void print();
extern int len;
void Querybyname()
{
	char Queryname[20];
	int i,choice,flag=1;
	if(len==0)
	{
		printf("                         ********没有学生信息，请先输入学生信息******\n");
	    menu;
	}
	else
	{
		printf("                        请输入要查询学生的姓名:");
		scanf("%s",Queryname);
		for(i=0;i<=len;i++)
		{
			if(strcmp(Queryname,stuinfo[i].name)==0)
			{
				printf("                        查询到该学生的成绩!!\n");
				printf("                        学生信息如下:\n");
				printf("                        学号    姓名    语文    英语    数学    总成绩\n");
		    	printf("                        %ld      %s      %.2f    %.2f    %.2f      %.2f\n",stuinfo[i].stuid,stuinfo[i].name,stuinfo[i].CH,stuinfo[i].EN,stuinfo[i].MA,stuinfo[i].sum);
		
			}
			else
			{
				flag=0;
			}
		}
		
	}
	printf("                       丨---------------------------------------丨\n");
	printf("                       丨              添加成功！               丨\n");
	printf("                       丨---------------------------------------丨\n");
	printf("                       丨            1.继续查询学生信息         丨\n");
	printf("                       丨            2.打印                     丨\n");
	printf("                       丨            0.退出                     丨\n");
	printf("                       丨---------------------------------------丨\n");
	printf("                        请输入您的选择:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				
				Querybyname();
				break;
			}
		case 2:print();break;
		case 0:
			{
			
				printf("                        退出\n");
				menu();
			}
	}
}
