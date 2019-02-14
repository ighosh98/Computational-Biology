#include <bits/stdc++.h>
using namespace std;
// Implementation of Knuth Morris Pratt ALgo
void computelps(string a, int lps[])
{
	int length = 0;

	lps[0]=0;
	int i=1;
	while(i<a.length())
	{
		if(s[i]==a[len])
		{
			length++;
			lps[i]= length;
			i++;
		}
		else
		{
			if(len!=0)
			{
				length = lps[length-1];
				i++;
			}
			else//length=0
			{
				lps[i]=0;
				i++;
			}
		}
	}
}
void KMPSearch(string a, string b)
{

	int prefix[strlen(a)];
	int n1 = strlen(b);
	int n2 = strlen(a);
	int i=0,j=0;//i is for b and j for a
	computelps(a,lps);
	while(i<0)
	{
		if(a[j]==b[i])
		{
			i++;
			j++;
		}
		if(j==n2)
		{
			printf("Match found at index %d\n",i-j);
			j = prefix[j-1];
		}
		else if(i<n1 && pat[j]!=txt[i])
		{
			if(j!=0)
				j=prefix[j-1];
			else
				i++;
		}
	}
}
int main()
{
	string a,b;
	cin >> a;
	cin >> b;
	KMPSearch(a,b);
}