/* 
 * File:   main.cpp
 * Author: R156450K
 *
 * Created on October 19, 2016, 11:40 AM
 */


#include <cstdlib>
#include <iostream>
#include <conio.h>
#include "STAFF.h"
#include "ACADEMICS.h"
using namespace std;




int main()
{

Department o1t[10];
NonAcademics  o1c[10];
Administrator  o1o[10];
int choice,i;
char test;
while(1)
{
int count;
start:
 
   cout<<"\n=====STAFF INFORMATION SYSTEM=====\n\n\n";
   cout<<"Choose Category of Information\n";
   cout<<"1)   Academic\n";
   cout<<"2)   NonAcademics\n";
   cout<<"3)   Administrator\n";
   cout<<"4)   Exit\n";
   cout<<"Enter your choice:-";
   cin>>choice;
   switch(choice)
   {
      case 1 :  while(1)
        {
       
        cout<<"\n=====Academics INFORMATION=====\n\n";
        cout<<"\nChoose your choice\n";
        cout<<"1) Create\n";
        cout<<"2) Display\n";
        cout<<"3) Jump to Main Menu\n";
        cout<<"Enter your choice:-";
        cin>>choice;
        switch(choice)
        {
         case 1 :  for(count=0,i=0;i<10;i++)
               {
                 cout<<endl;
                 o1t[i].create();
                 count++;
                 cout<<endl;
                 cout<<"\n\nAre you Interested in entering data\n";
                 cout<<"Enter y or n:-";
                 cin>>test;
                 if(test=='y' || test=='Y')
                continue;
                 else goto out1;
                 }
                 out1:
                 break;
         case 2 : for(i=0;i<count;i++)
               {
                cout<<endl;
                 o1t[i].display();
                 cout<<endl;
               }
               getch();
               break;
         case 3 : goto start;
         default: cout<<"\nEnter choice is invalid\ntry again\n\n";
         }
         }
      case 2 :   while(1)
         {
        
        cout<<"\n=====Administrator INFORMATION=====\n\n";
        cout<<"\nChoose your choice\n";
        cout<<"1) Create\n";
        cout<<"2) Display\n";
        cout<<"3) Jump to Main Menu\n";
        cout<<"Enter your choice:-";
        cin>>choice;
        switch(choice)
        {
         case 1 : for(count=0,i=0;i<10;i++)
               {
                cout<<endl;
               
                 count++;
                 cout<<endl;
                 cout<<"\n\nAre you Interested in entering data\n";
                 cout<<"Enter y or n:-";
                 cin>>test;
                 if(test=='y' || test=='Y')
                continue;
                 else goto out2;
                 }
                 out2:
                 break;
         case 2 : for(i=0;i<count;i++)
               {
                cout<<endl;
                
                 cout<<endl;
               }
               getch();
               break;
         case 3 : goto start;
         default: cout<<"\nInvalid choice\ntry again\n\n";
         }
         }
      case 3 :  while(1)
        {
       
        cout<<"\n=====Administrator=====\n\n";
        cout<<"\nChoose your choice\n";
        cout<<"1) Create\n";
        cout<<"2) Display\n";
        cout<<"3) Jump to Main Menu\n";
        cout<<"Enter your choice:-";
        cin>>choice;
        switch(choice)
        {
         case 1 : for(count=0,i=0;i<10;i++)
               {
                 cout<<endl;
                 o1c[i].create();
                 count++;
                 cout<<endl;
                 cout<<"\n\nAre you Interested in entering data\n";
                 cout<<"Enter y or n:-";
                 cin>>test;
                 if(test=='y' || test=='Y')
                continue;
                 else goto out3;
                 }
                 out3:
                 break;
         case 2 : for(i=0;i<count;i++)
               {
                 cout<<endl;
                 o1c[i].display();
                 cout<<endl;
               }
               getch();
               break;
         case 3 : goto start;
         default: cout<<"\nInvalid choice\ntry again\n\n";
         }
         }
      case 4 : return 0;
    }
 }
 return 0;
 }