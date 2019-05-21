#include<stdio.h>
#include"StuInfo.h"
void insert();
void print();
void menu();
void init();
void gate();
extern int len;

void insert()
{
	int choice,insertsite,i;
	
	printf("                        请输入要添加的位置:[1---%d]:",len);
	scanf("%d",&insertsite);
	gate();
	
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
