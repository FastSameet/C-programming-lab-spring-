#include<stdio.h>
int main(){
	int cyear, byear;
	
	printf("enter the current year:");
	scanf("%d",&cyear);
	printf("enter your birth year:");
	scanf("%d",&byear);
	
	int age= cyear-byear;
	printf("your age is:%d",age);
	return 0;
}
