#include <stdio.h>
#include <stdlib.h>

#include "main.h"

void withdrawMoney(float withdraw, float accountBalance)
{
	printf("\n\t\t\t\t----------------milli Bank.-------------");
	printf("\n\t\t\t\t %s \t\t %s ", __DATE__, __TIME__);
	printf("\n\t\t\t\tYou have withdrawn____________ %.2f.", withdraw);
	printf("\n\t\t\t\t\t New balance -----%.2f.", accountBalance);
	printf("\n\t\t\t\t --------Thankyou for choosing milli Bank--\n");

}
