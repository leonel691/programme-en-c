#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (){
int a,b,r,pgcd;
printf("ecrivons un programme qui determine le pgcd de deux nombres\n");
printf("entrez vos deux nombres :");
scanf("%d,%d",&a,&b);
if (a>b)
{
    a=a;
    b=b;
}
else if (a<b)
{
    int c;
    c=a;
    a=b;
    b=c;
}
else
{
  printf("trouvez deux nombres differents");
}
// debut du programme
r=a%b;
// r=b%r;
while (r!=0)
   {
        a=b;
        b=r;
        r=a%b;
    }
    b=b;
    printf("le pgcd est %d\n",b);     
    return 0;
}