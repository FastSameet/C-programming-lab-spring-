#include<stdio.h>
int main(){
	int age;
	float height;
	
	printf("enter your age:");
	scanf("%d",&age);
	printf("enter your height:");
	scanf("%f",&height);
	
	printf("your age is %d and your height is %.2f",age,height);
	return 0;
}
