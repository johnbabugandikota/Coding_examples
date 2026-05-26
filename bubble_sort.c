// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

#define MAX 10

void print(int *a){
    for(int i=0;i<MAX;i++)
        printf("%d ",a[i]);
        puts("\n");
}

void bubble(int *a){
    int i,j,temp;
    for(i=0;i<MAX-1;i++){
        for(j=0;j<MAX-i-1;j++){
            if(a[j]>a[j+1]){
                    temp=a[j];
                    a[j]=a[j+1];
                    a[j+1]=temp;
            }
        }
    }
}
int main() {
    int a[MAX];
    srand(getpid());
    for(int i=0;i<MAX;i++)
        a[i]=rand()%100+1;
    print(a);
    bubble(a);
    print(a);
    return 0;
}