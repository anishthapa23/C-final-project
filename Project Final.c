#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<windows.h>

struct sign{
	char fname[15];
	char lname[15];
	char uname[25];
	char pass[25];
	char rpass[25];
	char sport[25];
	 int d;
}e;
struct patient{
char name[40];
long long int no;
char mail[40];
char add[50];
int age;
int ref;
char doctor[40];
char blood[4];
}a,b;
   void listPatients() {
    FILE *p;
    struct patient temp;
    p = fopen("C:\\new\\data.txt", "rb");
    if (p == NULL) {
        printf("File Cannot Open!");
        exit(0);
    }
    
	    printf("\nList of Patients:\n");
		printf("--------------------------------------------------\n");
	    while (fread(&temp, sizeof(temp), 1, p)==1) {
        printf("Name        : %s\n", temp.name);
        printf("Phone Number: %lld\n",temp.no);
        printf("Address     : %s\n", temp.add);
        printf("Age         : %d\n", temp.age);
        printf("E-mail      : %s\n", temp.mail);
        printf("Blood Group : %s\n", temp.blood);
        printf("Doctor      : %s\n", temp.doctor);
        printf("--------------------------------------------------\n");
    }
    fclose(p);
    }
int main()
{
	FILE *fp;
	FILE *p,*q,*r;
	long long int D=0;
	int first;
	jc:
	printf("\t\t\t 1. USER \t\t\t\t\t2. ADMIN \n");
	printf("\t\t\t \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \t\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	printf("\n \t Enter your choice: ");
	scanf("%d",&first);
	if(first<1||first>2)
	{
		printf("\n Your Command is Incorrect. Please try again!");
		goto jc;
	}
	switch (first)
	{		
	case 1:
		bomu:
	    daya:
	    bhide:
	p=fopen("C:\\new\\data.txt","a");
	if(p==NULL)
	{
		printf("File Cannot Open!");
		exit(0);
	}
	int M=0,g=0,d=0,n=0,fcount=0,done=0,choice,phone=0;
	char u[30],pw[30],sperson[25],another,bc,cd,de,ph,password,rpassword,repass[30],fpass[30],auname[30],apass[30];
	int flag,count,j=0,i=0,o;
	fp=fopen("C:\\new\\itti.txt","ab+");
	if(fp==NULL)
	{
		printf("File Cannot Open!");
		exit(0);
	}
	
		system("cls");
	printf("\n\t\t\t\t\t\tDoctor's Appointment System");
	printf("\n\t\t\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	he:
	iyer:
	j=0;
	printf("\n\t\t\t\t\t\t1.   Login->");
	printf("\n\t\t\t\t\t\t2.   Sign up->");
	printf("\n\t\t\t\t\t\t3.   Forget Password->");
	printf("\n\t\t\t\t\t\t4.   Exit->");
	printf("\n\t\t\t\t\t\t     Enter your choice: ");
	fflush(stdin);
	scanf("%d",&choice);
	if(choice<1||choice>4)
	{
		printf("\n Your Command is Incorrect. Please try again!");
		goto daya;
	}
	switch (choice)
	{
		system("cls");
		case 1:
		printf("\n Login");
		printf("\n \xcd\xcd\xcd\xcd\xcd\xcd");
		printf("\n Username: ");
		fflush(stdin);
		gets(u);
		printf("\n Password: ");
		fflush(stdin);
		while((ph=_getch())!=13)
		{
			if(ph==8)
			{
				if(j>0)
				{
					j--;
				    printf("\b \b");
				}
				
				
			}
			else
			{
				pw[j]=ph;
				j++;
				printf("*");
			}
			
		}
			printf("\n Show Password[Y/N]?  ");
			fflush(stdin);
			scanf("%c",&another);
			if(another=='y'||another=='Y')
			{
				printf("\n Password: %s",pw);
			}
	
		rewind(fp);
    	while(fread(&e,sizeof(e),1,fp)==1)
		{
		if(strcmp(u,e.uname)==0 && strcmp(pw,e.pass)==0)
			{
			   flag=1;
			}
	    }
		if(flag==1 )
			{
				printf("\n Logged in Successfully ");
				Sleep(1000);
				printf("->");
				Sleep(500);
				printf("]");
				Sleep(500);
			}
		else 
		{
			printf("\n Incorrect Username or Password.");
			
			pw[j]='\0';
			ph='\0';
			rewind(fp);
			goto he;
		}
		fclose(fp);
		flag=0;	
		system("cls");
	printf("\n\t\t\t\t\t\tWELCOME TO THE PAR CLINIC");
	printf("\n\t\t\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	up:
	kist:
	printf("\n\t\t\t\t\t\tWHICH DOCTOR YOU WANT TO CONSULT? ");
	printf("\n\t\t\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	printf("\n\t\t\t\t\t\t1.  DR. AARYAN SHAH      (CARDIOLOGIST)");
	printf("\n\t\t\t\t\t\t2.  DR. DIVYA AGRAWAL    (GYNOLOGIST)");
	printf("\n\t\t\t\t\t\t3.  DR. ELIJA GAUTAM     (GYNOLOGIST)");
	printf("\n\t\t\t\t\t\t4.  DR. SHARAD BHATTRAI  (GENERAL PHYSICIAN)");
	printf("\n\t\t\t\t\t\t5.  DR. SHASHANK POKHRAL (PHYCHIATRIST)");
	printf("\n\t\t\t\t\t\t6.  DR. DIPAYAN PANDEY   (DERMATOLOGIST)");
	printf("\n\t\t\t\t\t\t7.  DR. LOV RAJ LOHANI   (RHEUMATOLOGIST)");
	printf("\n\t\t\t\t\t\t8.  DR. R. POKHREL       (ENT)");
	printf("\n\t\t\t\t\t\t9.  DR. KESHAV MANDAL    (PEDIATRIC)");
	printf("\n\t\t\t\t\t\t10. DR. SAILESH MAHARJAN (ORTHOPAEDICS)");
	printf("\n\t\t\t\t\t\t11. DR. PRAKASH SHRESTHA (ORTHOPAEDICS)");
	printf("\n\t\t\t\t\t\t12.  Exit");
	printf("\n\t\t\t\t\t\t(NOTE: Please Enter the Number to See the Doctor's Information and Timing)\n");
	printf("\n\t\t\t\t\t\tEnter your choice: \n");
	scanf("%d",&M);
	if(M<1||M>12)
	{
	printf("Please re-entre your Choice!\n");
	goto up;
	}
	if(M>=1&&M<=11)
	{
		hello:
		loh:
	system("cls");
	printf("\n\n\t\t\t\t\t\tENTER PATIENT INFORMATION");
	printf("\n\t\t\t\t\t\t\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\t\t\t\n\n");
	printf("Enter Full Name: \n");
	fflush(stdin);
	gets(a.name);
	printf("Enter Phone Number: \n");
	scanf("%lld",&a.no);
	printf("Enter Address: \n");
	fflush(stdin);
	gets(a.add);
	printf("Enter Age: \n");
	scanf("%d",&a.age);
	printf("Enter E-mail: \n");
	fflush(stdin);
	gets(a.mail);
	printf("Enter your blood group: \n");
	gets(a.blood);
	
	}
	
	system("cls");
	switch(M)
	{
	case 1:
	strcpy(a.doctor,"DR. AARYAN SHAH");
	printf("\t\t\tDR. AARYAN SHAH\t\t\t \n \t\t\tMBBS,MD(BPKISH)\t\t\t \n \t\t\tNMC NO:2956\t\t\t \n \t\t\tTIMING: EVERY MONDAY 10 AM TO 5 PM\t\t\t\n");
	printf("Enter 1 to Confirm & 0 to Cancel: \n");
	scanf("%d",&d);
	
	if(d==1)
	{
	system("cls");
	printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
	printf("\t\t\tName        =%s\t\t\t\n",a.name);
    printf("\t\t\tAge         =%d\t\t\t\n",a.age);
	printf("\t\t\tAddress     =%s\t\t\t\n",a.add);
	printf("\t\t\tNumber      =%lld\t\t\t\n",a.no);
	printf("\t\t\tEmail       =%s\t\t\t\n",a.mail);
	printf("\t\t\tDoctor Name =%s\t\t\t\n",a.doctor);
	printf("\t\t\tToken no.   =%d\t\t\t\n",a.mail);
	printf("\t\t\tBlood group =%s\t\t\t\n",a.blood);
	fclose(p);
	p=fopen("C:\\new\\data.txt","ab");
	fwrite(&a,sizeof(a),1,p);
	        }
	else
	{
	goto kist;
	}

			printf("\t\t\t\nGet Well Soon.");
			printf("\n Do you want to exit? [Y/N]");
			fflush(stdin);
			scanf("%c",&de);
			if(de=='Y'||de=='y')
			{
				exit(0);
			}
			else if(de=='N'||de=='n')
			{
				printf("\n Loading");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				Sleep(500);
				printf(".");
				goto bhide;
			}
   
break;

			case 2:
			strcpy(a.doctor,"DR. DIVYA AGRAWAL");
			printf("DR. DIVYA AGRAWAL  \n MBBS,MD(AIMS) \n NMC NO:5648 \n TIMING: EVERY THRUSDAY 10 AM TO 5 PM\n");
			printf("Enter 1 to Confirm & 0 to Cancel: \n");
			scanf("%d",&d);
			
			if(d==1)
			{
			system("cls");
			printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
           		printf("\t\t\tName        =%s\t\t\t\n",a.name);
	            printf("\t\t\tAge         =%d\t\t\t\n",a.age);
            	printf("\t\t\tAddress     =%s\t\t\t\n",a.add);
				printf("\t\t\tNumber      =%lld\t\t\t\n",a.no);
				printf("\t\t\tEmail       =%s\t\t\t\n",a.mail);
				printf("\t\t\tDoctor Name =%s\t\t\t\n",a.doctor);
				printf("\t\t\tToken no.   =%d\t\t\t\n",a.mail);
				printf("\t\t\tBlood group =%s\t\t\t\n",a.blood);
			fwrite(&a,sizeof(a),1,p);
			        }
			else
			{
			goto kist;
			}
			
			
						printf("\t\t\t\nGet Well Soon.");
						printf("\n Do you want to exit? [Y/N]");
						fflush(stdin);
						scanf("%c",&de);
						if(de=='Y'||de=='y')
						{
							exit(0);
						}
						else if(de=='N'||de=='n')
						{
							printf("\n Loading");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							goto bhide;
						}
						
			   
			break;
			
			case 3:
			strcpy(a.doctor,"DR. ELIJA GAUTAM");
			printf("DR. ELIJA GAUTAM \n MBBS,MD(BPKISH) \n NMC NO:6745 \n TIMING: EVERY MONDAY 11 AM TO 3 PM\n");
			printf("Enter 1 to Confirm & 0 to Cancel: \n");
			scanf("%d",&d);
			
			if(d==1)
			{
			system("cls");
			printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
			printf("\t\t\tName     		=%s\t\t\t\n",a.name);
		    printf("\t\t\tAge     		=%d\t\t\t\n",a.age);
			printf("\t\t\tAddress   	=%s\t\t\t\n",a.add);
			printf("\t\t\tNumber   		=%lld\t\t\t\n",a.no);
			printf("\t\t\tEmail         =%s\t\t\t\n",a.mail);
			printf("\t\t\tDoctor Name   =%s\t\t\t\n",a.doctor);
			printf("\t\t\tToken no.     =%d\t\t\t\n",a.mail);
			printf("\t\t\tBlood group   =%s\t\t\t\n",a.blood);
			fwrite(&a,sizeof(a),1,p);
			        }
			else
			{
			goto kist;
			}
				
						printf("\t\t\t\nGet Well Soon.");
						printf("\n Do you want to exit? [Y/N] ");
						fflush(stdin);
						scanf("%c",&de);
						if(de=='Y'||de=='y')
						{
							exit(0);
						}
						else if(de=='N'||de=='n')
						{
							printf("\n Loading");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							goto bhide;
						}
						
					
			   
			break;
			
			case 4:
			strcpy(a.doctor,"DR. SHARAD BHATTRAI");
			printf("DR. SHARAD BHATTRAI \n MBBS,MD-MEDICINE(BIR HOSPITAL) \n NMC NO:2356 \n TIMING: LAST SATURDAY OF THE MONTHS 10 AM TO 2 PM\n");
			printf("Enter 1 to Confirm & 0 to Cancel: \n");
			scanf("%d",&d);
			
			if(d==1)
			{
			system("cls");
			printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
			printf("\t\t\tName     		=%s\t\t\t\n",a.name);
		    printf("\t\t\tAge     		=%d\t\t\t\n",a.age);
			printf("\t\t\tAddress   	=%s\t\t\t\n",a.add);
			printf("\t\t\tNumber   		=%lld\t\t\t\n",a.no);
			printf("\t\t\tEmail         =%s\t\t\t\n",a.mail);
			printf("\t\t\tDoctor Name   =%s\t\t\t\n",a.doctor);
			printf("\t\t\tToken no.     =%d\t\t\t\n",a.mail);
			printf("\t\t\tBlood group   =%s\t\t\t\n",a.blood);
			fwrite(&a,sizeof(a),1,p);
			        }
			else
			{
			goto kist;
			}
			
					
						printf("\t\t\t\nGet Well Soon.");
				    	printf("\n Do you want to exit?  [Y/N]");
				    	fflush(stdin);
						scanf("%c",&de);
						if(de=='Y'||de=='y')
						{
							exit(0);
						}
						else if(de=='N'||de=='n')
						{
							printf("\n Loading");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							goto bhide;
						}
			   
			break;
			
			case 5:
			strcpy(a.doctor,"DR. SHASHANK POKHRAL");
			printf("DR. SHASHANK POKHRAL  \n MBBS,MD(BPKISH) \n NMC NO:4589 \n TIMING: EVERY SUNDAY 10 AM TO 5 PM\n");
			printf("Enter 1 to Confirm & 0 to Cancel: \n");
			scanf("%d",&d);
			
			if(d==1)
			{
			system("cls");
			printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
			printf("\t\t\tName         =%s\t\t\t\n",a.name);
			printf("\t\t\tAge          =%d\t\t\t\n",a.age);
			printf("\t\t\tAddress      =%s\t\t\t\n",a.add);
			printf("\t\t\tNumber       =%lld\t\t\t\n",a.no);
			printf("\t\t\tEmail        =%s\t\t\t\n",a.mail);
			printf("\t\t\tDoctor Name  =%s\t\t\t\n",a.doctor);
			printf("\t\t\tToken no.    =%d\t\t\t\n",a.mail);
			printf("\t\t\tBlood group  =%s\t\t\t\n",a.blood);
			fwrite(&a,sizeof(a),1,p);
			        }
			else
			{
			goto kist;
			}
				
						printf("\t\t\t\nGet Well Soon.");
						printf("\n Do you want to exit? [Y/N] ");
						fflush(stdin);
						scanf("%c",&de);
						if(de=='Y'||de=='y')
						{
							exit(0);
						}
						else if(de=='N'||de=='n')
						{
							printf("\n Loading");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							goto bhide;
						}
					
			   
			break;
			
			case 6:
			strcpy(a.doctor,"DR. DIPAYAN PANDEY");
			printf("DR. DIPAYAN PANDEY \n MBBS,MD(BPKISH) \n NMC NO:13317 \n TIMING: EVERY FRIDAY 10 AM TO 5 PM\n");
			printf("Enter 1 to Confirm & 0 to Cancel: \n");
			scanf("%d",&d);
			
			if(d==1)
			{
			system("cls");
			printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
			printf("\t\t\tName             =%s\t\t\t\n",a.name);
			printf("\t\t\tAge              =%d\t\t\t\n",a.age);
			printf("\t\t\tAddress          =%s\t\t\t\n",a.add);
			printf("\t\t\tNumber           =%lld\t\t\t\n",a.no);
			printf("\t\t\tEmail            =%s\t\t\t\n",a.mail);
			printf("\t\t\tDoctor Name      =%s\t\t\t\n",a.doctor);
			printf("\t\t\tToken no.        =%d\t\t\t\n",a.mail);
			printf("\t\t\tBlood group      =%s\t\t\t\n",a.blood);
			fwrite(&a,sizeof(a),1,p);
			        }
			else
			{
			goto kist;
			}
			
						printf("\t\t\t\nGet Well Soon.");
						printf("\n Do you want to exit?  [Y/N]");
						fflush(stdin);
						scanf("%c",&de);
						if(de=='Y'||de=='y')
						{
							exit(0);
						}
						else if(de=='N'||de=='n')
						{
							printf("\n Loading");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							goto bhide;
						}
						
			   
			break;
			
			case 7:
			strcpy(a.doctor,"DR. LOV RAJ LOHANI ");
			printf("DR. LOV RAJ LOHANI \n MBBS,MD(BIR HOSPITAL) \n NMC NO:11300 \n TIMING: EVERY TUESDAY 10 AM TO 1.30 PM\n");
			printf("Enter 1 to Confirm & 0 to Cancel: \n");
			scanf("%d",&d);
			
			if(d==1)
			{
			system("cls");
			printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
			printf("\t\t\tName             =%s\t\t\t\n",a.name);
		    printf("\t\t\tAge              =%d\t\t\t\n",a.age);
			printf("\t\t\tAddress          =%s\t\t\t\n",a.add);
			printf("\t\t\tNumber           =%lld\t\t\t\n",a.no);
			printf("\t\t\tEmail            =%s\t\t\t\n",a.mail);
			printf("\t\t\tDoctor Name      =%s\t\t\t\n",a.doctor);
			printf("\t\t\tToken no.        =%d\t\t\t\n",a.mail);
			printf("\t\t\tBlood group      =%s\t\t\t\n",a.blood);
			fwrite(&a,sizeof(a),1,p);
			        }
			else
			{
			goto kist;
			}
				
						printf("\t\t\t\nGet Well Soon.");
						printf("\n Do you want to exit?  [Y/N]");
						fflush(stdin);
						scanf("%c",&de);
						if(de=='Y'||de=='y')
						{
							exit(0);
						}
						else if(de=='N'||de=='n')
						{
							printf("\n Loading");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							goto bhide;
						}
						
			   
			break;
			
			case 8:
			strcpy(a.doctor,"DR. R. POKHREL");
			printf(" DR. R. POKHREL \n MBBS,MD(AIMS) \n NMC NO:7846 \n TIMING: FIRST SUNDAY 10 AM TO 2.30 PM\n");
			printf("Enter 1 to Confirm & 0 to Cancel: \n");
			scanf("%d",&d);
			
			if(d==1)
			{
			system("cls");
			printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
			printf("\t\t\tName     		   =%s\t\t\t\n",a.name);
			printf("\t\t\tAge              =%d\t\t\t\n",a.age);
			printf("\t\t\tAddress   	   =%s\t\t\t\n",a.add);
			printf("\t\t\tNumber           =%lld\t\t\t\n",a.no);
			printf("\t\t\tEmail            =%s\t\t\t\n",a.mail);
			printf("\t\t\tDoctor Name      =%s\t\t\t\n",a.doctor);
			printf("\t\t\tToken no.        =%d\t\t\t\n",a.mail);
			printf("\t\t\tBlood group      =%s\t\t\t\n",a.blood);
			fwrite(&a,sizeof(a),1,p);
			        }
			else
			{
			goto kist;
			}
			
				
						printf("\t\t\t\nGet Well Soon.");
						printf("\n Do you want to exit?  [Y/N] ");
						fflush(stdin);
						scanf("%c",&de);
						if(de=='Y'||de=='y')
						{
							exit(0);
						}
						else if(de=='N'||de=='n')
						{
							printf("\n Loading");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							goto bhide;
						}
						
			   
			break;
			
			case 9:
			strcpy(a.doctor,"DR.  KESHAV MANDAL");
			printf("DR.  KESHAV MANDAL  \n MBBS,MD(BPKISH) \n NMC NO:12546 \n TIMING: EVERY MONDAY  11 AM TO 3 PM\n");
			printf("Enter 1 to Confirm & 0 to Cancel: \n");
			scanf("%d",&d);
			
			if(d==1)
			{
			system("cls");
			printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
			printf("\t\t\tName             =%s\t\t\t\n",a.name);
			printf("\t\t\tAge              =%d\t\t\t\n",a.age);
			printf("\t\t\tAddress          =%s\t\t\t\n",a.add);
			printf("\t\t\tNumber           =%lld\t\t\t\n",a.no);
			printf("\t\t\tEmail            =%s\t\t\t\n",a.mail);
			printf("\t\t\tDoctor Name      =%s\t\t\t\n",a.doctor);
			printf("\t\t\tToken no.        =%d\t\t\t\n",a.mail);
			printf("\t\t\tBlood group      =%s\t\t\t\n",a.blood);
			fwrite(&a,sizeof(a),1,p);
			        }
			else
			{
			goto kist;
			}
			
						printf("\t\t\t\nGet Well Soon.");
						printf("\n Do you want to exit?  [Y/N]");
						fflush(stdin);
						scanf("%c",&de);
						if(de=='Y'||de=='y')
						{
							exit(0);
						}
						else if(de=='N'||de=='n')
						{
							printf("\n Loading");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							goto bhide;
						}
			   
			break;
			
			case 10:
			strcpy(a.doctor,"DR. SAILESH MAHARJAN");
			printf("DR. SAILESH MAHARJAN \n MBBS,MD(BPKISH) \n NMC NO:16004 \n TIMING: EVERY WEDNESDAY 11 AM TO 4 PM\n");
			printf("Enter 1 to Confirm & 0 to Cancel: \n");
			scanf("%d",&d);
			
			if(d==1)
			{
			system("cls");
			printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
			printf("\t\t\tName             =%s\t\t\t\n",a.name);
			printf("\t\t\tAge              =%d\t\t\t\n",a.age);
			printf("\t\t\tAddress          =%s\t\t\t\n",a.add);
			printf("\t\t\tNumber           =%lld\t\t\t\n",a.no);
			printf("\t\t\tEmail            =%s\t\t\t\n",a.mail);
			printf("\t\t\tDoctor Name      =%s\t\t\t\n",a.doctor);
			printf("\t\t\tToken no.        =%d\t\t\t\n",a.mail);
			printf("\t\t\tBlood group      =%s\t\t\t\n",a.blood);
			fwrite(&a,sizeof(a),1,p);
			        }
			else
			{
			goto kist;
			}
			
				
						printf("\t\t\t\nGet Well Soon.");
					    printf("\n Do you want to exit? [Y/N] ");
					    fflush(stdin);
						scanf("%c",&de);
						if(de=='Y'||de=='y')
						{
							exit(0);
						}
						else if(de=='N'||de=='n')
						{
							printf("\n Loading");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							goto bhide;
						}
						
			   
			break;
			
			case 11:
			strcpy(a.doctor,"DR. PRAKASH SHRESTHA");
			printf("DR. PRAKASH SHRESTHA \n MBBS,MD(TU-TEACHING) \n NMC NO:13456 \n TIMING: EVERY FRIDAY 10 AM TO 3 PM\n");
			printf("Enter 1 to Confirm & 0 to Cancel: \n");
			scanf("%d",&d);
			
			if(d==1)
			{
			system("cls");
			printf("\t\t\tYOUR APPOINTMENT HAS BEEN BOOKED SUCCESSFULLY\t\t\t\n");
			printf("\t\t\tName             =%s\t\t\t\n",a.name);
			printf("\t\t\tAge              =%d\t\t\t\n",a.age);
			printf("\t\t\tAddress          =%s\t\t\t\n",a.add);
			printf("\t\t\tNumber           =%lld\t\t\t\n",a.no);
			printf("\t\t\tEmail            =%s\t\t\t\n",a.mail);
			printf("\t\t\tDoctor Name      =%s\t\t\t\n",a.doctor);
			printf("\t\t\tToken no.        =%d\t\t\t\n",a.mail);
			printf("\t\t\tBlood group      =%s\t\t\t\n",a.blood);
			fwrite(&a,sizeof(a),1,p);
			        }
			else
			{
			goto kist;
			}
			
						printf("\t\t\t\nGet Well Soon.");
						printf("\n Do you want to exit?  [Y/N]");
						scanf("%c",&de);
						if(de=='Y'||de=='y')
						{
							exit(0);
						}
						else if(de=='N'||de=='n')
						{
							printf("\n Loading");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							Sleep(500);
							printf(".");
							goto bhide;
						}
			
			break;
			
		 				 case 12:
                             	printf("\t\t\t Thank you for visiting.");
                               	exit(0);
									
								break;
                        
break;


}
	break;
		case 2:
		fp=fopen("C:\\new\\itti.txt","a");
			{
				if(fp==NULL)
				{
					printf("\n File doesn't exist! ");
					exit(0);
				}
			}
		printf("\n Enter your First name: ");
		fflush(stdin);
		gets(e.fname);
		printf("\n Enter your Last name: ");
	    gets(e.lname);
	    printf("\n Enter your Date of Birth (YYYYMMDD): ");
	    scanf("%lld",&e.d);
	    printf("\n Enter your Username: ");
	    fflush(stdin);
	    gets(e.uname);
	    college:
	    printf("\n Enter your Password: ");
//	    gets(e.pass);
	    	while((password=_getch())!=13)
		{
				if(password==8)
			{
				if(j>0)
				{
					j--;
					printf("\b \b");
				}
					
			}
			else 
	        {
				e.pass[j]=password;
				j++;
				printf("*");
		    }
		}
	
		printf("\n Show Password[Y/N]?  ");
			scanf("%c",&bc);
			if(bc=='Y'||bc=='y')
			{
				printf("\n Password: %s",e.pass);
			}
	
		re:
		i=0;
	    printf("\n Re-enter to Confirm: ");
//	    gets(e.rpass);
	    	while((rpassword=_getch())!=13)
		{
				if(rpassword==8)
			{
				if(i>0)
				{
					i--;
					printf("\b \b");
				}
					
			}
			else 
			{
			
				e.rpass[i]=rpassword;
				i++;
				printf("*");
			}

		}
		
			printf("\n Show Password[Y/N]?  ");
			fflush(stdin);
			scanf("%c",&cd);
			if(cd=='Y'||cd=='y')
			{
				printf("\n Password: %s",e.rpass);
			}
			if(strcmp(e.rpass,e.pass)!=0)
			{
				printf("\n Re-entered Password is Incorrect!");
				rewind(fp);
				goto re;
			}
	
	    printf("\n Enter your Favourite Sports Person: ");
	    fflush(stdin);
	    gets(e.sport);
	    fwrite(&e,sizeof(e),1,fp);
	    	printf("\n Welcome %s",e.fname);
		    printf("\n Signed Up Successfully! Please login to Continue");
		   	Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
			Sleep(500);
			printf(".");
		    system("cls");
		fclose(fp);
	    goto he;
	
	    break;
	    
		case 3:
	    go:
	   	tapu:
	    fp=fopen("C:\\new\\itti.txt","rb+");
		if(fp==NULL)
		{
			printf("File Cannot Open!");
			exit(0);
		}
	printf("\n Forget Password? ");
    printf("\n \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
    printf("\n Enter your Favourite Sports Person: ");
    fflush(stdin);
    gets(sperson);
    printf("\n Enter your Date of Birth: ");
    scanf("%d", &o);

    rewind(fp);
    while (fread(&e, sizeof(e), 1, fp) == 1) {
        if (strcmp(sperson, e.sport) == 0) {
            count = 1;
        }
        if (o == e.d) {
            done = 1;
            break;
        }
    }

    if (count == 1 && done == 1) {
        hero:
        printf("\n Reset Password? ");
        printf("\n Enter new password: ");
        fflush(stdin);
        gets(fpass);
        enter:
        printf("\n Re-enter to Confirm: ");
        fflush(stdin);
        gets(repass);
        
        if (strcmp(fpass, repass) != 0) {
            printf("\n Passwords do not match! Try again.");
            goto hero;
        } 
		
            strcpy(e.pass, fpass);
            strcpy(e.rpass,repass);

                    fseek(fp, -(long)sizeof(e), SEEK_CUR);
                    fwrite(&e, sizeof(e), 1, fp);
                    fflush(fp);
                     printf("\n Password Updated Successfully! Login to Continue.");
           			 goto iyer;
          

    }
     else {
        printf("\n Your command is incorrect!");
        printf("\n Do you want to reset your password? [Y/N]");
        fflush(stdin);
        scanf(" %c", &de); 
        if (de == 'Y' || de == 'y') {
            rewind(fp);
            goto tapu;
        } else if (de == 'N' || de == 'n') {
        	system("cls");
			goto go;
            fclose(fp);
            return 0;
        }
    }

    fclose(fp);
		system("cls");
		break;
	        default:
	    	printf("\n Thank you for visiting->");
	    	exit(0);

}
    break;
    
    case 2:
    	
         re11:
    printf("\n Enter your username: ");
    fflush(stdin);
    gets(auname);
    printf("\n Enter your password: ");
    fflush(stdin);
    gets(apass);
    if(strcmp(auname,"admin")==0 && strcmp(apass,"admin")==0)
    {
    	printf("\n Logged In!\t");
	}
    else
    {
    	printf("Incorrect username or password! ");
    	goto re11;
	}
    Sleep(500);
    printf("Loading");
     Sleep(1000);
    printf(".");
     Sleep(500);
    printf(".");
     Sleep(1000);
    printf(".");
    printf("\n");

   	   	listPatients();
	break;
  }
return 0;

}

