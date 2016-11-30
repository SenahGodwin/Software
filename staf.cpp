#include <iostream>
#include "STAFF.h"

using namespace std;

   void casual::create(void)
    {
      //getAdministrator();
      cout<<"Enter Contract details :-";
      cin>>contract;
    }
    void casual::display(void)
    {
      //dispAdministrator();
      cout<<"\nContract detail:-"<<contract;
    }
  void staff::getstaff(void)
      {
    cout<<"\n\nEnter Staff code :-";
    cin>>code;
    cout<<"Enter Staff name :-";
    cin>>name;
      }
      void staff::dispstaff(void)
      {
       cout<<"\nStaff name       :-"<<name;
       cout<<"\nStaff code       :-"<<code;
      }