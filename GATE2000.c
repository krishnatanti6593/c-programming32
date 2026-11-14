#include<stdio.h>
int incr(int i){
    static int count;
    count+=i;
    return(count);
}
int main(){
    int j;
    for(int i=0;i<=4;i++){
        j=incr(i);
    }
    printf("j=%d",j);
}