#include<stdio.h>
int countnum(int n)
{
	int count=0,num=n;
	while(num)
	{
		count++;
		num/=10;
	}
	return count;
 } 
int main() {
    int i,j,n,num;
    printf("ÇëÊäÈë´ı²Ù×÷Êı£º");
    scanf("%d",&n);
     num=n;
    int a[countnum(n)];
    for(i=0;i<countnum(n);i++)
    {
    	a[i]=num%10;
    	num/=10;
	}
	for(j=countnum(n)-1;j>=0;j--)
	{
		printf("%d ",a[j]);
	}
	return 0;
}
