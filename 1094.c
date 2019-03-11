#include<stdio.h>
int main()
{
   int num,i,a,c=0,d=0,f=0,total;
   char m[2];
   double x,y,z;
   scanf("%d",&num);
   for(i=1;i<=num;i++){
    scanf("%d %s",&a,&m);
    if(m[0]=='C')c+=a;
    else if(m[0]=='R')d+=a;
    else if(m[0]=='S')f+=a;

   }

   total=c+d+f;
   x=(c/(total*1.0))*100.00;
   y=(d/(total*1.0))*100.00;
   z=(f/(total*1.0))*100.00;

   printf("Total: %d cobaias\n",total);
   printf("Total de coelhos: %d\n",c);
   printf("Total de ratos: %d\n",d);
   printf("Total de sapos: %d\n",f);
   printf("Percentual de coelhos: %.2lf %%\n",x);
   printf("Percentual de ratos: %.2lf %%\n",y);
   printf("Percentual de sapos: %.2lf %%\n",z);





    return 0;
}
