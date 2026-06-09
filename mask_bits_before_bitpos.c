#include <stdio.h>

int main(){
    int bitpos,num;
    printf("enter num and bitpos\n");
    scanf("%d %d",&num,&bitpos);

     int  mask=(1<<bitpos)-1;
    printf("masked: %d n vs normal : %d with bitpos: %d\n",num&mask,num,bitpos );
}