#include<iostream>
using namespace std;
int sum (int num1,int num2)
{
    return (num1+num2);
}
double sum(double num1,int num2)
{
    return(num1+num2);
}
 
double sum(int num1 ,double num2)
{
    return(num1+num2);
}
double sum(double num1,double num2)
{
    return(num1+num2);

}
int main ()
{
  cout<<sum(2,3);
  cout<<sum(2.3+5);
  cout<<sum(3+2.3);
  cout<<sum(7.8+9.8);
}