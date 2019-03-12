#include<stdio.h>
int main()
{
    int n,i;
    int a,b,sum=0,j;
    scanf("%d",&n);
    int ar[n];
    for(i=0;i<n;i++){
        scanf("%d %d",&a,&b);
        if(a>b){
            int temp=a;
               a=b;
               b=temp;
        }
        if(a%2==0){a--;}
        a=a+2;

        for(j=a;j<b;j+=2){
            sum+=j;
        }
       ar[i]=sum;
       sum=0;


    }
    for(i=0;i<n;i++){
        printf("%d\n",ar[i]);
    }


    return 0;
}
