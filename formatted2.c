#include <stdio.h>

int main(){
    char my_name[50];        // Array to store the user's name
    int my_age;              // Variable to store the user's age
    char college_name[50];   // Array to store the college name
    double gpa;              // Variable to store the GPA

    // Read user input
    scanf("%s %d %s %lf", my_name, &my_age, college_name, &gpa);
    
    // Print the formatted output
    printf("I am %s from the College of %s.\n", my_name, college_name);
    printf("I am now %d and the GPA of my last semester is %.2lf.\n", my_age, gpa);

    return 0;
}
