/*WAPC to input the number of units of electricity consumed by a consumer.Calculate and print the electricity bill based on the following criteria:
First 100 units:Rs.2 per unit
Next 200 units:Rs.3 per unit
Above 300 units:Rs.4 per unit
A surcharge of 2.5% is levied on the bill if the number of units exceeds 300 units*/

#include<stdio.h>
int main()
{
	int units,electricityBill;
	float surcharge;
	printf("\nEnter the number of units consumed:");
	scanf("%d",&units);
	if(units<100)
	{
		electricityBill=2*units;
		printf("\nThe electricity bill to be paid by the consumer is %d", electricityBill);
	}
	else if(units>100 && units<=300)
	{
		electricityBill=2*100+(301-units)*3;
			printf("\nThe electricity bill to be paid by the consumer is %d", electricityBill);
	}
	else
	{
		electricityBill=2*100+3*200+(units-300)*4;
		surcharge=(2.5*electricityBill)/100.0;
			printf("\nThe electricity bill to be paid by the consumer is %.2f", surcharge);
	}
	return 0;
}