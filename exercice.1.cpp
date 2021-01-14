
#include <stdio.h>

int main()
{
 int a,b;
 char operateur;
printf("veuillez entre un operateur :");
 scanf("%c",&operateur);


 printf("veuillez entre un nombre :");
 scanf("%d",&a);
 printf("veuillez entre un nombre :");
 scanf("%d",&b);
 
  
 switch(operateur){
 
      case'+':printf("%d + %d =%d" , a,b,a+b);
 break;
 
      case'-':printf("%d + %d = %d",a,b,a-b);
 break;
 
       case'*' :printf("%d * %d = %d",a,b,a*b);
 break;
 
        case'%' :printf("%d Mod %d =%d",a,b,a%b);
 break;
 
        case'/':
 if (b!=0) printf ("%d / %d = %.2f",a,b,(float)a/b);
 
  else printf ("la divions est un possible");
  break;
  
  default:printf(" operateur incorrecte");}
  

    return 0;
}

