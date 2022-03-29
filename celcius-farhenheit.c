#include<stdio.h>
#include<stdlib.h>
float degree(float celcius)
	{
	float f;
	f=(1.8*celcius)+32;
	return f;
	}
	int main()
	{
	float f,cel;
	printf("Enter temperature in celcius");
	scanf("%f",&cel);
	f=degree(cel);
	printf("Temperature in fahrenheit is %f",f);
	return 0;
	}
