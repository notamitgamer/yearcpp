#include<iostream>
using namespace std;
class addoftwoinput
{
  int inp1,inp2,out;
public:
  void input();
  void calculation();
  void output();
};
void addoftwoinput :: input()
{
  cout<<"\nInsert the 1st number : ";
  cin>>inp1;
  cout<<"\nInsert the 2nd number : ";
  cin>>inp2;
}
void addoftwoinput :: calculation()
{
  out=inp1+inp2;
}
void addoftwoinput :: output()
{
  cout<<"\nSum of "<<inp1<<" and "<<inp2<<" is : "<<out;
}
int main()
{
  addoftwoinput z;
  z.input();
  z.calculation();
  z.output();
  return 0;
}
