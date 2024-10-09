#include<iostream>
using namespace std;
int xcap,ycap,step=0,n;
void solve()
{
int x=0,y=0,temp;
cout<<"\n Step \t"<<"Jug 1\t"<<"Jug 2";
while(x!=n){
 if(x==0)
{
  x=xcap;
  step++;
  cout<<"\n Filled Jug 1 completely ";
  cout<<"\n "<<step<<"\t"<<x<<"\t"<<y<<"\n";
 }
 else if(y==ycap)
 {
   y=0;
   step++;
   cout<<"\n Jug 2 is empty ";
   cout<<"\n "<<step<<"\t"<<x<<"\t"<<y<<"\n";
 }
  else
  {
  if(x<ycap){
   temp=x;
   }
   else{
   temp = ycap;
   }
   
   x=x-temp;
   y=y+temp;
   step++;
   cout<<"\n Poured from jug 1 to jug 2 ";
   cout<<"\n "<<step<<"\t"<<x<<"\t"<<y<<"\n";
 }
 }
 }
 
 int main()
{
 cout<<"Enter the capacity of X jug :  ";
 cin>>xcap;
 cout<<"\nEnter the capacity of Y jug: ";
 cin>>ycap;
 cout<<"\nEnter the number of litres to  measured:";
 cin>>n;
 cout<<"\n Prepared by Ayush";
 solve();
 return 0;
 }
