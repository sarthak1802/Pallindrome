#include <iostream>
using namespace std;

int main()
{
	int m,n,r,s=0;
	
    cout << "enter any number"<<endl;
	cin>>n;
	m=n;
	
	while(n>0)
	{
		r=n%10;
		s=s*10+r;
		
		n=n/10;
	}
	if (m==s)
	{
		cout<<"the number is pallindrome"<<m<<endl;
	}
	else
	{
		cout<<"the number is not pallindrome"<<endl;
	}
}