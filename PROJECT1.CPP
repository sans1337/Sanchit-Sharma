#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<dos.h>
void Rate();
void Doctors_info();
void New_Patient();
void Exist_Patient();
void Doctor_Management();
void Date();
void Show_Date();
void main()
{
clrscr();
int i,c;
gotoxy(34,20);
printf("\n\t\t\tLOADING\n");
for(i=1;i<=70;i++)
{
 delay(40);
 printf("%c",177);

}
clrscr();
Date();
clrscr();
int ch;
printf("\t***************************************************************");
printf("\n\n\t\t\tMAHATMA GANDHI HOSPITAL");
printf("\nReg no.");
printf("\t\t\t\t\t\t\t\tDate__\n\n");
show_Date();
printf("\n1.Check Price for Test");
printf("\n2.Doctor's Management System");
printf("\n3.Patient Management System");
printf("\n4.about us");
printf("\n5.Exit");
while(1)
{
 printf("\n\nenter your choice--");
 scanf("%d",&ch);
 switch(ch)
 {
  case 1:
	Rate();
	break;
  case 2:
	Doctor_Management();
	break;
  case 3:
	New_Patient();
	break;
  case 4:
	Exist_Patient();
	 break;
  case 5:
	exit(0);
       default:
       printf("\nInvalid Input");
 }

getch();
} }
void Rate()
{
   clrscr();
  int ch;
 printf("\n\nPrice list For All tests ");
 printf("\n1.Nephrology");
 printf("\n2.Urology");
 printf("\n3.Cardilogy");
 printf("\n4.Dramatologist");
 printf("\n\n5.for Main menu");
 while(1)
 {
 printf("\n\nPlease select one option");
 scanf("%d",&ch);
  switch(ch)
  {
    case 1:
    {
    clrscr();
     printf("\nNephrology--");
     printf("\t\t\t\t500");
     printf("\nComputed Tomology Scan(CAT)--\t\t1000");
     printf("\nElectroencephalogram(EEG)--\t\t1600");
     printf("\nmagnetic resonance imaging(MRI)--\t800");
     printf("\nArteriogram--\t\t\t600");
     printf("\npress 5 for Main menu");
    }
    break;

    case 2:
      {
       printf("UROLOGY Tests");
     printf("\t\t\t\t500");
     printf("\nComputed Tomology Scan(CAT)--\t\t1000");
     printf("\nElectroencephalogram(EEG)--\t\t1600");
     printf("\nmagnetic resonance imaging(MRI)--\t800");
     printf("\nArteriogram--\t\t\t600");
     printf("\npress 5 for Main menu");

      }
      break;
    case 3:
    {

	   printf("\nCardiology--");
     printf("\t\t\t\t500");
     printf("\nComputed Tomology Scan(CAT)--\t\t1000");
     printf("\nElectroencephalogram(EEG)--\t\t1600");
     printf("\nmagnetic resonance imaging(MRI)--\t800");
     printf("\nArteriogram--\t\t\t600");
     printf("\npress 5 for Main menu");
    }
    break;
    case 4:
    {
       printf("\nDramatologist--");
     printf("\t\t\t\t500");
     printf("\nComputed Tomology Scan(CAT)--\t\t1000");
     printf("\nElectroencephalogram(EEG)--\t\t1600");
     printf("\nmagnetic resonance imaging(MRI)--\t800");
     printf("\nArteriogram--\t\t\t600");
     printf("\npress 5 for Main menu");
    }
    break;
    case 5:
    {
    exit(0);
    }
    default:
    printf("Invalid Input Please try again");
    }
    }

  }
  void Doctor_Management()
  {       clrscr();
	  int ch;
	  printf("\n1.Doctor's Information");
	  printf("\n2.Doctor's Room ");
	  printf("\n3.Exit");
	  while(1)
	  {
		  printf("\nenter your choice 1-3");
		  scanf("%d",&ch);
	  switch(ch)
	  {
		  case 1:Doctors_info();
		  break;
		   case 2:


	  case 3:exit(0);
	  }
  }}

void Doctors_info()
{
  clrscr();
  printf("*************Doctor's Infomation***************** ");
  clrscr();
  int ch;
 printf("\n\nPrice list For All tests ");
 printf("\n1.Nephrology");
 printf("\n2.Urology");
 printf("\n3.Cardilogy");
 printf("\n4.Dramatologist");
 printf("\n\n5.for Main menu");


}
void New_Patient()
{}
void Exist_Patient()
{}
void Date()
{
int d,m,y;
printf("\nplease enter today date in DD/MM/YY format");
scanf("%d%d%d",&d,&m,&y);
}
void Show_Date()
{
	printf("%d",d,"//%d",m,"//%d",y)
	
}
