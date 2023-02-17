#include<stdio.h>
#include<conio.h>
struct product
{
    int pno,price;
    float dis;
    char name[20];
   int dd,mm,yy;
   int qty;
};

struct product p[100];
void intro();
void about();
void create(int);
void del(int);
void display(int);
void place_o(int);
void search(int);
void admin_menu();
void cust(int);
void back(int);
void specific(int);
void main()
{
   int i=0,ch;
     clrscr();
     intro();
     clrscr();
     printf("\n\t-->> WELCOME TO SUPER MARKET BILLING SYSTEM <<--\n\n");
     printf("\t******************************************************\n\n\n");
while(1)
{
   printf("\n\n\tMAIN MENU \n");
	 printf("\n\t01:ADMINISTRATOR\n\n\t02:CUSTOMER\n\n\t03:ABOUT\n\n\t04:EXIT\n");
	 printf("\n\tPlease select your option(1-3): ");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	     case 1 :admin_menu(i); break;
	     case 2 :cust(i);break;
	     case 3 :about(i);break;
	     case 4 :exit(0);
	 }
   getch();
   }
}
  void back(int i)
  {
     int ch;
     clrscr();
     printf("\n\n\tMAIN MENU \n");
	 printf("\n\t01:ADMINISTRACTOR\n\n\t02:CUSTOMER\n\n\t03:ABOUT\n\n\t04:EXIT");
	 printf("\n\n\tPlease select your option(1-4): ");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	     case 1 :admin_menu(i); break;
	     case 2 :cust(i);       break;
	     case 3 :about(i);      break;
	     case 4 :exit(0);
	 }
	 getch();
     }
 void about()
 {
     clrscr();
       printf("\n\t================================");
       printf("\n\t     -->> ABOUT <<-- ");
       printf("\n\t================================\n\n");
     printf("\n\tINTRODUCTION : \n\n\t> The project is on Supermarket Billing.Supermarket is the place where\n customers come to purchase their daily using products and pay for that.So\n there is a need to calculate how many products are sold and to generate\n the bill for the customer.");
     getch();
 }
 void intro()
 {
   clrscr();
   printf("\n\n         ---------------->> SUPER MARKET <<---------------   \n\n\n");
   printf("             ------------->> BILLING <<-----------------  \n\n\n");
   printf("                ---------->> SYSTEM <<-------------   \n\n\n");
   printf("\n\n\n\tMADE BY :\n\n\t1225. Nikam Rutuja Rajendra\n\t1226.Thombare Shreya Vishnu\n\t1227. Patankar Aishwarya Amar\n\n\tCollege: Government Polytechnic ,Karad\n");
   getch();
}
   void admin_menu(int i)
   {
       int ch;
       clrscr();
       while(1)
       {
	  clrscr();
       printf("\n\n\tADMINISTRATION MENU \n\n");
	 printf("\n\t01:CREATE PRODUCT\n\n\t02:DISPLAY ALL PRODUCTS\n\n\t03:FIND SPECIFIC PRODUCT\n\n\t04:DELETE PRODUCT\n\n\t05:VIEW PRODUCT MENU\n\n\t06:SEAECH\n\n\t07:BACK TO MAIN MENU");
	 printf("\n\n\tPlease select your option: ");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	     case 1 :create(i++); break;
	     case 2 :display(i);  break;
	     case 3 :specific(i); break;
	     case 4 :del(i);      break;
	     case 5 :display(i);  break;
	     case 6 :search(i);   break;
	     case 7:back(i);
	 }
	 getch();
	 }
	getch();
   }
     void cust(int i)
     {
	 int ch;
	 clrscr();
	 while(1)
	 {
	 clrscr();
	 printf("\n\n\tCUSTOMER MENU \n");
	 printf("\n\t01:PLACE THE ORDER\n\n\t02:VIEW PRODUCT MENU\n\n\t03:BACK TO MENU\n");
	 printf("\n\tPlease select your option(1-3): ");
	 scanf("%d",&ch);
	 switch(ch)
	 {
	     case 1 :place_o(i); break;
	     case 2 :display(i);break;
	     case 3 :back(0);
	 }
	 getch();
	 }
	 getch();
     }
 void create(int i)
 {
      clrscr();
       printf("\n\t================================");
       printf("\n\t     -->> CREATE PRODUCT <<-- ");
       printf("\n\t================================\n\n");
       printf("\nEnter the Product number: ");
       scanf("%d",&p[i].pno);
       printf("\nEnter the product name: ");
       scanf("%s",&p[i].name);
       printf("\nEnter the Price: ");
       scanf("%d",&p[i].price);
       printf("\nEnter manufacturing date: ");
       scanf("%d%d%d",&p[i].dd,&p[i].mm,&p[i].yy);
       getch();
 }
 void del(int i)
 {
      int cnt,data;
      clrscr();
       printf("\n\t================================");
       printf("\n\t     -->> DELETE PRODUCT <<-- ");
       printf("\n\t================================\n\n");
      printf("\nEnter the product no. which you want to delete: ");
      scanf("%d",&data);
      for(cnt=0;cnt<=i-1;cnt++)
      {
	 if(data==p[cnt].pno)
	 {
	    p[cnt].pno=-1;
	    p[cnt].price=-1;
	     printf("\n\tProduct is deleted");
	 }
	 else
	 printf("\n\tProduct not found");
      }

      getch();
 }

 void specific(int i)
 {
     int j,data;
     clrscr();
       printf("\n\t==============================================");
       printf("\n\t     -->> DETAILS OF SPECIFIC PRODUCT <<-- ");
       printf("\n\t==============================================\n\n");
	printf("\nEnter Product number to search specific Product: ");
	scanf("%d",&data);
	for(j=0;j<=i-1;j++)
	{
	    if(data==p[j].pno)
	    {
		printf("\n===============================================\n");
		printf("  Pr.No.\tName  \tprice\t Manufacture_date");
		printf("\n===============================================\n");
		printf("\n   %d\t\t%s\t %d\t  %d %d %d",p[j].pno,p[j].name,p[j].price,p[j].dd,p[j].mm,p[j].yy);

	    }
	    if(data!=p[j].pno)
		printf("\n\tProduct not found");
	}

     getch();
 }
 void display(int i)
 {
   int cnt;
   clrscr();
       printf("\n\t=================================");
       printf("\n\t     -->> DISPLAY PRODUCT <<-- ");
       printf("\n\t=================================\n");
   printf("\n===============================================\n");
   printf("  Pr.No.\tName  \tprice\t Manufacture_date");
   printf("\n===============================================\n");
   for(cnt=0;cnt<=i-1;cnt++)
   {
      if((p[cnt].pno!=-1)&&(p[cnt].price!=-1))
      printf("\n   %d\t\t%s\t %d\t  %d %d %d",p[cnt].pno,p[cnt].name,p[cnt].price,p[cnt].dd,p[cnt].mm,p[cnt].yy);
   }
   getch();
}
    void search(int i)
    {
	int j,data;
	clrscr();
	printf("\n\t================================");
	printf("\n\t     -->> SEARCH PRODUCT <<-- ");
	printf("\n\t================================\n");
	printf("\nEnter Product number to search Product: ");
	scanf("%d",&data);
	for(j=0;j<=i-1;j++)
	{
	    if(data==p[j].pno)
	    {
		printf("\n\tProduct found at position %d",j);
	    }
	    else
	    printf("\n\tProduct not found");
	}
	getch();
    }
   void place_o(int i)
   {
       int data,dis,cnt;
       char ch;
       float amt,total=0;
       clrscr();
       printf("\n\t================================");
       printf("\n\t     -->> PLACE ORDER <<-- ");
       printf("\n\t================================");
       do
       {
       printf("\n\tEnter the product number : ");
       scanf("%d",&data);
       printf("\n\tEnter Quantity in number : ");
       scanf("%d",&p[i].qty);
       }while(ch=='y'||ch=='Y');

       for(cnt=0;cnt<=i-1;cnt++)
	  {
	    if(data==p[cnt].pno)
	    {
	     total=p[cnt].price*p[i].qty;
	    }
	  }
       printf("\n\tTotal = %f",total);

   for(cnt=0;cnt<=i-1;cnt++)
   {
      if((p[cnt].pno!=-1)&&(p[cnt].price!=-1))
      {
       printf("\n===============================================\n");
       printf("  Pr.No.\tName  \tprice\tqty ");
       printf("\n===============================================\n");
      printf("\n   %d\t\t%s\t %d\t  %d",p[cnt].pno,p[cnt].name,p[cnt].price,p[i].qty);
      }
      else
      printf("\n\tProducts Not Available\n\n\tOrder not placed...\n");
   }
     printf("\n\n\n\tThank You For Placing Order ");
     getch();
   }