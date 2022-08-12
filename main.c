#include <stdio.h>
#include <stdlib.h>
#include "database.h"
#define size 3
int main()
{int ID;
int from_id;
int to_id;
double cash_transfer;
   start: printf("**********welcome to Bank Database ************\n\n\n");
    printf("**********please type the number of your choese ************\n");
    printf(" 1- create new account \n 2- edit an account \n 3- delete an account \n 4- print account informations \n 5- cash transfer between accounts \n 6-print all data  ");
      // fflush(stdin);  // make the memory ready to insert characters
    int chose;
scanf("%i",&chose);
    switch (chose)
    { case 1:
        {
       new_client();
            goto start;
       }
        break;
        case 2:
      {
           printf("**********please type client id  ************\n");

           scanf("%i",&ID);
       edit(ID );
            goto start;
    }
            break;

            case 3:
{
           printf("**********please type client id  ************\n");

           scanf("%i",&ID);
       del_account(ID );
            goto start;
    }

                break;

                case 4:
{
           printf("**********please type client id  ************\n");

           scanf("%i",&ID);
       show_informatin(ID );
            goto start;
    }
                    break;

                    case 5:
                        {
 printf("**********please write the sender id  ************\n\n\n");
 scanf("%i",&from_id);
 printf("**********please write the reciver id  ************\n\n\n");
 scanf("%i",&to_id);
 printf("**********please write amount of money  ************\n\n\n");
  scanf("%lf",&cash_transfer);
  goto start;
    }
                        break;

                         case 6:
                            {view();
                            goto start;}
                        break;

                    default:
                            printf("**********please choose a right number  ************\n\n\n");
                        goto start;
    }



    return 0;
}
