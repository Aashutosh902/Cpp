#include<iostream>
using namespace std;
int main()
{
	int n;
	for(n=10;n>0;n--)
	{
		if(n==5)
		continue;
		cout<<n<<endl;
	}
	cout<<"Fire !";
	return 0;
}
