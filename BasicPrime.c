#include<stdio.h>
int isprime(int num) {
	int i;
	if(num%2==0)
	{
		if(num>2)return 0;
		else return 1;
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
    int n;
    printf("��������жϵ�����");
	scanf("%d",&n);
	if(isprime(n))printf("������\n");
	else printf("��������\n");
	return 0;
}
