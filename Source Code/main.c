#include<stdio.h>
#include<stdlib.h>
#include<string.h>
extern void windows();
extern void menu();
extern void init();
extern void print();
struct student 
{
	int   StuID;
	char  name[20];
	float CH,MA,EN;
	float sum;
}stuinfo[100];
int len; 
int main()
{
	windows();
	menu();
	return 0;
	system("pause");



}
