#include <iostream>
using namespace std;
int solve(long long int x,long long int y)
{
 if (x<y) return solve(y,x);

else if (y==0) return x;

else return solve(y,x%y);
}
int main(int argc, char *argv[])
{
	long long int a,b,c,l,r;
	int co=0;
	cin>>l>>r;
	for(a=l;a<=r-2;a++)
	{
	  for(b=a+1;b<=r-1;b++)
	  {
  		for(c=b+1;c<=r;c++)
  		{
		  	if((solve(a,b)==1)&&(solve(b,c)==1)&&(solve(a,c)!=1))
		  	{
	  			cout<<a<<" "<<b<<" "<<c;
			    co=1;
	  		}
	  		if(co==1) break;
		  }
		  	if(co==1) break;
  	 }	
  	 	if(co==1) break;
	}
	if(co==0)
	{
		cout<<-1;
	}
	return 0;
}