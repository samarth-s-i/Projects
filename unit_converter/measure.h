/* 
	Measurement Units Header file.
	Program Authors: Anand Kanavalli, Brunda Kubsad, Manasa Palled & Samarth Itagi.
*/

#include<stdio.h>
#include<string.h>


//Function to convert centimeter into foot.
void cm_to_ft()
{
	float cm;
	printf("Enter the value in centimeter: ");
	scanf("%f",&cm);
	printf("%.2f cm = %.2f ft\n",cm,(cm*0.0328084));
}
//Function to convert foot into centimeter.
void ft_to_cm()
{
	float ft;
	printf("Enter the value in foot: ");
	scanf("%f",&ft);
	printf("%.2f ft = %.2f cm\n",ft,(ft/0.0328084));
}



//Function to find BMI.
void bmi()
{  
  	float bmi,height,weight;
  	printf("Enter height in centimeter\n");  
    scanf("%f", &height);  
  
    printf("Enter weight in kg\n");  
    scanf("%f", &weight);
  	height=height/100;
    bmi = weight / (height * height);  
 	
    printf("Your Body Mass Index(BMI) is %f\n", bmi);  
  
    if(bmi < 15)  
    {  
        printf("Your BMI category is: Starvation\n");  
    }  
    else if(bmi >= 15.1 && bmi <= 17.5)  
    {  
        printf("Your BMI category is: Anorexic\n");  
    }  
    else if(bmi >= 17.6 && bmi <= 18.5)  
    {  
        printf("Your BMI category is: Underweight\n");  
    }  
    else if(bmi >= 18.6 && bmi <= 24.9)  
    {  
        printf("Your BMI category is: Ideal\n");  
    }  
    else if(bmi >= 25 && bmi <= 25.9)  
    {  
        printf("Your BMI category is: Overweight\n");  
    }  
    else if(bmi >= 30 && bmi <= 30.9)  
    {  
        printf("Your BMI category is: Obese\n");  
    }  
    else if(bmi >= 40)  
    {  
        printf("Your BMI category is: Morbidly Obese\n");  
    }  
    else  
    {  
        printf("Wrong entry\n");  
    }
}



//Function for Data conversion.
//Kb to Mb-
void data_kb_to_mb()
{
	float kb;
	printf("Enter the value in kb: ");
	scanf("%f",&kb);
	printf("%.2f kb = %.2f mb",kb,(kb*1024));
}

//Mb to Kb-
void data_mb_to_kb()
{
	float mb;
	printf("Enter the value in mb: ");
	scanf("%f",&mb);
	printf("%.2f mb = %.2f kb",mb,(mb/1024));
}



//Function to calculate discount amount.
void discount()
{
	float price;
    float discount_percentage;
    float discount_amount;
    float discounted_price;
    printf("\n\n Enter Price of Item  : ");
    scanf("%f", &price);
    printf("\n\n Enter Discount Percentage on Item  : ");
    scanf("%f", &discount_percentage);
    discount_amount = (discount_percentage*price)/100;
    discounted_price = (price-discount_amount);  
    printf("\n\nDiscount amount : %f \n\n",  discount_amount);
    printf("Discounted price : %f \n\n",  discounted_price);
}



//Function to convert Temperature-
//Farenheit to celsius.
void temp_fah_to_cel()
{
	float fah, cel;
    printf("Enter a temperature in fahrenheit: ");
    scanf("%f", &fah);
    cel = (5.0/9) * (fah - 32);
    printf("%.2f degree F is same as %.2f degree C", fah, cel);
}

//Celsius to Farenheit.
void temp_cel_to_fah()
{
	float fah, cel;
    printf("Enter a temperature in celsius: ");
    scanf("%f", &cel);
    fah = ((9.0/5) * cel) + 32;
    printf("%.2f degree C is same as %.2f degree F", cel, fah);
}



//Function to convert 12 hour time format to 24 hour format.
void time_24()
{
	int hh, mm, ss;
    char a[3];
    printf("Enter hours 'hh'\t: ");
    scanf("%d", &hh);
    printf("Enter minutes 'mm'\t: ");
    scanf("%d", &mm);
    printf("Enter seconds 'ss'\t: ");
    scanf("%d", &ss);
    printf("Enter 'am' or 'pm'\t: ");
    scanf("%s", &a);
    if(hh <= 12 && mm <= 59 && ss <= 59)      
    {
        if((strcmp(a,"PM") == 0) || (strcmp(a,"pm") == 0) 
           && (hh != 0) && (hh != 12))
        {
            hh = hh + 12;
        }
        if((strcmp(a,"AM") == 0) || (strcmp(a,"am") == 0) && (hh == 12))
        {
            hh = 0;
        }
        printf("The obtained 24-hour format of input is ");
        printf("%02d:%02d:%02d", hh, mm, ss);
        printf("\n\n");
    }
    else
    {
        printf("Provide the correct inputs.");
    }
}
//Function to convert Hour(s) into Minute(s)
time_hr_min()
{
	float hr,min;
	printf("\nEnter the Hour value: ");
	scanf("%f",&hr);
	printf("%.0f Hour(s) = %.2f Minute(s)",hr,(hr*60.0));
}
//Function to convert Minute(s) to Hour(s)
time_min_hr()
{
	float hr,min;
	printf("\nEnter the Minute value: ");
	scanf("%f",&hr);
	printf("%.0f Minute(s) = %.2f Hour(s)",hr,(hr/60.0));
}


//Function to convert mass .
void ton_to_kg()
{
	float ton,kg,gr;
	printf("Enter the value in ton: ");
	scanf("%f",&ton);
	kg=ton*907.185;
	 if(kg>1000)
	  gr=kg/1000.0;
	 else
	  gr=kg;
	printf("%.2f ton = %.2f kg",ton,gr);
}

//Function to convert ton to kg.
void kg_to_ton()
{
	float kg;
	printf("Enter the value in kg: ");
	scanf("%f",&kg);
	printf("%.2f kg = %.2f ton",kg,(kg/907.185));
}
