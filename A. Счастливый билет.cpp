#include<stdio.h>
#include<math.h>
#include<algorithm>
#include<string.h>
int i,n,v=0,c=0,a[101];                            
char s[100001];
main()
{

scanf ("%d",&n);

for (i=0;i<n;i++)
{
 scanf ("%c",&s[i]);
}
 for (i=0;i<n;i++)
 {
  if (s[i]=='4')c++;
  //if (s[i]=='7')v++;
 } 
 printf ("%d %d",c,v);    
 /*if (c+v!=n){printf ("NO");return 0;}
 
// else 
 {
  c=0;
  v=0;
  for (i=0;i<n/2;i++)
  c+=s[i]-48;
    for (i=n/2;i<n;i++)
  v+=s[i]-48;  
 if (c==v){printf ("YES");return 0;}
 }
// printf ("N0");    */                                                                      
getchar ();                                                                     
getchar ();                                                                     
return 0;                                                                       
}
