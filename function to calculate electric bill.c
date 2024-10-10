//Function to calculate the electricity bill
/*
function to calculate the electric bill
Author: Victory
Reg no: CT101/G/22171/24
Date: 8/10/2024
*/
//preprocessor directive
#include<stdio.h>

int main(){
	int customerID,unit_consumed,total_amount_to_pay;
	char customername;
	float charge_per_unit,total_bill;
  printf("enter the customerID:");
  scanf("%d",&customerID);
  printf("enter the customername:");
  scanf("%s",&customername);
  printf("enter the unit_consumed:");
  scanf("%d",&unit_consumed);
    //Determine charge per unit based on the units consumed
 if(unit_consumed <= 199){
 	charge_per_unit =1.20;}
   else if (unit_consumed <= 400){
        charge_per_unit = 1.50;}     
    else if (unit_consumed < 600){
        charge_per_unit = 1.80;}
 else if(unit_consumed >=600) {
         charge_per_unit = 2.00;}
         //how to calculate the total bill
         total_bill = unit_consumed*charge_per_unit;
         if ( total_bill >400){
         	total_amount_to_pay =total_bill+(total_bill*0.15);}
         	if (total_bill <=100) {
         		total_amount_to_pay =100;}
         		printf("charge_per_unit is :%.2f\n",charge_per_unit);
         		printf("total amount to pay:%d\n",total_amount_to_pay);
         		
         		return 0;
}
		 
		 
				 		 
         		
         		
         		
    