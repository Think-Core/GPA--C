#include<stdio.h>
#include<stdlib.h>
void init();
void windows();
void insert();
extern int stusum;
extern int addstunum;
void menu()
{
	int choice;
	while(1)
	{
		printf("                        ----------------------\n");
		printf("                       |1.初始化              |\n");
		printf("                       |2.添加学生成绩        |\n");
		printf("                       |3.删除学生成绩        |\n");
		printf("                       |4.按姓名查询学生成绩  |\n");
		printf("                       |5.按学号查询学生成绩  |\n");
		printf("                       |6.修改学生信息        |\n");
		printf("                       |7.按总分排名          |\n");
		printf("                       |0.结束                |\n");
		printf("                        ----------------------\n");
		printf("                        请选择要查看的项:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					printf("                        1.初始化\n");
					init();
					printf("\n");
					break;
				}
			case 2:
				{
					printf("                        2.添加学生成绩\n");
					insert();
					break;
				}
			case 3:
				{
					printf("                        3.删除学生成绩\n");
					break;
				}
			case 4:
				{
					printf("                        4.按姓名查询学生成绩\n");
					break;
				}
			case 5:
				{
					printf("                        5.按学号查询学生成绩\n");
					break;
				}
			case 6:
				printf("                        6.修改学生信息\n");
				break;
			case 7:
				{
					printf("                        7.按总分排名\n");
					break;
				}
			case 0:
				{
					printf("                        0.退出\n");
					break;
				}
			default:
				printf("                       请输入正确选择!!!!\n");
		}
		if(choice==0)
		{
			windows();
		}
	}
}