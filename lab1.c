//Wesley Smith
//CSCI 112 Lab 1
//09/05/19
//Mileage Lab

//This lab will take a user input for how many miles
//they started and ended with and at a rate of $0.35 per mile
//give them the mileage reinbursement cost for that trip.

#include <stdio.h>

/* Defining how much we will reimburse per mile so that if the
 * cents per mile ever changes it's easier to change here
 * -- more robust code*/
#define cents .35;

int
main(void)
{	/*
	Here we're initializing our variables for grabbing these

	begin - starting mileage
	end - ending mileage
	miles - placeholder for total miles traveled
	money - taking the miles traveled and multiplying by .35
	
	*/
	double begin, end, miles, money;

	printf("MILEAGE REIMBURSEMENT CALCULATOR \n");

	/* Using a scanner to grab user inputs for mileage start and end */
	printf("Enter beginning odometer reading=> ");
	scanf("%lf", &begin);
	printf("Enter ending odometer reading=> ");
	scanf("%lf", &end);

	/* subtracting beginning miles from end miles */
	miles = end - begin;

	/* Formatting the total miles traveled to have 1 decimal place */
	printf("You traveled %.1f miles.\n", miles);

	/* Multiplying miles by our earlier defined cent cost per mile 
	 * to calculate money owed*/
	money = miles * cents;

	/* Formatting the reimbursement in dollars to have 2 decimal places*/
	printf("At $0.35 per mile, your reimbursement is $%.2f.\n", money);

	return (0);
}
