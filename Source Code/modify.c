#include<stdio.h>
#include<stdlib.h>
#include"StuInfo.h"
extern int len;
void menu();
void print();

void modify()
{
	int choice,i,modifyid;
	
	if(len==0)
	{
		printf("***********没有学生信息,请输入学生信息***********");
		menu();
	} 
	else
	{
	 	printf("请输入要修改的学号:");
		scanf("%ld",&modifyid);
		for(i=0;i<len+1;i++)
		{
			if(modifyid==stuinfo[i].stuid)
			{
				printf("请输入修改后学号:");
				scanf("%ld",&stuinfo[i].stuid);
				printf("请输入修改学生的姓名:");
				scanf("%s",stuinfo[i].name);
				printf("请输入修改学生数学成绩: ");
				scanf("%f",&stuinfo[i].MA);
				printf("请输入修改学生语文成绩: ");
				scanf("%f",&stuinfo[i].CH);
				printf("请输入修改学生英语成绩: ");
				scanf("%f",&stuinfo[i].EN);
				stuinfo[i].sum=stuinfo[i].MA+stuinfo[i].CH+stuinfo[i].EN;
				printf("修改学生总分为:%0.1f\n",stuinfo[i].sum);
			}
			
		}
		printf("丨---------------------------------------丨\n");
		printf("丨             修改成功！               丨\n");
		printf("丨---------------------------------------丨\n");
		printf("丨            1.继续修改学生信息         丨\n");
		printf("丨            2.打印                     丨\n");
		printf("丨            0.退出                     丨\n");
		printf("丨---------------------------------------丨\n");
		printf("请输入您的选择:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:modify();break;
			case 2:print();break;
			case 0:
				{
					printf("退出\n");
					menu();
				}
		}
	}
}
