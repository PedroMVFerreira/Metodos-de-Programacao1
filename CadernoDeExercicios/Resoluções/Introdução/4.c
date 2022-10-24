/*   Pedro Miguel do Vale Ferreira 
    a95699
    MP 1 -> MIETI 
*/

//Directory 
#include <stdio.h>

void main()
{
    //Data declaration and initialization 
    int inputMinutes;
    float days, restDays, hours, restHours, minutes; 

    //Input 
    printf("ENTER THE AMOUNT OF MINUTES TO BE CONVERTED IN DAYS, HOURS AND MINUTES\t\t");
    scanf("%i", &inputMinutes);

    //Calculations 
    //One day has 1440 minutes 
    days = (float)inputMinutes / 1440.00; //Converting minutes into days 
    restDays = days - (int)days; //Finding the decimal part of a day (the number of hours)
    //A day has 24 hours 
    hours = restDays * 24.00; //Converting the decimal part of the days into hours
    restHours = hours - (int)hours; //Finding the decimal part of hours (number of minutes)
    //An hour has 60 minutes 
    minutes = restHours * 60;

    //Output -> in testing
    printf("%.i DAYS, %i HOURS AND %i MINUTES", (int)days, (int)hours, (int)minutes);
}