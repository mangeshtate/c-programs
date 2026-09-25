#include <stdio.h>//Check whether a student passed both subjects
int main(){
    int maths=75;
    int science=65;
    if (maths>=40 && science>=40){//&& requires both conditions to be true
        printf("Passed Exam ");
    }
    return 0;
}