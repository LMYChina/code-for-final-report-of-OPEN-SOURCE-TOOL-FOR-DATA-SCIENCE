#include<stdio.h>
int isroll(int num)
{
	int sum=0,num_;
	num_=num;
	while(num_)
	{
		sum*=10;
		sum+=num_%10;
		num_/=10;
	}
	if(sum==num)return 1;
	else return 0;
}
int main() {
    int n;
    printf("请输入待判断的数："); 
    scanf("%d",&n);
    if(isroll(n))printf("是回文数\n");
    else printf("不是回文数\n");
    return 0;
}
