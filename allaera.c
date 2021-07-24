#include<stdio.h>
void main()
{
    float a1,a2,a3,a4,a5,l,b,r,s;
    printf("Enter the value of L,B,R,S\n");
    scanf("%f%f%f%f",&l,&b,&r,&s);
    a1=s*s;
    printf("Area of Square=%f\n",a1);
    a2=l*b;
    printf("Area of Rectangle=%f\n",a2);
    a3=3.14*r*r;
    printf("Area of Circle=%f\n",a3);
    a4=2*3.14*r;
    printf("Cir. Of Circle=%f\n",a4);
    a5=2*(l+b);
    printf("Per. Of Rectangle=%f\n",a5);

}
