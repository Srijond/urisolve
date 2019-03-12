#include<stdio.h>
int main()
{
    int i,a,b,sum=0;
    for(i=1;i<=100;i++){
        scanf("%d %d",&a,&b);
        if(a<=0||b<=0){
            break;
        }
        if(a>b){
            int temp=a;
            a=b;
            b=temp;
        }
        for(i=a;i<=b;i++){
            printf("%d ",i);
            sum+=i;
        }
        printf("Sum=%d\n",sum);
        sum=0;

    }
    return 0;
}
