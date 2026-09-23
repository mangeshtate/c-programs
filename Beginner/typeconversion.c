#include <stdio.h>
/*int main(){
    float sum=5/2;//Implicit conversion..//output will be 2
    float result=(float)5/2;//Explicit conversion...
    printf("%f\n",sum);
    printf("%.2f\n",result);//2 decimal places precision

    return 0;
}
*/
int main(){
    int maxscore=500;
    int userscore=437;
    float percentage=((float)userscore/maxscore)*100.00;//Explicit conversion 
    printf("Percentage is %.2f\n",percentage);
    return 0;
}