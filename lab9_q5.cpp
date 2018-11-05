#include <iostream>
using namespace std;

int main()
{
   char s[10] ="abcde";
   char* cptr;
   cptr=s;
   //using the loops
   for(int i=10;i>=0;i--)
   {
       cout<<*(cptr+i);
   }
   return 0;
}
