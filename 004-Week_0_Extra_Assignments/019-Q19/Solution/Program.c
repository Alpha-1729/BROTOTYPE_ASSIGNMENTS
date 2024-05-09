// Q19
/*
>>>>
>>>>
>>>>
>>>>
>>>>
>>>>
*/

#include <stdio.h>
void main()
{
	int parcelCharge = 200;
	int parcelWeight;
	setbuf(stdout, NULL);
	
	printf("Enter the weight of the parcel: ");
	scanf("%d", &parcelWeight);
	
	if (parcelWeight > 500)
	{
        parcelCharge += (parcelWeight / 500) * 170;
    }
    
    printf("The parcel charge is %d", parcelCharge);
}

