/*Digital Clock*/

#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
   int h, m, s;
   h=m=s=0; 
   start:
   while(1)
   {
      system("clear");
      printf("Digital Clock\n");
      printf("%02d : %02d : %02d ",h,m,s);
      fflush(stdout);
      s++;
      if(s==60)
      {
         m+=1;
         s=0;
      }
      if(m==60)
      {
         h+=1;
         m=0;
      }
      if(h==24)
      {
         h=0;
         m=0;
         s=0;
      }
      sleep(1);   
   } 
   goto start;
   return 0;
}