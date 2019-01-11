#include<stdio.h>
int main()
{
	double a1,a2,b1,b2,m,n,x,y;
	printf("please enter parameters:");
	scanf("%lf%lf%lf%lf%lf%lf",&a1,&b1,&a2,&b2,&m,&n);
	printf("Here's the equation set:\n%.2lfx+%.2lfy=%.2lf\n%.2lfx+%.2lfy=%.2lf\n",a1,a2,b1,b2,m,n);
	if(a1*b2==a2*b1)
		printf("No real roots!\n");
	else
	{
		x=(m*b2-n*b1)/(a1*b2-a2*b1);
		y=(m*a2-n*a1)/(a2*b1-a1*b2);
	}
	printf("x=%.2lf,y=.2%lf\n",x,y);
	return 0;
}
