#include<math.h>
#include<stdio.h>
#include "squared_equation.h"

double squared_equation(double a,double b,double c)
{

    double x1;
    double x2;
    double discriminant;

    if(a==0 && b==0 && c==0){
        return 0;
    }


    if(a!=0){

        discriminant=pow(b,2)-4*a*c;

        if(discriminant>=0){

            discriminant=sqrt(discriminant);

            if(discriminant==0){

                        x1=(-b+discriminant)/(2*a);
                        return  x1;

                    }

            x1=(-b+discriminant)/(2*a);
            x2=(-b-discriminant)/(2*a);

            return (x1+x2);

        }else{

            return 0;

        }

   }else{

            x1=-c/b;

            return x1;

   }
}
