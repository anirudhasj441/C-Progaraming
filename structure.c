#include<stdio.h>
#include<conio.h>
#include<string.h>
struct book{
    int bookid;
    char title[100];
    float price;
};
struct book input(int id,char title[],float price){
    struct book b;
    b.bookid = id;
    strcpy(b.title,title);
    b.price  = price;
    printf("data succesfully inserted\n");
    return b;
}
void display(struct book b){
    printf("bookid = %d",b.bookid);
    printf("\ntitle = %s",b.title);
    printf("\nprice = %f",b.price);
}
int main(){
    struct book b1;
    int id;char title[100];float price;
    printf("bookid = ");
    scanf("%d",&id);
    printf("title = ");
    scanf("%s",title);
    printf("price = ");
    scanf("%f",&price);
    b1 = input(id,title,price);
    display(b1);
}