#include <stdio.h>
#include <string.h>

void OneLine(int);
void triangle(int, int);

void triangle(int input, int times){
    if(input < times){
        //printf("end");
        return;
    }else{
        //printf("Line %d: ", times);
        OneLine(times);
    }triangle(input, times+1);
}
void OneLine(int star){
    if(star == 0){
        printf("\n");
        return;
    }
    printf("* ");
    OneLine(star-1);
}


int main(){
    int x;
    while(scanf("%d",&x)!=EOF){
        triangle(x, 1);
    }
    return 0;
}