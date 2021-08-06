#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include "color.h"

#define NewLine printf("\n")
#define Pause system("pause")
#define Clear system("cls")


void animation(){
	Clear;
	printf("Calculating ");
	for (int i = 0; i < 10; ++i)
	{
		printf(".");
		Sleep(235);
	}
	Clear;
}

void design(){
	color("yellow");
	printf("#");
	for (int i = 0; i < 60; ++i)
	{
		Sleep(40);
		printf("~");
	}
	printf("#\n");
	color("reset");
}

void Load(float pulse){

	float result, energyPerDay,energyPerMonth,cost;

	result = (pulse*60/6400)*1000;
	color("yellow");
	printf("Total load is %0.2f Watts\n",result );
	NewLine;

	energyPerDay = (result/1000)*24;
	color("grey");
	printf("Eergy used per day is %0.2f kWh\n",energyPerDay );
	NewLine;
	color("red");
	energyPerMonth  = energyPerDay*30;
	printf("Enery use per month is %0.2f kWh\n",energyPerMonth);
	color("reset");

	NewLine;
	color("cyan");

	float slab_1 = 1.54;
	float slab_2 = 2;
	float slab_3 = 3.5;
	float duty = 1.15;

	if (energyPerMonth <= 100)
	{
		cost = (slab_1*energyPerMonth)*duty;
		printf("Bill per month is  Rs %0.2f \n",cost );
	} else if (energyPerMonth > 100 && energyPerMonth <= 400)
	{
		cost = (154 + slab_2*(energyPerMonth-100))*duty;
		printf("Bill per month is  Rs %0.2f \n",cost );
	} else
	{
		cost = (754 + slab_3*(energyPerMonth-400))*duty;
		printf("Bill per month is  Rs %0.2f \n",cost );
	}

	color("reset");
}

void cal(float pulse){

	printf("Enter the pulse count per mint = ");
	scanf("%f",&pulse);
	animation();
	design();
	Load(pulse);
	NewLine;
	design();
	NewLine;
	Pause;
	Clear;
}

int main()
{
	float pulse;
	Clear;
	int n,choice;
	while (n>0)
	{
		cal(pulse);
		printf("Do you want to continue, press 1 to terminate or any number to continue.. ");
		scanf("%d",&choice);
		Clear;

		if (choice == 1)
		{
			n = 0;
		}
	}


	return 0;
}