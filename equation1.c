#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	double delta,x1,x2;
	printf("please enter a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	printf("Here's the equation:%dx^2+%dx+%d=0\n",a,b,c);
	delta=pow(b,2)-4*a*c;
	if(delta<0)printf("No real roots!");
	else if(delta==0)
	{
		x1=-b/2*a;
		printf("There're only one real root:%.2f",x1);
	 }
	 else
	 {
	 	x1=(sqrt(delta)-b)/2*a;
	 	x2=(-sqrt(delta)-b)/2*a;
	 	printf("There're two real roots:%.2f and %.2f",x1,x2);
	 }
	 return 0;
}
