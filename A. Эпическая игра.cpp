#include<iostream>
#include<math.h>
#include<stdio.h>
#include<algorithm>
#include<string.h>
 int nod (int x, int y)
  {
    if (y == 0)
		return x;
	else
		return nod (y,x%y);
  }
using namespace std;
main()
{
      int a,b,v=0,u=0,c;
       
       cin >> a >> b >>c;
       while (v==0)
          {
            if (nod(a,c)>c){printf ("1");return 0;} 
             c-=nod (a,c);
                if (nod(b,c)>c){printf ("0");return 0;}
              c-=nod(b,c);
          }
       
   
return 0;           
}         
