#include<stdio.h>
#include<iostream>
#include<math.h>
#include<algorithm>
#include<string.h>
int a[100001],n,m,i,j,c=0,v=0;
char s[1001];

using namespace std;
main()
{

scanf("%s",&s);

m=strlen(s);

if (c%2==0 && c>1)printf("%d",(m*m)-4),c++;
else printf("%d",(m*m)),c++;
system("pause");
return 0;
}
