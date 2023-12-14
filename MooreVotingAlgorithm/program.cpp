#include<bits/stdc++.h>
using namespace std;

int MooreVotingAlgorithm(int A[])
{
	int n = 6;
	int cand = A[0];
	int count =1;

	for (int i = 0; i < n; i++)
	{
		if (cand=A[i])
		{
			count++;
		}
		else
		{
			count--;
			if (count==0)
				{
					cand=A[i];
					count = 1;
				}
		}
	}

    int count2=cand;
    for(int i =0; i<n;i++)
        if(count2=A[i]){
            count2++;
        }

    if(count2>(n/2))
        return cand;
    else return -1;

}


int main(){

	int A[]={3,2,2,3,3,1};
	cout<<MooreVotingAlgorithm(A);


	return 0;
}
