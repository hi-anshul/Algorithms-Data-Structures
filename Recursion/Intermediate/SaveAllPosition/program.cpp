#include<bits/stdc++.h>
using namespace std;

void SaveAllPostion(int A[], int n, int key,int i, vector<int> &ans)
{
	if(i==n)
		return;
	if (A[i]==key)
		ans.push_back(i);
	
	SaveAllPostion(A,n,key,i+1, ans);
		
}
int main(){
	
	vector<int> V;
	
	int A[]={1,1,4,2,3,5,1,2,7};
	
	SaveAllPostion(A,9,1,0,V);
	
	for (int i = 0; i < V.size(); i++)
	{
		cout<<V[i]<<" ";
	}

	return 0;
}