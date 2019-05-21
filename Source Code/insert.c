#include<stdio.h>
#include"StuInfo.h"
void insert();
void print();
void menu();
void init();
void gate();
extern int len;
extern int stusum;
void insert()
{
	int choice,insertsite,i;
	//struct student insertinfo;
	//newsum=stusum+addstusum;
	//insertinfo=gate();
	printf("                        请输入要添加的位置:[1---%d]:",len);
	scanf("%d",&insertsite);
	gate();
	/*for(len=stusum;len<newsum;len++)
	{
		printf("                        请输入要添加学生的学号：");
		scanf("%ld",&stuinfo[len].stuid);
		printf("                        请输入要添加学生的姓名：");
		scanf("%s",stuinfo[len].name);
		printf("                        请输入要添加学生的数学成绩：");
		scanf("%f",&stuinfo[len].MA);
		printf("                        请输入要添加学生的语文成绩：");
		scanf("%f",&stuinfo[len].CH);
		printf("                        请输入要添加学生的英语成绩：");
		scanf("%f",&stuinfo[len].EN);
		stuinfo[len].sum=stuinfo[len].MA+stuinfo[len].CH+stuinfo[len].EN;
		printf("                        要添加学生的总成绩为：%0.1f\n",stuinfo[len].sum);
	}
	stusum=newsum;*/
	if(insertsite>=1&&insertsite<=len+1)
	{
		for( i=len;i>insertsite-1;i--)
		{
			stuinfo[i+1]=stuinfo[i];
		}
		stuinfo[insertsite-1]=stuinfo[len+1];
		len++;
		
	
	}
	else
	{
		printf("                        你输入的位置有误!!");
	}
	printf("                       丨---------------------------------------丨\n");
	printf("                       丨              添加成功！               丨\n");
	printf("                       丨---------------------------------------丨\n");
	printf("                       丨            1.继续添加学生信息         丨\n");
	printf("                       丨            2.打印                     丨\n");
	printf("                       丨            0.退出                     丨\n");
	printf("                       丨---------------------------------------丨\n");
	printf("                        请输入您的选择:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				
				insert();
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
