#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"StuInfo.h"
void Querybystuid();
void menu();
void print();
extern int len;
void Querybystuid ()
{
	int Querystuid,i,choice;
	int flag;
	flag=1;
	if(len==0)
	{
		printf("                       *******没有学生信息，请先输入学生信息******\n");
		menu();
	}
	else
	{
	
		printf("                       请输入要查询的学号:");
		scanf("%ld",&Querystuid);
		for(i=0;i<=len;i++)
		{
			if(Querystuid==stuinfo[i].stuid)
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
				
				Querybystuid();
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
