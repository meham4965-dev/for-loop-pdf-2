
#include <stdio.h>
#include <math.h>

int main()
{
    int N,i;
    int loss;
    int totalloss = 0;
    int highlossDays = 0;
    scanf("%d",&N);
    for(int i=0;i < N;i++){
        scanf("%d",&loss);
        totalloss +=loss;
        if(loss > 100){
            highlossDays++;
        }
    }
    printf("total loss:%d\n",totalloss);
    printf("high loss days:%d\n",highlossDays);
    
    return 0;
}