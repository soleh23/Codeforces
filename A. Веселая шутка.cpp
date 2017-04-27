#include<iostream>
#include<string.h>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;
main()
{
int a[10001],b[10001],c=0,i,j=0,v=0,k,p=1,n;
char s[1001],s2[1001],s3[1001],res[10001];
scanf ("%s %s %s",&s,&s2,&s3);

c=strlen(s);
p=strlen(s2);
k=strlen(s3);
for (i=0;i<c;i++)
{
 res[v]=s[i];
 v++;
}
for (i=0;i<p;i++)
{
 res[v]=s2[i];
 v++;
}

sort (res,res+v);
sort (s3,s3+k);

if (v==k)
{
 for (i=0;i<v;i++)
 {
 if (s3[i]==res[i])j++;
 }
 if (j==v){printf ("YES");return 0;}
}
printf ("NO");
return 0;
}
