#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char sex;
	int age;

	printf("請輸入性別\n男生請輸入M,女生請輸入W:\n");
	scanf("%c",&sex);
	printf("請輸入年齡:\n");
	scanf("%d",&age);
	
	
	if(sex=='M')
	{ 
		if(age>=18)
			printf("在民國100年以前可結婚\n");
		else
			printf("在民國100年以前不可結婚\n");
	} 
	else if(sex=='W')
	{
		if(age>=16)
			printf("在民國100年以前可結婚\n");
		else
			printf("在民國100年以前不可結婚\n");
	}
	
	system("pause");
	return 0;
}
