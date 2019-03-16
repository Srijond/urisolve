#include<stdio.h>
int main()
{
   int n,a,b;
   double d;
   scanf("%d",&n);
   for(int i=1;i<=n;i++){
    scanf("%d %d",&a,&b);
    if(b==0){
        printf("divisao impossivel\n");
    }
    else{
       d=a/(b*1.00);
       printf("%.1lf\n",d);
    }





   }





    return 0;
}
