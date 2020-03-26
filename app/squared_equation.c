#include<math.h>
#include<stdio.h>
#include "squared_equation.h"

void squared_equation(double a,double b,double c,double properties_of_equation[3] )
{

    double x1;
    double x2;
    double discriminant;

    if(a!=0){

        discriminant=pow(b,2)-4*a*c;
        properties_of_equation[2]=discriminant;

        if(discriminant>=0){

            discriminant=sqrt(discriminant);

            if(discriminant==0){

                x1=(-b+discriminant)/(2*a);
                x2=x1;

                properties_of_equation[0]=x1;
                properties_of_equation[1]=x2;
            }

            x1=(-b+discriminant)/(2*a);
            x2=(-b-discriminant)/(2*a);

            properties_of_equation[0]=x1;
            properties_of_equation[1]=x2;

        }else{
            properties_of_equation[0]=0;
            properties_of_equation[1]=0;
        }

   }else{
        properties_of_equation[0]=-1;
        properties_of_equation[1]=-1;
        properties_of_equation[2]=-1;
   }

   return;
}
