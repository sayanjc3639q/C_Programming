//20. Print grade using percentage

#include <stdio.h>

int main(){
    int marks1, marks2, marks3, marks4;
    int total;
    float percentage;
    char grade;

    printf("Enter your marks of 5 subject one by one (out of 100): ");
    scanf("%d %d %d %d",&marks1,&marks2,&marks3,&marks4);

    total = marks1 + marks2 + marks3 + marks4;
    percentage =  total/4; // total full marks will be 4*100 = 400, so percentage = (total/400)*100 or total/4

    // Conditions to assign grades
    if(percentage >= 90){grade = 'O';}
    else if(percentage >= 80){grade = 'A';}
    else if(percentage >= 70){grade = 'B';}
    else if(percentage >= 60){grade = 'C';}
    else if(percentage >= 50){grade = 'D';}
    else{grade = 'F';}

    printf("Your total marks is : %d\n",total);
    printf("Your percentage is : %0.2f\n",percentage);
    printf("Your Grade : %c",grade);

}