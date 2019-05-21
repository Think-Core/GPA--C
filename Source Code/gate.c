#include<stdio.h>
#include"StuInfo.h"
extern int len;
void gate()
{
	
	
	stuinfo[len].sum = 0;
	printf("                        请输入您插入的信息:\n");
	printf("                        请输入学号:");
	scanf("%ld",&stuinfo[len].stuid);
	printf("                        请输入姓名:");
	scanf("%s",stuinfo[len].name );
	printf("                        请输入数学成绩:");
	scanf("%f",&stuinfo[len].MA); 
	printf("                        请输入学生英语成绩:");
	scanf("%f",&stuinfo[len].EN);
	printf("                        请输入学生语文成绩:");
	scanf("%f",&stuinfo[len].CH);
	printf("                        该学生的总成绩为:%6.1f\n",stuinfo[len].sum=stuinfo[len].MA+stuinfo[len].EN+stuinfo[len].CH);
	len++;
}
