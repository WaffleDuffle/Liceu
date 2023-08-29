#include <iostream>
using namespace std;
int n,m,k,i,j,A[100],B[100],C[100];int main(){cin>>n;cin>>m;for(i=1;i<=n;i++)cin>>A[i];for(j=1;j<=m;j++)cin>>B[j];for(i=1;i<=n;i++)cout<<A[i]<<" ";for(j=1;j<=m;j++)cout<<B[j]<<" ";i=1; j=m; k=0;while(i<=n&&j>=1)if(A[i]>=0)i++;else if(B[j]<0)j--;else if(A[i]<B[j])C[++k]=A[i++];else if(B[j]<A[i])C[++k]=B[j--];else{C[++k]=A[i++];C[++k]=B[j--];}while(i<=n)if(A[i]>=0)i++;else C[++k]=A[i++];while(j>=m)if(B[j]<0)j--;else C[++k]=B[j--];for(i=1;i<=k;i++) cout<<C[i]<<" ";return 0;}
