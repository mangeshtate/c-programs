// #include <stdio.h>//Accept birth year from user and check if given year is leap year or not
// int main(){
//     int year;
//     printf("Enter your Birth Year:\n");
//     scanf("%d",&year);
//     if (year%400==0){
//         printf("Entered Year is Leap year\n");
//     }
//     else if(year%4==0){
//         printf("Entered Year is Leap year\n");
//     }
//     else if(year%100==0){
//         printf("Entered year is Leap year\n");
//     }
//     else{
//         printf("Entered year is not Leap year\n");
//     } 
//     return 0;
// }
# include <stdio.h>
int main()
{
    int year;
    printf("Enter Any year:\n");
    scanf("%d",&year);
    if(year%400 == 0 || (year%4 == 0 && year%100 != 0) ){
        printf("Leap Year");
    }
    else{
        printf("Not Leap year");
    }
    return 0;
}
