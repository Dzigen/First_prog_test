#include<math.h>
#include<stdio.h>
#include "squared_equation.h"

double squared_equation(double a,double b,double c)
{

    double x1,x2,discriminant;
    x1=0;
    x2=0;

    if(a==0 && b==0 && c==0){
        return 0;
    }


    if(a!=0){

        discriminant=pow(b,2)-4*a*c;

        if(discriminant>=0){

            discriminant=sqrt(discriminant);

            if(discriminant==0){

                        x1=(-b+discriminant)/(2*a);

                        //printf("%.3f\n",x1);
                        return  x1;

                    }

            x1=(-b+discriminant)/(2*a);
            x2=(-b-discriminant)/(2*a);

            //printf("%.3f %.3lf\n",x1,x2);
            return (x1+x2);

        }else{

            //printf("нет вещественных корней\n");
            return 0;

        }

   }else{

            x1=-c/b;

            //printf("%.3lf\n",x1);
            return x1;

   }
}
