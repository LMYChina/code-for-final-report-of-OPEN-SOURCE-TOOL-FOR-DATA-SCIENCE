#include<stdio.h>
#include<math.h> 
int sum_bit(int num){
	int x=0,num_=num;
	while(num_>0)
	{
		x+=num_%10;
		num_/=10;
	}
  return x;
}

int multi_bit(int num) {
	int x=1,num_=num;
	while(num_>0)
	{
		x*=num_%10;
		num_/=10;
	}
  return x;
}

int square_sum_bit(int num) {
    int x=0,num_=num;
	while(num_>0)
	{
		x+=pow(num_%10,2);
		num_/=10;
	}
  return x;
}

int isprime(int num) {
	int i;
	if(num%2==0)
	{
		return 0;
	}
	else
	{for(i=3;i<num;i+=2)
	{
		if(num%i==0)
		{
			break;
		}
	}
	if(i>=num)return 1;
	else return 0;
	}
}

int main() {
  int n,sum=0,count=0,max;
  for(n=101;n<=9999;n+=2)
  {
  	if(isprime(n)&&isprime(sum_bit(n))&&isprime(multi_bit(n))&&isprime(square_sum_bit(n)))
  	{
  		sum+=n;
  		count++;
  		max=n;
	  }
  }
  printf("超级素数的个数为%d\n和为%d\n最大者为%d",count,sum,max);
  return 0;
}
