#include <stdio.h>
int res(int n){ 
    printf("%d\t",n);
    return(n ? 1 + res(n&n-1) : 0);

}
int main(){
    printf("\n%d",res(6));
   
    return 0;
}
