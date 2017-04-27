#include<stdio.h>
#include<iostream>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;
int y,n,c=5,v=1,u=0,l=1,h=1;
void qwe()
 {
   if (l==1)printf ("Sheldon");
   if (l==2)printf ("Leonard");
   if (l==3)printf ("Penny");
   if (l==4)printf ("Rajesh");
   if (l==5)printf ("Howard");
 }
main()
{

 scanf("%d",&n);
int z=2;
while (n-c>0)
{
printf ("%d ",c);
    n-=c;
    c*=2;
    v++;
    u+=c;

}
printf ("\n%d",u);
//printf ("%d %d %d",c,n,v);
return 0;
}
