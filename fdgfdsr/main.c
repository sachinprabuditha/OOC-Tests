#include<stdio.h>
int main(void){
	int typeOfRoom, NoOfDays;
	float amount, fullboard, halfboard, discount;
	char cardtype, accommodationBasis, RewardCardType;

	printf("Enter the Type of room: ");
	scanf("%d", &typeOfRoom);

	if(typeOfRoom>3 || typeOfRoom<1)
	printf("Invalid Type of Room");

	printf("Enter Accommodation Basis(F/H): ");
	scanf("%c", &accommodationBasis);

	printf("Enter No Of Days: ");
	scanf("%d", &NoOfDays);

	printf("Enter Reward Card Type: ");
	scanf("%c", RewardCardType);

	printf("Amount: ");
	scanf("%.2f", amount);


	switch (typeOfRoom) {
		case 1 :

	       Switch (accommodationBasis) {
	       	case 'F' :
	       		amount = 25555.00;
	       		Break;

			case 'H' :
			   	amount = 17250;
			   	Break;

		   } Break;
		case 2 :

	       Switch (accommodationBasis) {
	       	case 'F' :
	       		amount = 17500.00;
	       		Break;

			case 'H' :
			   	amount = 12250;
			   	Break;

		   } Break;
		case 3 :

	       Switch (accommodationBasis) {
	       	case 'F' :
	       		amount = 9000.00;
	       		Break;

			case 'H' :
			   	amount = 7250;
			   	Break;

		   } Break;
	}

	return 0;
}
