#include <stdio.h>
#include <stdlib.h>
#define SCHOOL_FEE 90000

int main()
{
    //Declaring identifiers
    char first_name[10], last_name[10];
    int id, band_number, scholarship, loan, fee_paid_by_government, school_fee_paid_by_student;

    //Asking for user input
    printf("\n---INPUT THE STUDENT DETAILS ---\n");
    printf("Enter your student Admission Number: ");
    scanf("%d", &id);
    printf("Enter student first name: ");
    scanf("%s", first_name);
    printf("Enter student last name: ");
    scanf("%s", last_name);
    printf("Select your Band between 1 to 5: ");
    scanf("%d", &band_number);

    /*if (band_number < 1 || band_number > 5)
    {
        printf("\n");
        printf("The band number should be between 1 and 5.\n");
        return 0;
    }*/

    // Keep asking  for the band number until the user enters a valid number
    while (band_number < 1 || band_number > 5)
    {
        printf("Invalid input! Band number should be between 1 and 5.\n");
        printf("Please enter again your brand number: ");
        scanf("%d", &band_number);
    }

    //calculate fee depending with the band number
    if(band_number == 1)
    {
        scholarship = 15000;
        loan = 22000;
    }
    else if(band_number == 2)
    {
        scholarship = 25000;
        loan = 25000;
    }
    else if(band_number == 3)
    {
        scholarship = 35000;
        loan = 27000;
    }
    else if(band_number == 4)
    {
        scholarship = 45000;
        loan = 29000;
    }
    else if(band_number == 5)
    {
        scholarship = 55000;
        loan = 31000;
    }
    else
    {

        printf("The band number should be between 1 and 5.\n");
    }

    fee_paid_by_government = scholarship + loan;
    school_fee_paid_by_student = SCHOOL_FEE - fee_paid_by_government;

    printf("\n--- STUDENT FEE DETAILS ---\n");
    printf("Student Admission Number: %d \n", id);
    printf("Student Full Name: %s %s \n", first_name, last_name);
    printf("Scholarship Given: %d \n", scholarship);
    printf("Loan Given: %d \n",loan);
    printf("Total Amount to be paid by the government: %d \n", fee_paid_by_government);
    printf("Total Amount Paid by the student %s %s : %d", first_name, last_name, school_fee_paid_by_student);

    return 0;
}
