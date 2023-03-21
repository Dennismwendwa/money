#include <stdio.h>
#include <stdlib.h>

#include "main.h"


void transferAmountfuct(float transferAmount, float accountBalance)
{

	printf("\n\t\t\t\t----------------milli Bank.-------------");
	printf("\n\t\t\t\t=============Transfer slip ========");
	printf("\n\t\t\t\t%s \t\t %s ", __DATE__, __TIME__);
	printf("\n\t\t\t\tYou have transferred____________ %.2f.", transferAmount);
	printf("\n\t\t\t\t\t New balance -----%.2f.", accountBalance);
	printf("\n\t\t\t\t --------Thankyou for choosing milli Bank--\n");

}
