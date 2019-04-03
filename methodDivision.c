#include<stdio.h>
double methodDivision(double firstui,double secondui);
int main(){
    double ui1,ui2,answer;
    scanf("%lf%lf",&ui1,&ui2);
    answer=methodDivision(ui1,ui2);
    printf("Answer : %lf\n",answer);
    return 0;
}

double methodDivision(double firstui,double secondui){
    double division;
    division=firstui/secondui;

    return division;
}

