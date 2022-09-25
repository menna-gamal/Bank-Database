// function implementations
#include <stdio.h>
#include <stdlib.h>
#include "database.h"
#include <string.h>
#define size 3
 int client_num;
 struct clinet c[size];

void new_client()
{if (client_num>=size)
           printf("you have reached the maximum number of clients \n") ;
           else
 {  printf(" client name \n");
    fflush(stdin);
    gets(c[client_num].name);
   id: printf(" client id \n");
     scanf("%i",&c[client_num].id);
    if(c[client_num].id<0)
        {printf("id should be an integer greater than zero \n");
    goto id;
        }
        printf(" client cash \n");
            scanf("%lf",&c[client_num].cash);

 type:  printf(" account type\n 1-debit \n 2-credit \n");
 int t;
 scanf("%i",&t);
 switch(t)
 {case 1:
     strcpy(c[client_num].type,"debit");
     break;
   // fflush(stdin);
    //gets(c[client_num].type);
    case 2:
     strcpy(c[client_num].type,"credit");
     break;
default:{printf(" pleas select a right number  \n");
    goto type;
}
}
    printf("\n\n\n Account informations saved successfully\n");
   printf("name: %s\n ",c[client_num].name);
   printf("id: %i\n",c[client_num].id);
   printf(" cash: %f\n ",c[client_num].cash);
    printf("type: %s\n",c[client_num].type);

    client_num++;}

}

void  edit(int ide )
{
int E,i;
for(i=0;i<=client_num-1;i++)
{if (ide==c[i].id)
 {printf("what do you want to edit \n 1-name \n 2-id \n 3-cash \n 4-type \n\n\n\n ");
     scanf("%i",&E);
     switch(E)
     {case 1:{
          printf(" client new name \n");
    fflush(stdin);
    gets(c[i].name);
    printf("\n\n\n Account informations saved successfully\n");
     }
     break;
      break;
    case 2:{
         id: printf(" client new id \n");
     scanf("%i",&c[i].id);
    if(c[i].id<0)
        {printf("id should be an integer greater than zero \n");
    goto id;
        }
        printf("\n\n\n Account informations saved successfully\n");
    }
         break;
        case 3:{
         printf(" client new cash \n");
            scanf("%lf",&c[i].cash);
            printf("\n\n\n Account informations saved successfully\n");
        }
             break;
              break;
        case 4:{
   printf(" account type debit or credit \n");
    fflush(stdin);
    gets(c[i].type);
    printf("\n\n\n Account informations saved successfully\n");
        }
     break;
      break;

     default:
                           printf("**********please choose a right number  ************\n\n\n");
     }

}else  printf("**********this is a wrong id  ************\n\n\n"); }}


void del_account(int id )
{
    int i;
    int index;
for(i=0;i<=client_num-1;i++)
{if (id==c[i].id)
{ index=i ;
for(i=index;i<=client_num-1;i++)//move all clients
    c[i]=c[i+1];
}
else  printf("**********this is a wrong id  ************\n\n\n");
}
}

 void show_informatin(int id )
 {  int i;
 for(i=0;i<=client_num-1;i++)
 {
    if (id==c[i].id)
    {
         printf("name: %s\n ",c[i].name);
   printf("id: %i\n",c[i].id);
   printf(" cash: %f\n ",c[i].cash);
    printf("type: %s\n",c[i].type);
    }else  printf("**********this is a wrong id  ************\n\n\n");
    }

 }


 void view()

{

 int i;
 for(i=0;i<=client_num-1;i++)
 {
     printf("client number %i\n ",i+1);
         printf("name: %s\n ",c[i].name);
   printf("id: %i\n",c[i].id);
   printf(" cash: %f\n ",c[i].cash);
    printf("type: %s\n",c[i].type);

    }

 }

 void cash_trans(int fid,int tid,double trans )
 {int i,j;
 for (i=0;i<=client_num-1;i++)
 {  if(fid==c[i].id)
     {for (j=0;j<=client_num-1;j++)
     {if(tid==c[j].id)
     { trans : if(trans>c[i].cash)
     {
         printf("the money transfered is greater than your cash \n");

          printf("please enter the money transfered again and take care :");
            scanf("%lf",&trans);
            goto trans;
      }
     else
    {
         c[i].cash=(c[i].cash)-trans;
         c[j].cash=(c[j].cash)+trans;
         printf("cash transfered successfully  \n");
         i=j=3;
     }
     }else  printf("**********this is a wrong recevre id  ************\n\n\n");
     }
     }
 else  printf("**********this is a wrong sender id  ************\n\n\n");}
 }





