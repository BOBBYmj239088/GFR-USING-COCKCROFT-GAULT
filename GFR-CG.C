#include<stdio.h>
#include<conio.h>
void main()
{
int i,wgt,age,sex;
float creatclear,creat;
clrscr();
printf("********************************************************************************\n");
printf("         WELCOME TO THE PROGRAM FOR CALCULATING GLOMURULAR FILTERATION RATE(GFR)");
printf("                          USING COCKCROFT-GAULT FORMULA \n"                   );
printf("                                                       # WRITTEN BY R.BABURAJAN \n");
printf("********************************************************************************\n");
i=1;
while(i<=10)
{
printf("\n Enter the value for Age: \n");
scanf("%d",&age);
printf("Enter the Sex of the Patient (1 FOR MALE AND 2 FOR FEMALE): \n");
scanf("%d",&sex);
printf("Enter the Weight of the Patient(in Kgs): \n");
scanf("%d",&wgt);
printf("Enter the Plasma/Serum Creatinine Value: \n");
scanf("%f",&creat);
if(sex==1)
{
creatclear=(((140-age)*wgt)/(creat*72));
printf("The Creatinine clearance for this Male Patient is: %f mL/Min \n",creatclear);
getch();
}
else if(sex==2)
{
creatclear=(((140-age)*wgt)/(creat*72))*0.85;
printf("The Creatinine clearance for this Female Patient is: %f mL/Min \n" ,creatclear);
getch();
}
else
{
printf("INCORRECT VALUE \n");
getch();
}
i=i++;
}
getch();
}
