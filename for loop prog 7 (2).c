
#include <stdio.h>
#include <math.h>

int main()
{
    int N,i;
    int rainfall;
    int total = 0;
    int heavyDays = 0;
    scanf("%d",&N);
    for(int i=0;i < N;i++){
        scanf("%d",&rainfall);
        total +=rainfall;
        if(rainfall >50){
            heavyDays++;
        }
    }
    printf("total rainfall:%d\n",total);
    printf("heavy rain days:%d\n",heavyDays);
    
    return 0;
}