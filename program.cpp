#include<iostream.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
char ch ch1;
float l,b,pm,area,diag;
do
{syatem("cls");
cout<<"\n"<<"Rectangle Menu:";
cout<<"\n 1.Area" ;
cout<<"\n 2.Perimeter" ;
cout<<"\n 1.Diagnoal" ;
cout<<"\n 1.Exit"<<"\n" ;
cout<<"enter your choice :" ;
cin>>ch;
if(ch=='1'||ch=='2'||ch=='3')
{
cout<<"\n"<<"enetr length and breadth :";
cin>>l>>b;
}
switch(ch)
{case '1' :  area=l*b;
             cout<,"area:"<<area<<endl;
	     break ;
 case'2'  :  pm=2*(l+b);
             cout<<"perimeter:"<<pm<<endl;	
             break;
case'3'   :  diag=sqrt(l*l+b*b);
	     cout<<"diagonal:"<<diag<<endl;
	     break;
case'4'   :  break;
deafult   :  cout<<"wrong choice !\n";
             break;
}
cout<<"\n press a key to continue.....\n";
ch1 =getchar();
}
while(ch>='1'&&ch<='3');
return 0 ;
}
