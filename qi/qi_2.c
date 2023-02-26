#include <stdio.h>
#include <string.h>

void OneLine(int);
void square(int, int);

void square(int input, int times){
    if(input < times){
        //printf("end");
        return;
    }else{
        //printf("Line %d: ", times);
        OneLine(input);
    }square(input, times+1);
}
void OneLine(int conti){
    if(conti == 0){
        printf("\n");
        return;
    }
    printf("* ");
    OneLine(conti-1);
}


int main(){
    int x;
    while(scanf("%d",&x)!=EOF){
        square(x, 1);
    }
    return 0;
}
