#include<stdio.h>
int main()
{
   int N;
   printf("Enter the number\n");
   scanf("%d",&N);
   Automorphic(N)?printf("Automorphic number\n"):printf("Not Automorphic number\n");
   return 0;
}
/*Function for Automorphic number*/ 
int Automorphic(int N)
{
int sq = N * N;

    while (N > 0)
       {
         if (N % 10 != sq % 10)
           return 0;

// Reduce N and square
         N /= 10;
         sq /= 10;
       }

return 1;
}
