#include<stdio.h>

#define SIZE 8

int max1(int a,int b){
    return (a>b)?a:b;
}

int min1(int a,int b){
    return (a<b)?a:b;
}

int trap_rain_water(int *a){
    int total=0;
    int leftmaxarr[SIZE]={0},rightmaxarr[SIZE]={0};
    for(int i=0;i<SIZE;i++){
        if(i>0)
        leftmaxarr[i]=max1(leftmaxarr[i-1],a[i]);
        else leftmaxarr[i]=a[i];
        printf("left arr at %d is %d\n",i,leftmaxarr[i]);
    }
    for(int i=SIZE-1;i>=0;i--){
        if(i<SIZE-1)
        rightmaxarr[i]=max1(rightmaxarr[i+1],a[i]);
        else rightmaxarr[i]=a[i];
        printf("right arr at %d is %d\n",i,rightmaxarr[i]);
    }
    for(int i=0;i<SIZE;i++){
        total+=min1(leftmaxarr[i],rightmaxarr[i])-a[i];
    }
    return total;
}

int main(){
    int a[10];
    printf("enter elements in array\n");
    for(int i=0;i<SIZE;i++) scanf("%d",&a[i]);

    printf("total water : %d\n",trap_rain_water(a));
}