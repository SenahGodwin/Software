/* 
 * File:   STAFF.h
 * Author: R156450K
 *
 * Created on November 29, 2016, 9:35 PM
 */

#ifndef STAFF_H
#define	STAFF_H

class staff
{
  protected:
      int code;
      char name[20];
  public:
      void getstaff(void);
      
      void dispstaff(void);
     };

class casual 
{
     char contract;
   public:
       void create(void);
    
    void display(void);
 
};
#endif	/* STAFF_H */

