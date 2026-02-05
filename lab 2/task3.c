#include<stdio.h>
int main(){
	int a,b;
	printf("enter a:");
	scanf("%d",&a);
	printf("enter b:");
	scanf("%d",&b);
	
	printf("before swapping: a=%d and b=%d\n",a,b);
	
	int temp=a;
	a=b;
	b=temp;
	
	printf("after swapping: a=%d and b=%d",a,b);
	return 0;
}
