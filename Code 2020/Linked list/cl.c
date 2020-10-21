#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(int argc,char *argv[]){
    int n1 = argv[1];
    int n2 = argv[2];
    int n3 = argv[3];

    if(n1>n2 && n1>n3)
    printf("%d",n1);
    else if(n2>n1 && n2>n3)
    printf("%d",n2);
    else
    printf("%d",n3);

}