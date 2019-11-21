#include<stdio.h>
#include<conio.h>
void histogram(int p,int q,int r){
    int i;
    for(i=0;i<p;i++){
        printf("#");
    }
    printf("\n");
    for(i=0;i<q;i++){
        printf("#");
    }
    printf("\n");
    for(i=0;i<r;i++){
        printf("#");
    }
    printf("\n");
}

int main(){
    int x,y,z;
    printf("x = ");
    scanf("%d",&x);
    printf("y = ");
    scanf("%d",&y);
    printf("z = ");
    scanf("%d",&z);
    histogram(x,y,z);
}