/*
main:
{
.cfi_startproc
int width = 10;
movl  $10, -12(%rbp)
int height = 5;
movl      $5, -8(%rbp)
area = width * height
movl      -12(%rbp), %eax
imull      -8(%rbp), %eax
cout<<endl<< area;
call          _ZNSolsEPFRSoS_E@PLT
return 0;
movl      $0, %eax
leave}
.cfi_endproc
*/

//Above is code from Assembly below it is convervted to c++ with same funcionality


#include<iostream> 
  
using namespace std;

int main()
     {
 int num, i;
 int product=1;
 
cout<<“Enter a number:\n”;
cin>>num;
 
 for(i=num;i>0; i--)
  product = product * i;
 
cout<<“The factorial for “<< num << “is: “<< product<< endl; 
 return 0;
}
