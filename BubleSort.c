#include<stdio.h>
#include<conio.h>
void bubbleSort(int ar[],int n){
    int i,j,temp;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(ar[i]>ar[j]){
                temp = ar[i];
                ar[i] = ar[j];
                ar[j] = temp;
            }
        }
    }
    printf("sorted list:\n");
    for(i=0;i<n;i++){
        printf("%d:%d\n",i+1,ar[i]);
    }
}
int main(int argc, char const *argv[])
{
    int li[100];
    int n,i;
    printf("enter no of items in array: ");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("%d:",i+1);
        scanf("%d",&li[i]);
    }
    bubbleSort(li,n);
    getch();
    return 0;
}