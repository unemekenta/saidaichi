#include <stdio.h>
#define N 10

int a[N] = {3,54,16,8,9,1,5,60,22,19};

int main(void){
    int i, max;
    max = a[0];
    for(i = 1; i < N; i++)
        if(max < a[i])
            max = a[i];
        printf("最大値は%dです\n",max);
        return 0;
};