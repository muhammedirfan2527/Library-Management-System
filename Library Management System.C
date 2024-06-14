#include<stdio.h>
#include<dos.h>
#include<string.h>
struct library{
    int idno[40],R_id_no[50];
    char R_phone[50]; //I_date[30];    //a[50],e[50],y[50],x[50],i[50],f[50],g[50];
    char Book_name[50],Author_name[50],Subject_name[50],date[50],R_name[50];
	//char day,month,year;
}ved[100];
void main()
{
    char go,q[8][30]={"Add Books","Search Books","View Books","Registration","Issue Books","Return Book","Delete Book","Exit"},cho;
	int for1,switch1,n=0,m1,search[30],found=0,count=0,m2,a[50],m3=0,found1=0,I_id_no[10],R_date,I_date,z,y,x,b,c,d,e,i,f;
	int o;
	char ret_name[30];
	struct date dt;
	struct date da;
	clrscr();
	printf("\n\n\n\n\n\n\n");
	printf("##########################################################################\n");
    printf("###########                                                   ############\n");
    printf("###########   WELCOME TO  LIBRARY MANAGEMEMENT SYSTEM         ############\n");
    printf("###########    ============================================   ############\n");
    printf("###########             B.SC (C.S) 4 th Semester              ############\n");
    printf("###########     National Institute of Speech and Hearing      ############\n");
    printf("###########                                                   ############\n");
    printf("##########################################################################\n");
    printf("--------------------------------------------------------------------------\n");
    printf("--------------------------------------------------------------------------\n");
	getch();
	goto main1;
	main1:
do
{
clrscr();
printf("==============================================================================\n");
printf("                      Main Menu\n");
printf("==============================================================================\n");
for(for1=0;for1<8;for1++)
	    {
		printf("%d %s \n",for1+1,q[for1]);
	    }
printf("=====================================================================\n");
printf("Enter choice ===>");
scanf("%s",&switch1);
switch(switch1)
{
case '1':
	do
	{
	again:
	clrscr();
	printf("===============================================\n");
	printf("             Add New Books                     \n");
	printf("===============================================\n\n");
	printf("----------------------------------------------------- \n");
	printf("Enter book details below:-\n");
	printf("------------------------------------------------------\n");
	printf("Book ID NO            = ");
	scanf("%s",&ved[n].idno);
	for(m1=0;m1<n;m1++)
	{
		if(strcmp(ved[n].idno,ved[m1].idno)==0)
		{
			clrscr();
			printf("\t\nSORRY..");
			getch();
			goto again;
		}
	}
		k1:
		printf("Book name             = ");
		scanf("%s",&ved[n].Book_name);
		for(o=0;o<strlen(ved[n].Book_name);o++)
		{
		if(!isalpha(ved[n].Book_name[o]))
		{
			printf("Please enter only alphabet\n");
			goto k1;
		}
		}
		k2:
		printf("Author name           = ");
		scanf("%s",&ved[n].Author_name);
			for(o=0;o<strlen(ved[n].Author_name);o++)
		{
		if(!isalpha(ved[n].Author_name[o]))
		{
			printf("Please enter only alphabet\n");
			goto k2;
		}
		}
		k3:
		printf("Subject Name          = ");
		scanf("%s",&ved[n].Subject_name);
			for(o=0;o<strlen(ved[n].Subject_name);o++)
		{
		if(!isalpha(ved[n].Subject_name[o]))
		{
			printf("Please enter only alphabet\n");
			goto k3;
		}
		}
		getdate(&dt);  // da=(dt)+14;
		printf("Enter date in format (day/month/year) : ");
		printf("%d/%d/%d\n\n",dt.da_day,dt.da_mon,dt.da_year);
		//scanf("%s",&ved[n].date);
		n++;
	       zz:
	printf ("Do you want to continue ('Y' or 'N'):");
	scanf("%s",&cho);
	if(cho=='n' ||cho=='N')
	{
	 goto main1;
	}
	else if(cho=='y' ||cho=='Y')
	{
	  goto again;
       //	 printf("only ('Y' or 'N')");
	}
	else
	{
		 printf("only ('Y' or 'N')\n");
	}
	 goto zz;
	}while(cho=='y' || cho=='Y');
	break;
case '2':
    clrscr();
    found=0;
	printf("=================================================================\n");
	printf("\t\t\tSearch Books \n");
	printf("=================================================================\n");
	printf("Book ID NO            = ");
	scanf("%s",&search);
	printf("=================================================================\n");
	for(m1=0;m1<n;m1++)
	{
		if(strcmp(search,ved[m1].idno)==0)
		{
			printf("Book ID NO            = %s\n",ved[m1].idno);
			printf("Book name             = %s\n",ved[m1].Book_name);
			printf("Author name           = %s\n",ved[m1].Author_name);
			printf("Subject Name          = %s\n",ved[m1].Subject_name);
		found=1;
		break;
		}
	}
	if(!found)
	{
	//	 printf("%s\t\t%s\t\t%s\t\t%s\n",ved[m1].idno,ved[m1].Book_name,ved[m1].Author_name,ved[m1].Subject_name);
		printf("Not search........\n");

	}
	/*else
	{
	printf("Not search........\n");
	}*/

	 printf("*************************************************************************\n\n");
   printf("Press any key to menu");
	 getch();
	 goto main1;
     /*	scanf("%s",&go);
   if(go=='m' || go=='M')
   {
	goto main1;
   }   */
case '3':
	  clrscr();
	printf("=================================================================\n");
	printf("\t\t\t View Books Details\n");
	printf("=================================================================\n");

	printf("Book ID No\tBook Name\tAuthor Name\tSubject Name\n");
	printf("*************************************************************************\n\n");
   if(n>0)
   {
		for(m1=0; m1<n; m1++)
	{
		printf("%s\t\t%s\t\t%s\t\t%s\n",ved[m1].idno,ved[m1].Book_name,ved[m1].Author_name,ved[m1].Subject_name);
	}
   }
   else
   {
	printf("No viewing....\n");
   }
	printf("*************************************************************************\n\n");
	 printf("Press any key to menu\n");
	getch();
	goto main1;
  /* scanf("%s",&go);
   if(go=='m' || go=='M')
   {
	goto main1;
   }    */
case '4':

	   do
	   {
		   ag:
			clrscr();
			printf("=================================================================\n");
			printf("\t\t\tRegistration \n");
			printf("=================================================================\n\n");
			printf("***************************************************************\n");
			printf("ID No     :");
			scanf("%s",&ved[n].R_id_no);
				for(m1=0;m1<n;m1++)
			{
				if(strcmp(ved[n].R_id_no,ved[m1].R_id_no)==0)
				{
				clrscr();
				printf("There is %d",ved[n].R_id_no);
				getch();
				goto ag;
				}
			}
			k4:
			printf("Name    :");
			scanf("%s",&ved[n].R_name);
				for(o=0;o<strlen(ved[n].R_name);o++)
			{
		if(!isalpha(ved[n].R_name[o]))
		{
			printf("Please enter only alphabet\n");
			goto k4;
		}
			}
			oo:
			printf("Phone No :");
			scanf("%s",&ved[n].R_phone);
			if(strlen(ved[n].R_phone)!=10)
			{
			printf("\n Not Accept\n");
			goto oo;
			}
			 n++;
			zx:
			printf ("Do you want to continue ('Y' or 'N'):");
			scanf("%s",&cho);
			if(cho=='n' ||cho=='N')
			{
				goto main1;
			}
			else if(cho=='y' ||cho=='Y')
			{
				goto ag;
			}
			else
			{
				printf("only ('Y' or 'N')\n");
			}
			goto zx;
		}while(cho=='y' || cho=='Y');

case '5':    issue:
			again1:
	    clrscr();
	printf("\t=========================================\n");
	printf("                     lssue Books                   \n");
	printf("\t=========================================\n");
	printf("***********************************************************\n");
	do
	{
		printf("Book Id No =");
		scanf("%s",&a);
		for(m1=0;m1<n;m1++)
		{
			if(strcmp(a,ved[m1].idno)==0)
			{
				found=1;
				break;
			}
		}
		if(found==1)
		{
			printf("Enter any name books = %s\n",ved[m1].Book_name);
			printf("Author Name = %s\n",ved[m1].Author_name);
			printf("Subject Name =%s\n",ved[m1].Subject_name);
		}
		else
		{
			printf("there is not");
			getch();
			goto issue;
		}
		reg:
		printf("***********************************************************\n\n");
		printf("ID No =");
		scanf("%s",&I_id_no);
		for(m1=0;m1<n;m1++)
		{
			if(strcmp(I_id_no,ved[m1].R_id_no)==0)
			{
				found1=1;
				break;
			}
		}
		if(found1==1)
		{
			printf("Your name = %s\n",ved[m1].R_name);
			printf("lssue book date (day/month/year)=");
			printf("%d/%d/%d\n\n",dt.da_day,dt.da_mon,dt.da_year);
		//	scanf("%s",&I_date);
			printf("Return date (day/month/year)=");
			if(dt.da_day+14>=31)
			{
				da.da_day=dt.da_day+13-31;
				if(da.da_day>-1)
				{
					da.da_day=da.da_day+1;
				}
			       /*	else
				{
				}*/
				da.da_mon=dt.da_mon+1;
			}
			else
			{

			 da.da_mon=dt.da_mon;
			}
			if(da.da_mon>=12)
			{
			da.da_year=dt.da_year+1;
			}
			else
			{
			 da.da_year=dt.da_year;
			}
			printf("%d/%d/%d\n\n",da.da_day,da.da_mon,da.da_year);

		     //	scanf("%s",&R_date);

		}
		else
		{
			printf("Not registraction........\n");
			getch();
			goto reg;
		}
		n++;
		zc:
		printf("Do you want to continous ('Y' or 'N'):");
		scanf("%s",&cho);
		if(cho=='n' ||cho=='N')
		{
			goto main1;
		}
		else if(cho=='y' ||cho=='Y')
		{
			goto again1;
		}
		else
		{
			printf("only ('Y' or 'N')\n");
		}
		goto zc;
	}while(cho=='y' || cho=='Y');
case '6': pp:
 clrscr();
	found1=0;
	printf("====================================================================\n");
	printf("\t\t\tReturn Book\n");
	printf("====================================================================\n");
	do
	{
		printf("ID No                      :");
		scanf("%s",&I_id_no);
		for(m3=0;m3<n;m3++)
		{
			if(strcmp(I_id_no,ved[m3].R_id_no)==0)
			{
				found1=1;
				break;
			}
		}
		if(found1==1)
		{
			printf("Your name = %s \n",ved[m3].R_name);
			printf("Issue book date(day/month/year)      :");
			printf("%d/%d/%d\n",dt.da_day,dt.da_mon,dt.da_year);
			printf("Return book date(day/month/year)     :");
			printf("%d/%d/%d\n\n",da.da_day,da.da_mon,da.da_year);
			printf("Return book date(day/month/year)     :");
			scanf("%s",&f);
		}
		else
		{
			printf("Not search........\n");
		}
		if(found1)
		{
			printf("\t\tWELL DONE !!\n");
		}
		n++;
		printf("Do you want to continous ('Y' or 'N'):");
		scanf("%s",&cho);
		if(cho=='n' ||cho=='N')
		{
			goto main1;
		}
		else if(cho=='y' ||cho=='Y')
		{
			goto pp;
		}
		else
		{
			printf("only ('Y' or 'N')\n");
		}
		goto zz;
	}while(cho=='y' || cho=='Y');
case '7':
	    clrscr();
	printf("=================================================================\n");
	printf("Delete Books \n");
	printf("=================================================================\n");
	printf("Book ID             = ");
	scanf("%s",&a);
	count=0;
	for(m1=0;m1<n;m1++)
	{
	    if(strcmp(a,ved[m1].idno)==0)
	    {
	     count++;
	     for(m2=m1;m2<n;m2++)
	     {
	       ved[m2]=ved[m2+1];
	     }
	    }
	 }
	 if(count)
	 {
	    printf("Deleted successfully\n");
	    }
	    else
	    {
	    printf("No found page\n");
	    }
	     printf("Press any key to menu\n");
		getch();
		goto main1;
	  /*   scanf("%s",&go);
   if(go=='m' || go=='M')
   {
	goto main1;
	}  */

case '8':
	   exit(0);
	   //break;

default :
	printf("It is not accepted\n");
	getch();
	break;
}
}while(switch1!=8);
getch();
}