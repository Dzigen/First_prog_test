#include<math.h>
#include<stdio.h>
#include "squared_equation.h"

double squared_equation(double a,double b,double c)
{

    double x1,x2,discriminant;

    x1=0;
    x2=0;

    discriminant=sqrt(pow(b,2)-4*a*c);

    if(discriminant>0){

        x1=(-b+discriminant)/(2*a);
        x2=(-b-discriminant)/(2*a);

        //printf("%.3f %.3f",x1,x2);
        return (x1+x2);
    }else if(discriminant==0){

        x1=(-b+discriminant)/(2*a);

        //printf("%.3f",x1);
        return x1;
    }else{

        //printf("нет вещественных корней");
        return 0;
    }
}
