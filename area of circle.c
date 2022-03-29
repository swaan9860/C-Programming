#include <stdio.h>
int main()
{
float radius, area; 
const float PI=3.14;
printf(" enter the radius of circle");
scanf("%f", &radius);
area= PI*radius*radius; 
printf ("area is:%f", area); 
return 0;
}
