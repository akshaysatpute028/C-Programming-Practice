#include <stdio.h>

int main() {
    int m1,m2,m3,m4,m5,agg;
    float per;
    printf("Enter marks in five subjects:");  
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    agg=m1+m2+m3+m4+m5;
    per=agg/5;
    printf("Aggregate marks=%d\n",agg);
    printf("Percentage marks=%f\n",per);
    return 0;
}