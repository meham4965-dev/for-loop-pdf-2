
#include <stdio.h>

int main()
{
    int N,i;
    int usage;
    int totalData = 0;
    int highUsageData = 0;
    scanf("%d",&N);
    for(i = 0; i < N;i++){
        scanf("%d",&usage);
        totalData += usage;
        if(usage > 2){
            highUsageData++;
        }
    }
    printf("total Data: %d\n",totalData);
    printf("high Usage Data: %d\n",highUsageData);

    return 0;
}