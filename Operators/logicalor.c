#include <stdio.h>//Check whether a student passed atleast one subjects
int main(){
    int maths=35;
    int science=65;
    if (maths>=40 || science>=40){//|| requires atleast 1 conditions to be true
        printf("Passed Exam ");
    }
    return 0;
}