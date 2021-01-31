//HEADER FILES USED
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<string.h>
struct sign_in
{
    char username[10];
    char password[10];
}log_in;
//FUNCTIONS USED
void welcome();
void login();
void option();
void choice();
void book();
void drivers();
void estimate();
void credits();
//GLOBAL VARIABLES
int r,opt;
char navigate;
void main()
{
   welcome();
   login();
   randomize();
   r=random(11);
   clrscr();
   textcolor(45);
   cprintf("Please select any one of the following options");
   option();
   getch();
}
void welcome()
{
    clrscr();

    char intro1[]="Welcome to the chola cabs network.",intro2[]="LOADING. PLEASE WAIT...",intro3[]="Press any key to continue";
    int i,j,x,h;
    delay(100);
    for(j=0;j<80;j++)
    {
	cout<<'*';
	delay(20);
    }
    for(j=1;j<24;j++)
    {
	gotoxy(80,j);
	cout<<'*';
	delay(20);
    }

    for(h=1;h<24;h++)
    {
	gotoxy(1,h);
	cout<<'*';
	delay(20);
    }
    gotoxy(0,24);
    for(x=1;x<80;x++)
    {
	cout<<'*';
	delay(20);
    }
    gotoxy(25,10);
    for(i=0;intro1[i]!='\0';i++)
    {
	cout<<intro1[i];
	delay(60);
    }
    gotoxy(30,15);
    for(i=0;intro2[i]!='\0';i++)
    {
	cout<<intro2[i];
	delay(60);
    }
    delay(1900);
    gotoxy(28,20);
    for(i=0;intro3[i]!='\0';i++)
    {
	cout<<intro3[i];
	delay(60);
    }

    getch();
}
void login()
{
    clrscr();
    int i;
    char ad[]="Access Denied",ag[]="Access Granted";
    cout<<"You are not logged in";
    cout<<"\nEnter your username:\n";
    gets(log_in.username);
    cout<<"Enter your password\n";
    for(i=0;i<8;i++)
    {
	log_in.password[i]=getch();
	cout<<'*';
    }
    cout<<endl;
    if(strcmp(log_in.username,"username")==0 && strcmp(log_in.password,"password")==0)

    {
	for(i=0;ag[i]!='\0';i++)
	{
	    cout<<ag[i];
	    delay(60);
	}
	delay(1000);
    }
    else
    {
	for(i=0;ag[i]!='\0';i++)
	{
	    cout<<ad[i];
	    delay(60);
	}
	delay(1000);
	login();
    }

}
void option()
{
    cout<<"\n1.Book a cab - "<<r<<" currently available (out of 10)\
	\n2.See our driver database\
	\n3.Get the fare estimate\
	\n4.Logout\
	\n5.About Us";
    cin>>opt;
    choice();
}
void choice()
{
    switch(opt)
    {
	case 1:book();
	       break;
	case 2:drivers();
	       gotoxy(5,25);
	       cout<<"[M]ain Menu";
	       gotoxy(25,25);
	       cout<<"[L]og Out";
	       gotoxy(45,25);
	       cout<<"[F]are Estimate";
	       gotoxy(65,25);
	       cout<<"[E]xit";
	       navigate=getch();
	       if(navigate=='m')
		   option();
	       else if(navigate=='l')
		   main();
	       else if(navigate=='f')
		   estimate();
	       else if(navigate=='e')
		   exit;

	       break;
	case 3:estimate();
	       gotoxy(5,25);
	       cout<<"[M]ain Menu";
	       gotoxy(25,25);
	       cout<<"[L]og Out";
	       gotoxy(45,25);
	       cout<<"[E]xit";
	       navigate=getch();
	       if(navigate=='m')
		   option();
	       else if(navigate=='l')
		   main();
	       else if(navigate=='f')
		   estimate();
	       else if(navigate=='e')
		   exit;
	       break;
	case 4:main();
	       break;
	case 5:credits();
	       break;
	default:cout<<"Please select a valid option";
		option();
    }
}
void book()
{
    int cabno=random(10)+1;
    int time=random(5)+1;
    if(r==0)
	cout<<"Sorry, we do not have any available cabs right now,\nplease try again later";
    else
    {
	cout<<"Please wait while we connect you to a driver...";
	delay(random(2000)+1000);
	cout<<"\nYour cab has been booked.";
	cout<<"\nCab number "<<cabno<<" will be picking you up in "<<time<<" minutes";
	cout<<"\nThank you for your patience.";
	cout<<"\nTo get details about your driver, go to the driver database and enter your cab no.";
	gotoxy(10,20);
	cout<<"\nPress d to to the driver database,m to go to main menu";
	cin>>navigate;
	if(navigate=='d')
	    drivers();
	else if(navigate=='m')
	    clrscr();
	    option();
     }
}
void drivers()
{
    int cabno;
    clrscr();
    cout<<"Welcome the driver database, please enter your cab number to get details about your driver";
    cin>>cabno;
    switch(cabno)
    {
	 case 1:cout<<"Driver Name - Ram Prasad Sharma\n"
		    <<"Driver Age  - 39\n"
		    <<"Experience  - 6 years\n"
		    <<"Mobile No.  - 9889888123";
		      break;
	 case 2:cout<<"Driver Name - Ram Mohan Lal\n"
		    <<"Driver Age  - 30\n"
		    <<"Experience  - 3 years\n"
		    <<"Mobile No.  - 9947494083";
		      break;
	 case 3:cout<<"Driver Name - Uday Singh Rathore\n"
		    <<"Driver Age  - 35\n"
		    <<"Experience  - 7 years\n"
		    <<"Mobile No.  - 7483929293";
		      break;
	 case 4:cout<<"Driver Name - Akhilesh Sharma\n"
		    <<"Driver Age  - 26\n"
		    <<"Experience  - 1 year\n"
		    <<"Mobile No.  - 8726465908";
		      break;
	 case 5:cout<<"Driver Name - Ayush Bajaj\n"
		    <<"Driver Age  - 41\n"
		    <<"Experience  - 12 years\n"
		    <<"Mobile No.  - 9325678901";
		      break;
	 case 6:cout<<"Driver Name - Rajesh Mishra\n"
		    <<"Driver Age  - 40\n"
		    <<"Experience  - 8 years\n"
		    <<"Mobile No.  - 9868100123";
		      break;
	 case 7:cout<<"Driver Name - Shivraman\n"
		    <<"Driver Age  - 39\n"
		    <<"Experience  - 7 years\n"
		    <<"Mobile No.  - 9328989233";
		      break;
	 case 8:cout<<"Driver Name - Samsher Singh\n"
		    <<"Driver Age  - 35\n"
		    <<"Experience  - 2 years\n"
		    <<"Mobile No.  - 783890942";
		      break;
	 case 9:cout<<"Driver Name - Mukesh Banerjee\n"
		    <<"Driver Age  - 29\n"
		    <<"Experience  - 3 years\n"
		    <<"Mobile No.  - 9879678453";
		      break;
	 case 10:cout<<"Driver Name - Mahummad Ali\n"
		     <<"Driver Age  - 39\n"
		     <<"Experience  - 5 years\n"
		     <<"Mobile No.  - 7654123987";
		       break;
	 default:cout<<"Cab does not exist";
       }
}
void estimate()
{
    clrscr();
    float dist,total;
    cout<<"enter the distance needed to be travelled";
    cin>>dist;
    if(dist<5)
	total=100;
    else
	total=100+(10*(dist-5));
    cout<<"total=Rs. "<<total;
    cout<<"\nFare Breakup-\n";
    cout<<"Particular                    Cost\n\n"
	<<"Rs 100 for first 5 KM         100\n"
	<<"Reamaing "<<dist-5<<"KM @ Rs.10/KM      "<<(dist-5)*10
	<<"\n\nTotal=                        "<<total;
}
void credits()
{
    clrscr();
    gotoxy(38,5);
    delay(150);
    cout<<"ABOUT US";
    delay(150);
    gotoxy(18,10);
    cout<<"CREATOR";
    delay(150);
    gotoxy(18,12);
    cout<<"RITIK SURI";
    delay(150);
    gotoxy(18,13);
    cout<<"ROLL NO.-443";
    delay(150);
    gotoxy(21,14);
    cout<<"HMR";
}