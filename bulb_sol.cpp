#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	int n,x;
	while(t--)
	{
	    cin>>n>>x;
	    int b[n-1];
	    int sum=0;
	    int nth;
	    for(int i=0; i<n-1; i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=0; i<n-1; i++)
	    {
	        sum+=b[i]; 
	    }
	    nth=(x*n)-sum;
	    if(nth>=0)
        cout<<nth<<endl;
        else
        cout<<"0"<<endl;
	    
	}
	return 0;
}