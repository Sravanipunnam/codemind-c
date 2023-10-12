#include<stdio.h>
int main()
{
    float pi=3.14,r,area,peri;
    scanf("%f",&r);
    peri=2*pi*r;
    area=pi*r*r;
    printf("%.2f
%.2f
",area,peri);
}