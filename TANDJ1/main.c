#include <stdio.h>
#include <stdlib.h>

int dif(int a,int b,int c,int d,int k){
    if(a>c){
        k=k-(a-c);
    }else{
        k=k-(c-a);
    }

    if(b>d){
        k=k-(b-d);
    }else{
        k=k-(d-b);
    }

    return k;
}
int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,c,d,k;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&k);
        k=dif(a,b,c,d,k);

        if(k<0){
            printf("No\n");
        }else if(k%2==0){
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }
    return 0;
}
