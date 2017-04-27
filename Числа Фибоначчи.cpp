#include<iostream>
#include<math.h>
using namespace std;
main()
{
freopen("input.txt","r",stdin); 
freopen("output.txt","w",stdout);        
int a=0,b=1,c,n=0;
cin>>n;
for (int i=2;i<=n;i++)
 { 
  c=a+b;
  
  a=b;
  b=c;
}

if(n<2) cout<<n;

else cout<<c;
/*system("pause")*/;
return 0;      
      
}
