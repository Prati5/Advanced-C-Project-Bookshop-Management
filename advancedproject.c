#include <stdio.h>
#include <conio.h>
char date [30];
char uname[20];
char bname[39];
char mno[15];
long int cost;
int n,i;
void write()
{
    FILE *fp;
    char dat [30];
    char unam[20];
    char bnam[39];
    char mn[15];
    long int cos;
    printf("\n Enter date");
    scanf("%s",&dat);
    printf("\nCustomer name);
    scanf("%s",&unam);
    printf("\n Enter mobile no ");
    scanf("=%s \n" ,&mn);
    printf("\n book  name");
    scanf("%s \n" ,&bnam);
    printf("\n Book cost");
    scanf("%ld",&cos);
    fp=fopen("Record .txt","a");
    fprintf(fp,"\n%s %s %s %s %s %ld\n" ,dat,unam,bnam,cos);
    printf("\n Record written successfully");
    fclose(fp);
}
 void display (char [])
 {
     FILE *fp;
     int res;
     fp=fopen("record txt","r");
     while(fscanf(fp,"%s,%s,%s,%s%ld\n",date,uname,mno,bname,&cost)!=EOF)
     {
         res=strcmp(date,da);
         if(res==0)
         {

             printf("\nCustomer name=%s \n" ,uname);
             printf("\nmobile no =%s \n" ,mno);
             printf("\n book  name=%s \n" ,bname);
            printf("\n Book cost=%ld \n" ,cost);
         }
     }
     fclose(fp);
 }
 void main()
 {
   char ch;
   char lm[20];
   textcolor(10);
   textbackground(4);
   do
   {
    printf("\t****************WELCOME*********************") ;
    printf("\n Press<1> to create entry for book") ;
    printf("\n Press<2> to display on specific date") ;
    printf("\n Press<0> to exit") ;
    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch)
    {

        case 1: write0;
               braek;
        case 2: printf("\n Enter date") ;
               scanf("%s",&lm);
               display(lm);
               break;
        case 0: exit(o) ;
        default: printf("\n Invalid selection");
    }
     getch() ;
   }
    while(ch!=0) ;
 }













