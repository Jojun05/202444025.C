#include <stdio.h>
int main(){
    int num=0;
    scanf("%d",&num);
    if(num % 4 == 0 && num % 100 != 0 || num % 400 == 0){
        printf("1");
    }
    else{
        printf("0");
    }
}