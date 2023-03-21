#include <stdio.h>
#include <stdlib.h>

#include "main.h"


int main(void)
{

	char name[30];
	long int account;
	float accountBalance = 0;
	float initDepost;
	int pin;

	int continueTran = 1;

	int opt;

	printf("\t\nWhat is your name: ");
	fgets(name, 30, stdin);
	printf("\t\nEnter your pin: ");
	scanf("%d", &pin);


	printf("\t\nEnter your account numner: ");
	scanf("%ld", &account);
	printf("\n\t\t How much do you want to deposit: ");
	scanf("%f", &initDepost);
	accountBalance = accountBalance + initDepost;
	initDepost = 0;

	do {

	printf("\t\nChooce what you want to do: ");
	printf("\t\n1. Check balance.");
	printf("\t\n2. Depost money.");
	printf("\t\n3. Withdraw money.");
	printf("\t\n4. Transfer money.");
	printf("\t\n5. Exit.");
	scanf("%d", &opt);


	float withdraw;
	float depost;
	float transferAmount;
	long int transferAccount;

	switch (opt) {
		case 1:

		printf("\t\nYour account balance is: %.2f.", accountBalance);

		break;

		case 2:

		printf("\t\nEnter amount to depost: ");
		scanf("%f", &depost);

		accountBalance = accountBalance + depost;

		depostMoney(depost, accountBalance);

		/*printf("\n\t\t\t----------------milli Bank.-------------"); */
		/*printf("\n\t\t\tYou have deposited____________ %.2f.", depost);*/
		/*printf("\n\t\t\t\t\t New balance -----%.2f.", accountBalance);*/
		/*printf("\n\t\t\t\t --------Thankyou for choosing milli Bank--\n");*/
		depost = 0;


		break;

		case 3:

		system("clear");

		printf("\n\tHow much do you want to withdraw: ");
		scanf("%f", &withdraw);


		if (withdraw >= (accountBalance - 100 ))
		{
			insufficient(accountBalance);

			/*printf("\n\t\tYour accout balance is %.2f", accountBalance);*/
			/*printf("\n\t\t\t Insufficient balance.");*/

		} 
		else 
		{
			accountBalance = accountBalance - withdraw;

			withdrawMoney(withdraw, accountBalance);

			/*printf("\n\t\t\t----------------milli Bank.-------------");*/
			/*printf("\n\t\t\tYou have withdrawn____________ %.2f.", withdraw);*/
			/*printf("\n\t\t\t\t\t New balance -----%.2f.", accountBalance);*/
			/*printf("\n\t\t\t\t --------Thankyou for choosing milli Bank--\n");*/
			withdraw = 0;
		}

		break;

		case 4:

		system("clear");



		printf("\n\t\tHow much do you want to transfer: ");
		scanf("%f", &transferAmount);
		printf("\n\t\tEnter account number: ");
		scanf("%ld", &transferAccount);


		if (transferAmount >= (accountBalance - 200 ))
		{
			insufficient(accountBalance);

			/*printf("\n\t\tYour accout balance is %.2f", accountBalance);*/
			/*printf("\n\t\t\t Insufficient balance.");*/

		}
		else 
		{
			accountBalance = accountBalance - transferAmount;

			/*printf("\n\t\t\t----------------milli Bank.-------------");*/
			/*printf("\n\t\t\t=============Transfer slip ========");*/
			/*printf("\n\t\t\tYou have transferred____________ %.2f.", transferAmount);*/
			/*printf("\n\t\t\t\t\t New balance -----%.2f.", accountBalance);*/
			/*printf("\n\t\t\t\t --------Thankyou for choosing milli Bank--\n");*/
			transferAmount = 0;

		}

		break ;

		case 5:

		printf("\n\t\tExiting ...");

		printf("\n\t\t\t\t --------Thankyou for choosing milli Bank--\n");
		break ;
	}

	printf("\n\tAny other transaction? ");
	printf("\t\tPress 1[Yes], 0[No]\n");
	scanf("%d", &continueTran);


	} while (continueTran != 0);
	return (0);
}
