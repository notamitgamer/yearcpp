//check odd or even
#include<iostream>
using namespace std;
class ooe
{
	int n;
	public:
			void input();
			void calcdisp();
};
void ooe::input()
{
	cout <<"Enter the number : ";
	cin >> n;
}
void ooe::calcdisp()
{
	if(n==0)
	{
		cout<<"0 neither a odd or a even number.";0
 	}
	else if(n%2 == 0)
	{
		cout<<n<<" is a even number.";
	}
	else
	{
		cout<<n<<" is a odd number.";
	}
}
int main()
{
	ooe a;
	a.input();
	a.calcdisp();
	return 0;
}
