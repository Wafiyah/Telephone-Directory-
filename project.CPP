#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>
#include<dos.h>


void alphabate();
void name();
void number();
void police();
void fire();
void hospital();


 void main()
{
   int gd = DETECT, gm;

   initgraph(&gd, &gm, "C:\\TC\\BGI");

   setbkcolor(YELLOW);

   setcolor(BLUE);
   circle(75,75,50);
   setcolor(BLUE);
   circle(75,75,49);
   setcolor(RED);
   circle(75,75,45);
   setcolor(RED);
   circle(75,75,44);
   setcolor(MAGENTA);
   circle(75,75,40);
   setcolor(MAGENTA);
   circle(75,75,39);
   setcolor(DARKGRAY);
   circle(75,75,35);
   setcolor(DARKGRAY);
   circle(75,75,34);
   setcolor(BROWN);
   circle(75,75,30);
   setcolor(BROWN);
   circle(75,75,29);
   setcolor(LIGHTRED);
   circle(75,75,25);
   setcolor(LIGHTRED);
   circle(75,75,24);
   setcolor(CYAN);
   circle(75,75,20);
   setcolor(CYAN);
   circle(75,75,19);
   setcolor(GREEN);
   circle(75,75,15);
   setcolor(GREEN);
   circle(75,75,14);
   setcolor(LIGHTMAGENTA);
   circle(75,75,10);
   setcolor(LIGHTMAGENTA);
   circle(75,75,9);
   setcolor(LIGHTBLUE);
   circle(75,75,5);
   setcolor(LIGHTBLUE);
   circle(75,75,4);
   setcolor(LIGHTMAGENTA);
   circle(75,75,1);


   setcolor(BLUE);
   circle(75,185,42);
   setcolor(BLUE);
   circle(75,185,41);
   setcolor(RED);
   circle(75,185,37);
   setcolor(RED);
   circle(75,185,36);
   setcolor(MAGENTA);
   circle(75,185,32);
   setcolor(MAGENTA);
   circle(75,185,31);
   setcolor(DARKGRAY);
   circle(75,185,27);
   setcolor(DARKGRAY);
   circle(75,185,26);
   setcolor(BROWN);
   circle(75,185,22);
   setcolor(BROWN);
   circle(75,185,21);
   setcolor(LIGHTRED);
   circle(75,185,17);
   setcolor(LIGHTRED);
   circle(75,185,16);
   setcolor(CYAN);
   circle(75,185,12);
   setcolor(CYAN);
   circle(75,185,11);
   setcolor(GREEN);
   circle(75,185,7);
   setcolor(GREEN);
   circle(75,185,6);
   setcolor(LIGHTMAGENTA);
   circle(75,185,2);
   setcolor(LIGHTMAGENTA);
   circle(75,185,1);


   setcolor(BLUE);
   circle(75,280,35);
   setcolor(BLUE);
   circle(75,280,34);
   setcolor(RED);
   circle(75,280,30);
   setcolor(RED);
   circle(75,280,29);
   setcolor(MAGENTA);
   circle(75,280,25);
   setcolor(MAGENTA);
   circle(75,280,24);
   setcolor(DARKGRAY);
   circle(75,280,20);
   setcolor(DARKGRAY);
   circle(75,280,19);
   setcolor(BROWN);
   circle(75,280,15);
   setcolor(BROWN);
   circle(75,280,14);
   setcolor(LIGHTRED);
   circle(75,280,10);
   setcolor(LIGHTRED);
   circle(75,280,9);
   setcolor(CYAN);
   circle(75,280,5);
   setcolor(CYAN);
   circle(75,280,4);
   setcolor(LIGHTMAGENTA);
   circle(75,280,1);

   setcolor(BLUE);
   circle(75,360,28);
   setcolor(BLUE);
   circle(75,360,27);
   setcolor(RED);
   circle(75,360,23);
   setcolor(RED);
   circle(75,360,22);
   setcolor(MAGENTA);
   circle(75,360,17);
   setcolor(MAGENTA);
   circle(75,360,16);
   setcolor(DARKGRAY);
   circle(75,360,12);
   setcolor(DARKGRAY);
   circle(75,360,11);
   setcolor(LIGHTRED);
   circle(75,360,7);
   setcolor(LIGHTRED);
   circle(75,360,6);
   setcolor(BROWN);
   circle(75,360,2);
   setcolor(BROWN);
   circle(75,360,1);

   setcolor(BLUE);
   circle(75,425,20);
   setcolor(BLUE);
   circle(75,425,19);
   setcolor(RED);
   circle(75,425,15);
   setcolor(RED);
   circle(75,425,14);
   setcolor(MAGENTA);
   circle(75,425,10);
   setcolor(MAGENTA);
   circle(75,425,9);
   setcolor(LIGHTRED);
   circle(75,425,5);
   setcolor(LIGHTRED);
   circle(75,425,4);
   setcolor(BROWN);
   circle(75,425,1);


   setcolor(MAGENTA);
   circle(560,75,50);
   setcolor(MAGENTA);
   circle(560,75,49);
   setcolor(RED);
   circle(560,75,45);
   setcolor(RED);
   circle(560,75,44);
   setcolor(BLUE);
   circle(560,75,40);
   setcolor(BLUE);
   circle(560,75,39);
   setcolor(DARKGRAY);
   circle(560,75,35);
   setcolor(DARKGRAY);
   circle(560,75,34);
   setcolor(BROWN);
   circle(560,75,30);
   setcolor(BROWN);
   circle(560,75,29);
   setcolor(LIGHTRED);
   circle(560,75,25);
   setcolor(LIGHTRED);
   circle(560,75,24);
   setcolor(CYAN);
   circle(560,75,20);
   setcolor(CYAN);
   circle(560,75,19);
   setcolor(GREEN);
   circle(560,75,15);
   setcolor(GREEN);
   circle(560,75,14);
   setcolor(LIGHTMAGENTA);
   circle(560,75,10);
   setcolor(LIGHTMAGENTA);
   circle(560,75,9);
   setcolor(LIGHTBLUE);
   circle(560,75,5);
   setcolor(LIGHTBLUE);
   circle(560,75,4);
   setcolor(LIGHTRED);
   circle(560,75,1);
   setcolor(LIGHTRED);


   setcolor(MAGENTA);
   circle(560,185,42);
   setcolor(MAGENTA);
   circle(560,185,41);
   setcolor(RED);
   circle(560,185,37);
   setcolor(RED);
   circle(560,185,36);
   setcolor(BLUE);
   circle(560,185,32);
   setcolor(BLUE);
   circle(560,185,31);
   setcolor(DARKGRAY);
   circle(560,185,27);
   setcolor(DARKGRAY);
   circle(560,185,26);
   setcolor(BROWN);
   circle(560,185,22);
   setcolor(BROWN);
   circle(560,185,21);
   setcolor(LIGHTRED);
   circle(560,185,17);
   setcolor(LIGHTRED);
   circle(560,185,16);
   setcolor(CYAN);
   circle(560,185,12);
   setcolor(CYAN);
   circle(560,185,11);
   setcolor(GREEN);
   circle(560,185,7);
   setcolor(GREEN);
   circle(560,185,6);
   setcolor(LIGHTMAGENTA);
   circle(560,185,2);
   setcolor(LIGHTMAGENTA);
   circle(560,185,1);


   setcolor(MAGENTA);
   circle(560,280,35);
   setcolor(MAGENTA);
   circle(560,280,34);
   setcolor(RED);
   circle(560,280,30);
   setcolor(RED);
   circle(560,280,29);
   setcolor(BLUE);
   circle(560,280,25);
   setcolor(BLUE);
   circle(560,280,24);
   setcolor(DARKGRAY);
   circle(560,280,20);
   setcolor(DARKGRAY);
   circle(560,280,19);
   setcolor(CYAN);
   circle(560,280,15);
   setcolor(CYAN);
   circle(560,280,14);
   setcolor(LIGHTRED);
   circle(560,280,10);
   setcolor(LIGHTRED);
   circle(560,280,9);
   setcolor(GREEN);
   circle(560,280,5);
   setcolor(GREEN);
   circle(560,280,4);
   setcolor(LIGHTMAGENTA);
   circle(560,280,1);

   setcolor(MAGENTA);
   circle(560,360,28);
   setcolor(MAGENTA);
   circle(560,360,27);
   setcolor(RED);
   circle(560,360,23);
   setcolor(RED);
   circle(560,360,22);
   setcolor(BLUE);
   circle(560,360,18);
   setcolor(BLUE);
   circle(560,360,17);
   setcolor(DARKGRAY);
   circle(560,360,13);
   setcolor(DARKGRAY);
   circle(560,360,12);
   setcolor(LIGHTRED);
   circle(560,360,8);
   setcolor(LIGHTRED);
   circle(560,360,7);
   setcolor(GREEN);
   circle(560,360,3);
   setcolor(GREEN);
   circle(560,360,2);


   setcolor(MAGENTA);
   circle(560,425,20);
   setcolor(MAGENTA);
   circle(560,425,19);
   setcolor(RED);
   circle(560,425,15);
   setcolor(RED);
   circle(560,425,14);
   setcolor(BLUE);
   circle(560,425,10);
   setcolor(RED);
   setcolor(BLUE);
   circle(560,425,9);
   setcolor(LIGHTRED);
   circle(560,425,5);
   setcolor(LIGHTRED);
   circle(560,425,4);
   setcolor(GREEN);

   circle(560,425,1);


   for(int i=1;i<=5;i++)
     {

      setcolor(i);
      settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,6);
      outtextxy(180,96,"WELCOME");
      delay(500);

      setcolor(i);
      settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,6);
      outtextxy(280,176,"TO");
      delay(500);

      setcolor(i);
      settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
      outtextxy(140,256,"TELEPHONE");
      delay(500);

      setcolor(i);
      settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
      outtextxy(150,320,"DIRECTORY");
      delay(500);

	if(i==5)
	 break;
     }


   getch();


   clrscr();
   setbkcolor(YELLOW);

   int p=0;
    while(p!=6)
     {

       printf("\n\n\n");
       printf("\n Menu: \n 1.Show Alphabetically \n 2.Search Details by Name \n 3.Search by Number \n 4.Emergency Option \n 5.Exit");
       printf("\n\n Press any  number for search from menu.......");
       printf("\n\n Menu= ");
       scanf("%d",& p);
	 if(p==1)
	 {
	    printf("\n\n You want to show alphabetically.....");
	    alphabate();
	 }

	 if(p==2)
	 {
	    printf("\n\n You want to search by details.....");
	    name();
	 }


	  if(p==3)
	 {
	    printf("\n\n You want to search by number.....");
	    number();
	 }

	  if(p==4)
	 {
	    printf("\n\n You want to Emergency details.....");
	    int m=0;

	    while(m!=4)
	    {
	      printf("\n\n Options: \n 1.Police Station  \n 2.Fire Brigade \n 3.Hospital \n 4.Exit");
	      printf("\n\n Option.....");
	      scanf("%d",& m);
	      if(m==1)
	      { printf("\n You want to know details of police station ");
		 police();
	      }

	      if(m==2)
	      { printf("\n You want to know details of fire brigade");
		fire();
	      }

	      if(m==3)
	      { printf("\n You want to know details of hospital ");
		hospital();
	      }
	    }

	    printf("\n\n You want to exit from emergency....");
	  }
	  if(p==5)
	  {

	     printf("\n\n You want to exit.......");


	     getch();
	     clrscr();

	    setcolor(YELLOW);
	    setfillstyle(SOLID_FILL,YELLOW);
	    bar(0,0,640,640);

   setcolor(BLUE);
   ellipse(310, 360, 0, 360, 80, 55);
   setcolor(BLUE);
   ellipse(310, 360, 0, 360, 79, 54);


   setcolor(RED);
   ellipse(310, 360, 0, 360, 75, 50);
   setcolor(RED);
   ellipse(310, 360, 0, 360, 74, 49);


   setcolor(MAGENTA);
   ellipse(310, 360, 0, 360, 70, 45);
   setcolor(MAGENTA);
   ellipse(310, 360, 0, 360, 69, 44);


   setcolor(DARKGRAY);
   ellipse(310, 360, 0, 360, 65, 40);
   setcolor(DARKGRAY);
   ellipse(310, 360, 0, 360, 64, 39);

   setcolor(BROWN);
   ellipse(310, 360, 0, 360, 60, 35);
   setcolor(BROWN);
   ellipse(310, 360, 0, 360, 59, 34);

   setcolor(LIGHTRED);
   ellipse(310, 360, 0, 360, 55, 30);
   setcolor(LIGHTRED);
   ellipse(310, 360, 0, 360, 54, 29);


   setcolor(CYAN);
   ellipse(310, 360, 0, 360, 50, 25);
   setcolor(CYAN);
   ellipse(310, 360, 0, 360, 49, 24);

   setcolor(GREEN);
   ellipse(310, 360, 0, 360, 45, 20);
   setcolor(GREEN);
   ellipse(310, 360, 0, 360, 44, 19);

   setcolor(LIGHTMAGENTA);
   ellipse(310, 360, 0, 360, 40, 15);
   setcolor(LIGHTMAGENTA);
   ellipse(310, 360, 0, 360, 39, 14);

   setcolor(LIGHTBLUE);
   ellipse(310, 360, 0, 360, 35, 10);
   setcolor(LIGHTBLUE);
   ellipse(310, 360, 0, 360, 34, 9);

   setcolor(MAGENTA);
   ellipse(310, 360, 0, 360, 30, 5);
   setcolor(MAGENTA);
   ellipse(310, 360, 0, 360, 29, 4);

   setcolor(LIGHTGRAY);
   ellipse(310, 360, 0, 360, 25, 2);
   setcolor(LIGHTGRAY);
   ellipse(310, 360, 0, 360, 24, 1);

   setcolor(LIGHTGRAY);
   ellipse(310, 360, 0, 360, 27, 3);
   setcolor(LIGHTGRAY);
   ellipse(310, 360, 0, 360, 24, 1);


   line(280,360,340,360);



   setcolor(BLUE);
   circle(75,75,50);
   setcolor(BLUE);
   circle(75,75,49);
   setcolor(RED);
   circle(75,75,45);
   setcolor(RED);
   circle(75,75,44);
   setcolor(MAGENTA);
   circle(75,75,40);
   setcolor(MAGENTA);
   circle(75,75,39);
   setcolor(DARKGRAY);
   circle(75,75,35);
   setcolor(DARKGRAY);
   circle(75,75,34);
   setcolor(BROWN);
   circle(75,75,30);
   setcolor(BROWN);
   circle(75,75,29);
   setcolor(LIGHTRED);
   circle(75,75,25);
   setcolor(LIGHTRED);
   circle(75,75,24);
   setcolor(CYAN);
   circle(75,75,20);
   setcolor(CYAN);
   circle(75,75,19);
   setcolor(GREEN);
   circle(75,75,15);
   setcolor(GREEN);
   circle(75,75,14);
   setcolor(LIGHTMAGENTA);
   circle(75,75,10);
   setcolor(LIGHTMAGENTA);
   circle(75,75,9);
   setcolor(LIGHTBLUE);
   circle(75,75,5);
   setcolor(LIGHTBLUE);
   circle(75,75,4);
   setcolor(LIGHTMAGENTA);
   circle(75,75,1);


   setcolor(BLUE);
   circle(75,185,42);
   setcolor(BLUE);
   circle(75,185,41);
   setcolor(RED);
   circle(75,185,37);
   setcolor(RED);
   circle(75,185,36);
   setcolor(MAGENTA);
   circle(75,185,32);
   setcolor(MAGENTA);
   circle(75,185,31);
   setcolor(DARKGRAY);
   circle(75,185,27);
   setcolor(DARKGRAY);
   circle(75,185,26);
   setcolor(BROWN);
   circle(75,185,22);
   setcolor(BROWN);
   circle(75,185,21);
   setcolor(LIGHTRED);
   circle(75,185,17);
   setcolor(LIGHTRED);
   circle(75,185,16);
   setcolor(CYAN);
   circle(75,185,12);
   setcolor(CYAN);
   circle(75,185,11);
   setcolor(GREEN);
   circle(75,185,7);
   setcolor(GREEN);
   circle(75,185,6);
   setcolor(LIGHTMAGENTA);
   circle(75,185,2);
   setcolor(LIGHTMAGENTA);
   circle(75,185,1);


   setcolor(BLUE);
   circle(75,280,35);
   setcolor(BLUE);
   circle(75,280,34);
   setcolor(RED);
   circle(75,280,30);
   setcolor(RED);
   circle(75,280,29);
   setcolor(MAGENTA);
   circle(75,280,25);
   setcolor(MAGENTA);
   circle(75,280,24);
   setcolor(DARKGRAY);
   circle(75,280,20);
   setcolor(DARKGRAY);
   circle(75,280,19);
   setcolor(BROWN);
   circle(75,280,15);
   setcolor(BROWN);
   circle(75,280,14);
   setcolor(LIGHTRED);
   circle(75,280,10);
   setcolor(LIGHTRED);
   circle(75,280,9);
   setcolor(CYAN);
   circle(75,280,5);
   setcolor(CYAN);
   circle(75,280,4);
   setcolor(LIGHTMAGENTA);
   circle(75,280,1);

   setcolor(BLUE);
   circle(75,360,28);
   setcolor(BLUE);
   circle(75,360,27);
   setcolor(RED);
   circle(75,360,23);
   setcolor(RED);
   circle(75,360,22);
   setcolor(MAGENTA);
   circle(75,360,17);
   setcolor(MAGENTA);
   circle(75,360,16);
   setcolor(DARKGRAY);
   circle(75,360,12);
   setcolor(DARKGRAY);
   circle(75,360,11);
   setcolor(LIGHTRED);
   circle(75,360,7);
   setcolor(LIGHTRED);
   circle(75,360,6);
   setcolor(BROWN);
   circle(75,360,2);
   setcolor(BROWN);
   circle(75,360,1);

   setcolor(BLUE);
   circle(75,425,20);
   setcolor(BLUE);
   circle(75,425,19);
   setcolor(RED);
   circle(75,425,15);
   setcolor(RED);
   circle(75,425,14);
   setcolor(MAGENTA);
   circle(75,425,10);
   setcolor(MAGENTA);
   circle(75,425,9);
   setcolor(LIGHTRED);
   circle(75,425,5);
   setcolor(LIGHTRED);
   circle(75,425,4);
   setcolor(BROWN);
   circle(75,425,1);


   setcolor(MAGENTA);
   circle(560,75,50);
   setcolor(MAGENTA);
   circle(560,75,49);
   setcolor(RED);
   circle(560,75,45);
   setcolor(RED);
   circle(560,75,44);
   setcolor(BLUE);
   circle(560,75,40);
   setcolor(BLUE);
   circle(560,75,39);
   setcolor(DARKGRAY);
   circle(560,75,35);
   setcolor(DARKGRAY);
   circle(560,75,34);
   setcolor(BROWN);
   circle(560,75,30);
   setcolor(BROWN);
   circle(560,75,29);
   setcolor(LIGHTRED);
   circle(560,75,25);
   setcolor(LIGHTRED);
   circle(560,75,24);
   setcolor(CYAN);
   circle(560,75,20);
   setcolor(CYAN);
   circle(560,75,19);
   setcolor(GREEN);
   circle(560,75,15);
   setcolor(GREEN);
   circle(560,75,14);
   setcolor(LIGHTMAGENTA);
   circle(560,75,10);
   setcolor(LIGHTMAGENTA);
   circle(560,75,9);
   setcolor(LIGHTBLUE);
   circle(560,75,5);
   setcolor(LIGHTBLUE);
   circle(560,75,4);
   setcolor(LIGHTRED);
   circle(560,75,1);
   setcolor(LIGHTRED);


   setcolor(MAGENTA);
   circle(560,185,42);
   setcolor(MAGENTA);
   circle(560,185,41);
   setcolor(RED);
   circle(560,185,37);
   setcolor(RED);
   circle(560,185,36);
   setcolor(BLUE);
   circle(560,185,32);
   setcolor(BLUE);
   circle(560,185,31);
   setcolor(DARKGRAY);
   circle(560,185,27);
   setcolor(DARKGRAY);
   circle(560,185,26);
   setcolor(BROWN);
   circle(560,185,22);
   setcolor(BROWN);
   circle(560,185,21);
   setcolor(LIGHTRED);
   circle(560,185,17);
   setcolor(LIGHTRED);
   circle(560,185,16);
   setcolor(CYAN);
   circle(560,185,12);
   setcolor(CYAN);
   circle(560,185,11);
   setcolor(GREEN);
   circle(560,185,7);
   setcolor(GREEN);
   circle(560,185,6);
   setcolor(LIGHTMAGENTA);
   circle(560,185,2);
   setcolor(LIGHTMAGENTA);
   circle(560,185,1);


   setcolor(MAGENTA);
   circle(560,280,35);
   setcolor(MAGENTA);
   circle(560,280,34);
   setcolor(RED);
   circle(560,280,30);
   setcolor(RED);
   circle(560,280,29);
   setcolor(BLUE);
   circle(560,280,25);
   setcolor(BLUE);
   circle(560,280,24);
   setcolor(DARKGRAY);
   circle(560,280,20);
   setcolor(DARKGRAY);
   circle(560,280,19);
   setcolor(CYAN);
   circle(560,280,15);
   setcolor(CYAN);
   circle(560,280,14);
   setcolor(LIGHTRED);
   circle(560,280,10);
   setcolor(LIGHTRED);
   circle(560,280,9);
   setcolor(GREEN);
   circle(560,280,5);
   setcolor(GREEN);
   circle(560,280,4);
   setcolor(LIGHTMAGENTA);
   circle(560,280,1);

   setcolor(MAGENTA);
   circle(560,360,28);
   setcolor(MAGENTA);
   circle(560,360,27);
   setcolor(RED);
   circle(560,360,23);
   setcolor(RED);
   circle(560,360,22);
   setcolor(BLUE);
   circle(560,360,18);
   setcolor(BLUE);
   circle(560,360,17);
   setcolor(DARKGRAY);
   circle(560,360,13);
   setcolor(DARKGRAY);
   circle(560,360,12);
   setcolor(LIGHTRED);
   circle(560,360,8);
   setcolor(LIGHTRED);
   circle(560,360,7);
   setcolor(GREEN);
   circle(560,360,3);
   setcolor(GREEN);
   circle(560,360,2);


   setcolor(MAGENTA);
   circle(560,425,20);
   setcolor(MAGENTA);
   circle(560,425,19);
   setcolor(RED);
   circle(560,425,15);
   setcolor(RED);
   circle(560,425,14);
   setcolor(BLUE);
   circle(560,425,10);
   setcolor(RED);
   setcolor(BLUE);
   circle(560,425,9);
   setcolor(LIGHTRED);
   circle(560,425,5);
   setcolor(LIGHTRED);
   circle(560,425,4);
   setcolor(GREEN);
   circle(560,425,1);


 for(int i=1;i<=5;i++)
     {
      setcolor(i);
      settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,7);
      outtextxy(200,96,"THANK");
      delay(600);

      setcolor(i);
      settextstyle(TRIPLEX_SCR_FONT,HORIZ_DIR,7);
      outtextxy(244,176,"YOU...");

      delay(600);

	if(i==5)
	 break;
     }
     break;

  }
  }
  getch();
  closegraph();
 }

void alphabate()
{
   struct array
   {
     char name1[10];
     char name2[10];
     char number[10];
     char email[23];
     char add[20];
   }directory[52];


   FILE *fp;
   int i=0;
   fp=fopen("name.txt","r");
   while(!feof(fp))
   {
      fscanf(fp,"%s %s %s %s %s",directory[i].name1, directory[i].name2, directory[i].number, directory[i].email, directory[i].add);
      i++;
   }
   fclose(fp);



    struct array1
   {

     char name3[10];
     char name4[10];
     char number1[10];
     char email1[23];
     char add1[20];
   }directory1[22];


   FILE *fp1;
   int j=0;
   fp1=fopen("name1.txt","r");
   while(!feof(fp1))
   {
      fscanf(fp1,"%s %s %s %s %s",directory1[j].name3, directory1[j].name4, directory1[j].number1, directory1[j].email1, directory1[j].add1);
      j++;
   }
   fclose(fp1);

   char ch;
   printf("\n Press any alphabate....");
   scanf("%s",& ch);

   if(ch=='A')
   {
      for(int a=0;a<=4;a++)
      {
	printf("\n %s",directory[a].name1);
	printf(" %s ",directory[a].name2);
      }
      char ch1[8];
      int x,z,y;
      printf("\n\n Now press any name for show details ....");
      scanf("%s",& ch1);

      for(y=0;y<=6;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }

    }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");

  }

    if(ch=='B')
    {
      for(int b=5;b<=8;b++)
      {
	printf("\n %s",directory[b].name1);
	printf(" %s ",directory[b].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=5;y<=9;y++)
      {
	x=strcmp(directory[y].name1,ch1);
	z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
  }

    if(ch=='C')
    {
      for(int c=9;c<=10;c++)
      {
	printf("\n %s",directory[c].name1);
	printf(" %s ",directory[c].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=9;y<=10;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }

   }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
  }

       if(ch=='D')
   {
      for(int d=11;d<=14;d++)
      {
	printf("\n %s",directory[d].name1);
	printf(" %s ",directory[d].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details ....");
      scanf("%s",& ch1);

      for(y=11;y<=14;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
    }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
  }

       if(ch=='E')
      {
       for(int e=15;e<=17;e++)
      {
	printf("\n %s",directory[e].name1);
	printf(" %s ",directory[e].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=15;y<=17;y++)
      {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
	printf("\n\n");
	printf("\n Name=%s",directory[y].name1);
	printf(" %s ",directory[y].name2);
        printf("\n Number=%s",directory[y].number);
        printf("\n Email=%s",directory[y].email);
        printf("\n Address=%s",directory[y].add);

       break;
     }
    }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
  }

     if(ch=='F')
     {
      for(int f=18;f<=19;f++)
      {
	printf("\n %s",directory[f].name1);
	printf(" %s ",directory[f].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details ....");
      scanf("%s",& ch1);

      for(y=18;y<=19;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
       {
        printf("\n\n");
        printf("\n Name=%s",directory[y].name1);
        printf(" %s ",directory[y].name2);
        printf("\n Number=%s",directory[y].number);
	printf("\n Email=%s",directory[y].email);
        printf("\n Address=%s",directory[y].add);

       break;
      }

     }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
  }


     if(ch=='G')
     {
      for(int g=20;g<=21;g++)
      {
	printf("\n %s",directory[g].name1);
	printf(" %s ",directory[g].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details ....");
      scanf("%s",& ch1);

      for(y=20;y<=21;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
        printf("\n\n");
        printf("\n Name=%s",directory[y].name1);
	printf(" %s ",directory[y].name2);
        printf("\n Number=%s",directory[y].number);
        printf("\n Email=%s",directory[y].email);
        printf("\n Address=%s",directory[y].add);

        break;
      }
 
    }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
  }

     if(ch=='H')
     {
      for(int h=22;h<=25;h++)
      {
	printf("\n %s",directory[h].name1);
	printf(" %s ",directory[h].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details......");
      scanf("%s",& ch1);

      for(y=22;y<=25;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
        printf("\n\n");
        printf("\n Name=%s",directory[y].name1);
        printf(" %s ",directory[y].name2);
        printf("\n Number=%s",directory[y].number);
        printf("\n Email=%s",directory[y].email);
        printf("\n Address=%s",directory[y].add);

	break;
      }

    }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
  }


     if(ch=='I')
     {
      for(int a=26;a<=27;a++)
      {
	printf("\n %s",directory[a].name1);
	printf(" %s ",directory[a].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details ....");
      scanf("%s",& ch1);

      for(y=26;y<=27;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }


     if(ch=='J')
     {
      for(int j=28;j<=31;j++)
      {
	printf("\n %s",directory[j].name1);
	printf(" %s ",directory[j].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=28;y<=31;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }


     if(ch=='K')
     {
      for(int k=32;k<=34;k++)
      {
	printf("\n %s",directory[k].name1);
	printf(" %s ",directory[k].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=32;y<=34;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='L')
     {
      for(int l=35;l<=37;l++)
      {
	printf("\n %s",directory[l].name1);
	printf(" %s ",directory[l].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=35;y<=37;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }


	if(ch=='M')
     {
      for(int m=38;m<=40;m++)
      {
	printf("\n %s",directory[m].name1);
	printf(" %s ",directory[m].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=38;y<=40;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='N')
     {
      for(int n=41;n<=44;n++)
      {
	printf("\n %s",directory[n].name1);
	printf(" %s ",directory[n].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=41;y<=44;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='O')
     {
      for(int o=45;o<=46;o++)
      {
	printf("\n %s",directory[o].name1);
	printf(" %s ",directory[o].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=45;y<=46;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }


	if(ch=='P')
     {
      for(int p=47;p<=48;p++)
      {
	printf("\n %s",directory[p].name1);
	printf(" %s ",directory[p].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=47;y<=48;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='Q')
     {
      for(int q=50;q<=50;q++)
      {
	printf("\n %s",directory[q].name1);
	printf(" %s ",directory[q].name2);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=49;y<=50;y++)
     {
       x=strcmp(directory[y].name1,ch1);
       z=strcmp(directory[y].name2,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='R')
     {
      for(int r=0;r<=2;r++)
      {
	printf("\n %s",directory1[r].name3);
	printf(" %s ",directory1[r].name4);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=0;y<=2;y++)
     {
       x=strcmp(directory1[y].name3,ch1);
       z=strcmp(directory1[y].name4,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory1[y].name3);
       printf(" %s ",directory1[y].name4);
       printf("\n Number=%s",directory1[y].number1);
       printf("\n Email=%s",directory1[y].email1);
       printf("\n Address=%s",directory1[y].add1);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='S')
     {
      for(int s=3;s<=6;s++)
      {
	printf("\n %s",directory1[s].name3);
	printf(" %s ",directory1[s].name4);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=3;y<=6;y++)
     {
       x=strcmp(directory1[y].name3,ch1);
       z=strcmp(directory1[y].name4,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory1[y].name3);
       printf(" %s ",directory1[y].name4);
       printf("\n Number=%s",directory1[y].number1);
       printf("\n Email=%s",directory1[y].email1);
       printf("\n Address=%s",directory1[y].add1);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='T')
     {
      for(int t=7;t<=10;t++)
      {
	printf("\n %s",directory1[t].name3);
	printf(" %s ",directory1[t].name4);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=7;y<=10;y++)
     {
       x=strcmp(directory1[y].name3,ch1);
       z=strcmp(directory1[y].name4,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory1[y].name3);
       printf(" %s ",directory1[y].name4);
       printf("\n Number=%s",directory1[y].number1);
       printf("\n Email=%s",directory1[y].email1);
       printf("\n Address=%s",directory1[y].add1);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='U')
     {
      for(int u=11;u<=12;u++)
      {
	printf("\n %s",directory1[u].name3);
	printf(" %s ",directory1[u].name4);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=11;y<=12;y++)
     {
       x=strcmp(directory1[y].name3,ch1);
       z=strcmp(directory1[y].name4,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory1[y].name3);
       printf(" %s ",directory1[y].name4);
       printf("\n Number=%s",directory1[y].number1);
       printf("\n Email=%s",directory1[y].email1);
       printf("\n Address=%s",directory1[y].add1);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='V')
     {
      for(int v=13;v<=14;v++)
      {
	printf("\n %s",directory1[v].name3);
	printf(" %s ",directory1[v].name4);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=13;y<=14;y++)
     {
       x=strcmp(directory1[y].name3,ch1);
       z=strcmp(directory1[y].name4,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory1[y].name3);
       printf(" %s ",directory1[y].name4);
       printf("\n Number=%s",directory1[y].number1);
       printf("\n Email=%s",directory1[y].email1);
       printf("\n Address=%s",directory1[y].add1);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='W')
     {
      for(int w=15;w<=16;w++)
      {
	printf("\n %s",directory1[w].name3);
	printf(" %s ",directory1[w].name4);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=15;y<=16;y++)
     {
       x=strcmp(directory1[y].name3,ch1);
       z=strcmp(directory1[y].name4,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory1[y].name3);
       printf(" %s ",directory1[y].name4);
       printf("\n Number=%s",directory1[y].number1);
       printf("\n Email=%s",directory1[y].email1);
       printf("\n Address=%s",directory1[y].add1);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='X')
     {
      for(int m=17;m<=17;m++)
      {
	printf("\n %s",directory1[m].name3);
	printf(" %s ",directory1[m].name4);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=16;y<=17;y++)
     {
       x=strcmp(directory1[y].name3,ch1);
       z=strcmp(directory1[y].name4,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory1[y].name3);
       printf(" %s ",directory1[y].name4);
       printf("\n Number=%s",directory1[y].number1);
       printf("\n Email=%s",directory1[y].email1);
       printf("\n Address=%s",directory1[y].add1);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='Y')
     {
      for(int k=18;k<=18;k++)
      {
	printf("\n %s",directory1[k].name3);
	printf(" %s ",directory1[k].name4);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=18;y<=19;y++)
     {
       x=strcmp(directory1[y].name3,ch1);
       z=strcmp(directory1[y].name4,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory1[y].name3);
       printf(" %s ",directory1[y].name4);
       printf("\n Number=%s",directory1[y].number1);
       printf("\n Email=%s",directory1[y].email1);
       printf("\n Address=%s",directory1[y].add1);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }

	if(ch=='Z')
     {
      for(int m=19;m<=19;m++)
      {
	printf("\n %s",directory1[m].name3);
	printf(" %s ",directory1[m].name4);
      }
      char ch1[8];
      int x,y,z;
      printf("\n\n Now press any name for show details....");
      scanf("%s",& ch1);

      for(y=18;y<=20;y++)
     {
       x=strcmp(directory1[y].name3,ch1);
       z=strcmp(directory1[y].name4,ch1);

       if(x==0 || z==0)
      {
       printf("\n\n");
       printf("\n Name=%s",directory1[y].name3);
       printf(" %s ",directory1[y].name4);
       printf("\n Number=%s",directory1[y].number1);
       printf("\n Email=%s",directory1[y].email1);
       printf("\n Address=%s",directory1[y].add1);
       break;
      }
      }

      if(x!=0 && z!=0)
      printf("\n\n Name is not exist....");
   }
}


void name()
 {
   struct array
   {
     char name1[10];
     char name2[10];
     char number[10];
     char email[23];
     char add[20];
   }directory[52];


   FILE *fp;
   int i=0;
   fp=fopen("name.txt","r");
   while(!feof(fp))
   {
      fscanf(fp," %s %s %s %s %s",directory[i].name1, directory[i].name2, directory[i].number, directory[i].email, directory[i].add);
      i++;
   }
   fclose(fp);



    struct array1
   {
     char name3[10];
     char name4[10];
     char number1[10];
     char email1[23];
     char add1[20];
   }directory1[22];


   FILE *fp1;
   int j=0;
   fp1=fopen("name1.txt","r");
   while(!feof(fp1))
   {
      fscanf(fp1,"%s %s %s %s %s",directory1[j].name3, directory1[j].name4, directory1[j].number1, directory1[j].email1, directory1[j].add1);
      j++;
   }
   fclose(fp1);

   int x,z,a,b;
   int y,k;
   char ch[10];
   printf("\n\n Press any name.........");
  scanf("%s",&ch);

 for(y=0;y<=50;y++)
   {
      x=strcmp(directory[y].name1,ch);
      z=strcmp(directory[y].name2,ch);


     if(x==0 || z==0)
     {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
     }
    }

     for(k=0;k<=20;k++)
      {

      a=strcmp(directory1[k].name3,ch);
      b=strcmp(directory1[k].name4,ch);



    if(a==0 || b==0)
     {
       printf("\n\n");
       printf("\n Name=%s",directory1[k].name3);
       printf(" %s ",directory1[k].name4);
       printf("\n Number=%s",directory1[k].number1);
       printf("\n Email=%s",directory1[k].email1);
       printf("\n Address=%s",directory1[k].add1);
       break;
     }
  }

     if(x!=0 && z!=0 && a!=0 && b!=0)
      printf("\n\n Name is not exist.....");

 }


void number()
 {
       struct array
   {
     char name1[10];
     char name2[10];
     char number[10];
     char email[23];
     char add[20];
   }directory[52];


   FILE *fp;
   int i=0;
   fp=fopen("name.txt","r");
   while(!feof(fp))
   {
      fscanf(fp,"%s %s %s %s %s",directory[i].name1, directory[i].name2, directory[i].number, directory[i].email, directory[i].add);
      i++;
   }
   fclose(fp);



    struct array1
   {
     char name3[10];
     char name4[10];
     char number1[10];
     char email1[23];
     char add1[20];
   }directory1[22];


   FILE *fp1;
   int j=0;
   fp1=fopen("name1.txt","r");
   while(!feof(fp1))
   {
      fscanf(fp1,"%s %s %s %s %s",directory1[j].name3, directory1[j].name4, directory1[j].number1, directory1[j].email1, directory1[j].add1);
      j++;
   }
   fclose(fp1);

   int x,z,a,b;
   int y;
   char ch[8];
   printf("\n\n Press any number.........");
  scanf("%s",&ch);
   for(y=0;y<=75;y++)
   {
      x=strcmp(directory[y].number,ch);
      a=strcmp(directory1[y].number1,ch);

     if(x==0)
     {
       printf("\n\n");
       printf("\n Name=%s",directory[y].name1);
       printf(" %s ",directory[y].name2);
       printf("\n Number=%s",directory[y].number);
       printf("\n Email=%s",directory[y].email);
       printf("\n Address=%s",directory[y].add);
       break;
     }

    if(a==0)
     {
       printf("\n\n");
       printf("\n Name=%s",directory1[y].name3);
       printf(" %s ",directory1[y].name4);
       printf("\n Number=%s",directory1[y].number1);
       printf("\n Email=%s",directory1[y].email1);
       printf("\n Address=%s",directory1[y].add1);
       break;
     }
  }

     if(x!=0 && a!=0)
      printf("\n\n Number is not exist.....");
 }

  void police()
 {
   struct pol
   {
     char name1[33];
   }station[10];

   FILE *fq;
   int i=0;
   fq=fopen("police.txt","r");
   while(!feof(fq))
   {
      fscanf(fq,"%s", station[i].name1);
      i++;
   }
   fclose(fq);
    int j;
    printf("\n");
    for(j=0;j<=9;j++)
    {
      printf("\n");
      printf(" %s " ,station[j].name1);
    }
   }



     void fire()
 {
   struct fir
   {
     char name1[32];
   } brigade[10];

   FILE *fq;
   int i=0;
   fq=fopen("fire.txt","r");
   while(!feof(fq))
   {
      fscanf(fq,"%s", brigade[i].name1);
      i++;
   }
   fclose(fq);
    int j;
    printf("\n");
    for(j=0;j<=7;j++)
    {
      printf("\n");
      printf(" %s ",brigade[j].name1);
    }
   }

     void hospital()
 {
   struct hos
   {
     char name1[32];
   }pital[12];

   FILE *fq;
   int i=0;
   fq=fopen("hospital.txt","r");
   while(!feof(fq))
   {
      fscanf(fq,"%s", pital[i].name1);
      i++;
   }
   fclose(fq);
    int j;
    printf("\n");
    for(j=0;j<=10;j++)
    {
      printf("\n");
      printf(" %s ",pital[j].name1);
    }
   }
















