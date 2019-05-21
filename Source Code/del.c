#include<stdio.h>
#include<stdlib.h>
#include"StuInfo.h"
extern void menu();
extern void init();
extern void print();
extern int len;


void del()
{
	int choice,delsite,i;
	printf("ÇëÊäÈëÉ¾³ýµÄÎ»ÖÃ:");
	scanf("%d",&delsite);
	if(delsite>1&&delsite<=len+2)
	{
		for(i=delsite;i<len;i++)
		{
			stuinfo[i-1]=stuinfo[i];
		}
		len--;
		
	}
	else
	{
		printf("                        ÊäÈëµÄÎ»ÖÃ´íÎó!!\n");
	}
	printf("                       Ø­---------------------------------------Ø­\n");
	printf("                       Ø­              Ìí¼Ó³É¹¦£¡               Ø­\n");
	printf("                       Ø­---------------------------------------Ø­\n");
	printf("                       Ø­            1.¼ÌÐøÉ¾³ýÑ§ÉúÐÅÏ¢         Ø­\n");
	printf("                       Ø­            2.´òÓ¡                     Ø­\n");
	printf("                       Ø­            0.ÍË³ö                     Ø­\n");
	printf("                       Ø­---------------------------------------Ø­\n");
	printf("                        ÇëÊäÈëÄúµÄÑ¡Ôñ:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			{
				
				del();
				break;
			}
		case 2:print();break;
		case 0:
			{
			
				printf("                        ÍË³ö\n");
				menu();
			}
	}
}
