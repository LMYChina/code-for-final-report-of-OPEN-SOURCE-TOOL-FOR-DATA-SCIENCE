#include<stdio.h> 
int main() {
	int year,leapyear;
	printf("��������ݣ�");
	scanf("%d",&year);
	if(!(year%400))	leapyear=1;
	else if(!(year%100)) leapyear=0;
	else if(year%4) leapyear=0;
	else  leapyear=1;
	if(leapyear)printf("��Ԫ%d��������\n",year);
	else printf("��Ԫ%d�겻������\n",year);
	return 0;
}
