
#include <stdio.h>
#include <math.h>

int main()
{
    int N,i;
    int mark;
    int total = 0;
    int failedsubjects = 0;
    int average;
    scanf("%d",&N);
    for(int i=0;i < N;i++){
        scanf("%d",&mark);
        total += mark;
        if(mark < 40){
            failedsubjects++;
        }
    }
    average = total / N;
    printf("average score:%d\n",average);
    printf("failed subjects:%d\n",failedsubjects);
    
    return 0;
}