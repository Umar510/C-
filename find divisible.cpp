#include<iostream>

using namespace std;
int main()
{
   int numerator, denominator;
   cout<<"Enter a Number (Numerator): ";
   cin>>numerator;
   cout<<"Enter another Number (Denominator): ";
   cin>>denominator;
   if(numerator%denominator==0)
      cout<<endl<<numerator<<" is divisible by "<<denominator;
   else
      cout<<endl<<numerator<<" is not divisible by "<<denominator;
   cout<<endl;
   return 0;
}
