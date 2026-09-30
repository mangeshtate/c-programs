#include <stdio.h>//convet small character into capital
int main(){
    char ch;
    printf("Enter small character:");
    scanf("%c",&ch);
    printf("Capital Character is %c",(ch-32));//a=97,A=65,so 97-65=32

    return 0;
}