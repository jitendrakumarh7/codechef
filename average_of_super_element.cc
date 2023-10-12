
#include<bits/stdc++.h>
using namespace std;
int main()
{
   
        int n;
        cin>>n;
        int x[n],c=0,ct=0;
        float sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        sort(x,x+n);
        for(int i=0;i<n;i++)
        {
            c=1;
            for(int j=i+1;j<n;j++)
            {
                if(x[i]==x[j])
                {
                    c+=1;
                }
            }
            if(x[i]==c)
            {
                sum+=c;
                ct+=1;
            }
        }
        cout<<(sum/ct);
       
    
}