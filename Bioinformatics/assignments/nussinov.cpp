#include <bits/stdc++.h>
using namespace std;
//Implemenetation of Nussinov's RNA folding algorithm
/* Conditions:
i< j-4
only A pairs with U and C with C
Pairing has to be a matching
Each position is involved in atmost one pair
No cross pairing is allowed
*/
#define MAX_N 101 
int n;
string A;
int dp[MAX_N][MAX_N];
bool valid_sequences(char X, char Y)
{
  return ((X == 'A' && Y == 'U') || (X == 'U' && Y == 'A') || (X == 'C' && Y == 'G') || (X == 'G' && Y == 'C'));
}
int main()
{

}

int nussinov(int i,int j)
{

if (dp[i][j] !=-1)
	return dp[i][j];
if(i>=j)
{
	dp[i][j] =0;
	return 0;
}

}
int initilization()
{
	for( int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			dp[i][j] = -1;
		}
	}
}
