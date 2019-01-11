#include<stdio.h> 
int main() {
	int year,leapyear;
	printf("请输入年份：");
	scanf("%d",&year);
	if(!(year%400))	leapyear=1;
	else if(!(year%100)) leapyear=0;
	else if(year%4) leapyear=0;
	else  leapyear=1;
	if(leapyear)printf("公元%d年是闰年\n",year);
	else printf("公元%d年不是闰年\n",year);
	return 0;
}
