#include <stdio.h>//Accept Students roll no.,3 subjects marks(100 marks each),find total marks and Percentage
int main(){
    int roll,maths,science,english,total;
    float avg,percent;
    
    printf("Enter Roll no.:");
    scanf("%d",&roll);

    printf("Enter Maths Marks:\n");
    scanf("%d",&maths);

    printf("Enter Science Marks:\n");
    scanf("%d",&science);

    printf("Enter English Marks:\n");
    scanf("%d",&english);

    total=maths+science+english;
    printf("Total Marks :%d\n",total);

    avg=total/3.0;
    printf("Avegrage is :%f\n",avg);

    percent=(total*100)/300;
    printf("Percentage is :%.2f",percent);

    return 0;
}