#include<stdio.h>

#define ROW 3
#define COL 3

void printmtrx(int (*a)[COL]){
     for(int ri=0;ri<ROW;ri++){
        for(int ci=0;ci<COL;ci++){
                printf(" a[%d][%d] val:%d\t",ri,ci,a[ri][ci]);                
        }
        printf("\n");
    }
}

void transpose(int (*a)[COL]){
    for(int ri=0,i=-1;ri<ROW;ri++,i++){
        for(int ci=0;ci<COL;ci++){
            if(ri>i && ci>i){
            int temp=a[ri][ci];
            a[ri][ci]=a[ci][ri];
            a[ci][ri]=temp;
            }
        }
       
    }
}

int main(){
    int a[ROW][COL];
    printf("enter array elements\n");
    for(int ri=0;ri<ROW;ri++){
        for(int ci=0;ci<COL;ci++){
                printf("enter a[%d][%d] val:",ri,ci);
                scanf("%d",&a[ri][ci]);
        }
    }
    printmtrx(a);
    transpose(a);
    printmtrx(a);
}