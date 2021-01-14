
 #include <stdio.h>
#define Pi 3,14
int main()
{
 float r,D,P,S ;
 printf("veuillez entre la valeur :");
 scanf("%f",&r);
 P = r * 2 * Pi ;
 D =P/Pi;
 S= r*r * Pi;
 printf("la perimetre est: %2.f\n",P);
 printf("le Diemetre est: %2.f\n",D);
 printf("la surface est : %2.f",S);
 
 

    return 0;
}



