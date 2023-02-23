#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a, b;
        scanf("%d %d",&a,&b);
        int sum = a+b;
        printf("%d\n",ans(sum));
    }
    return 0;
}

int ans(int sum){
    int mod,count=0;
    while(sum){

        mod=sum%10;
        sum=sum/10;

        switch(mod){
        case 0:count=count+6;break;
        case 1:count=count+2;break;
        case 2:count=count+5;break;
        case 3:count=count+5;break;
        case 4:count=count+4;break;
        case 5:count=count+5;break;
        case 6:count=count+6;break;
        case 7:count=count+3;break;
        case 8:count=count+7;break;
        case 9:count=count+6;break;
        }
    }

    return count;
}
