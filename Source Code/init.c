#include<stdio.h>
#include<string.h>
void init();
extern void menu();
extern void print(); 

struct student
	{
		int  stuid;
		char name[20];
		float CH,MA,EN;
		float sum;
	}stuinfo[100];
extern int len;

void init()
{
	int choice;
	while(1)
	{
		printf("                        请输入该学生学号\n                     [输入'-1'返回上级菜单]:");
		scanf("%d",&stuinfo[len].stuid);
		if(stuinfo[len].stuid==-1)
		{
			break;
		}
		printf("                        请输入该学生姓名:");
		scanf("%s",stuinfo[len].name);
		printf("                        请输入该学生的语文成绩:");
		scanf("%f",&stuinfo[len].CH);
		printf("                        请输入该学生的数学成绩:");
		scanf("%f",&stuinfo[len].MA);
		printf("                        请输入该学生的英语成绩:");
		scanf("%f",&stuinfo[len].EN);
		stuinfo[len].sum=0;
		
		printf("                        该学生的总成绩为%6.1f\n",stuinfo[len].sum=stuinfo[len].CH+stuinfo[len].MA+stuinfo[len].EN);
	
		len++;
		
		
    }
	printf("                        丨----------------------------------丨\n");
	printf("                        丨            1.初始化              丨\n");
	printf("                        丨            2.打印                丨\n");
	printf("                        丨            0.退出                丨\n");
	printf("                        丨----------------------------------丨\n");
	printf("                        请输入您的选择:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:init();break;
		case 2:print();break;
		case 3:
			{
				printf("                        退出\n");
				menu();
			}
		default:
			printf("                        请输入正确的选项:");
			scanf("%d",&choice);
	}
	
}
