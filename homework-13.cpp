#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char sex;
	int age;

	printf("�п�J�ʧO\n�k�ͽп�JM,�k�ͽп�JW:\n");
	scanf("%c",&sex);
	printf("�п�J�~��:\n");
	scanf("%d",&age);
	
	
	if(sex=='M')
	{ 
		if(age>=18)
			printf("�b����100�~�H�e�i���B\n");
		else
			printf("�b����100�~�H�e���i���B\n");
	} 
	else if(sex=='W')
	{
		if(age>=16)
			printf("�b����100�~�H�e�i���B\n");
		else
			printf("�b����100�~�H�e���i���B\n");
	}
	
	system("pause");
	return 0;
}
