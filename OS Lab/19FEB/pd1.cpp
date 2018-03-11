#include<iostream>
using namespace std;
#define n 7
struct fork
{
	int left;
	int right;
}p[n];
int check(int m )
{	int i,k=0;
	for(i=1;i<=m;i++)
	{
		if(p[i].left==1 && p[i].right==1)
		{
			cout<<"\n"<<i<<" Have only one Fork!";
			k++;
		}
	}
	return k;
}
void loop(int i)
{
	if(p[i].left==0 && p[i].right==0)
        {
        	cout<<"\n"<<i<<" done";
        }
        else if(p[i].left==0 && p[i].right==1)
        {
                cout<<"\n"<<i<<" Waiting for right fork";
        }
        else if(p[i].left==1 && p[i].right==0)
        {
                cout<<"\n"<<i<<" Waiting for left fork";
        }
	else
	{
		check(i);
	}
}
void share(int t)
{	if(t==0)
	{	
		p[t].left=0;
		p[t+1].right=0;
	}
	else if(t<=n)
	{	
		p[t].left=p[t-1].right=0;
	}
	
		p[n].right=0;
	

}
void gen()
{		
	int i=0;
	for(i=1;i<=n;i++)
        {	
		loop(i);
        }
}
int main()
{
	int i;
	for(i=1;i<=n;i++)
	{
		p[i].left=p[i].right=1;
	}
	int l=check(n);
	for(i=1;i<=n;i++)
	{
		cout<<"\n\n";
		share(i);
		gen();
	}
}
