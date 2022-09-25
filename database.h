//functions prototypes
#ifndef database_h // to avoid including h file more than 1 time
#define database_h

struct clinet
{ char name[60];
  unsigned int id;
  double cash;
  char type[10];
};
void new_client(void);
void  edit(int ide );
void del_account(int id );
void show_informatin(int id );
void view();
void cash_trans(int fid,int tid,double trans );
#endif
