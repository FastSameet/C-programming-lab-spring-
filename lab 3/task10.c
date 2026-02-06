#include<stdio.h>
int main(){
	int age;
	
	printf("enter your current age(in years):");
	scanf("%d",&age);
	
	int month=12*age;
	int days=365*age;
	
	printf("your age in months is: %d\n",month);
	printf("your age in days is: %d",days);
	return 0;
}
