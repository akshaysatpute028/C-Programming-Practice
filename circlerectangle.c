#include <stdio.h>

int main(){

    int l,b,r,area1,param;
    float area2,circum;

    printf("\nEnter value of length and breadth=");
    scanf("%d %d",&l,&b);
    area1=l*b;
    param=2*l+2*b;

    printf("Area of rectangle=%d",area1);
    printf("\nParameter of rectangle=%d",param);

    printf("\n\nEnter value of of radius=");
    scanf("%d",&r);
    area2=3.14*r*r;
    circum=3.14*2*r;

    printf("Area of circle=%f",area2);
    printf("\nCircumference of circle=%f",circum);

    return 0;
}

