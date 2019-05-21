#include<stdio.h>
extern struct student
	   {
			int  stuid;
			char name[20];
			float CH,MA,EN;
			float sum;
	   };
extern struct student stuinfo[100];
extern int len;;
void print()
{
	int i=0;
	printf("                        学生信息如下:\n");
	printf("                        学号    姓名    语文    英语    数学    总成绩\n");
	for( i=0;i<len;i++)
	{
	printf("                        %ld      %s      %.2f    %.2f    %.2f      %.2f\n",stuinfo[i].stuid,stuinfo[i].name,stuinfo[i].CH,stuinfo[i].EN,stuinfo[i].MA,stuinfo[i].sum);
	//printf("%.2f    %.2f    %.2f    %.2f\n",stuinfo[i].CH,stuinfo[i].EN,stuinfo[i].MA,stuinfo[i].sum);
	}



}


