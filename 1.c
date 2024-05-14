#include <stdio.h>

int main(){
    //A+b = n
    int a=0,b=0;
    int t;
    scanf("%d",&t);
    for(int i =0; i<t; i++){
        scanf("%d %d",&a,&b);
        printf("%d \n",a+b);
    }
    return 0;
}