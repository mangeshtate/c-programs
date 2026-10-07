#include <stdio.h>//Assigning Grades Accorgind to student's Subjects Average marks
int main()
{
    int phy,chem,math,tot;//100 marks each subject
    float avg;
    char grd;
    printf("Enter Marks of PCM respectively:");
    scanf("%d %d %d",&phy,&chem,&math);
    tot=phy+chem+math;
    avg=(float)tot/3;//typecasting
    if (avg>=90){
        grd='A';
    }
    else if(avg>=80){
        grd='B';
    }
    else if(avg>=70){
        grd='C';
    }
    else if(avg>=40){
        grd='P';
    }
    else{
        grd='F';
    }
    printf("%d %d %d %d %.2f %c",phy,chem,math,tot,avg,grd);

    return 0;
}