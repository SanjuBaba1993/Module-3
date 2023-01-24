#include<stdio.h>
#include<math.h>
void main()
{
    //    int i;                               // 1
    //                                         // 1 2
    // for(int i=1;i<=5;i++)                   // 1 2 3
    //  {                                      // 1 2 3 4
    //        for(int j=1;j<=i;j++)            // 1 2 3 4 5
    //        {
    //     printf(" %d",j);
    //     ;
    // }
    // printf("\n");
    // }

    //  char ch='A';                   // A
    // for(int i=1;i<=5;i++)           // B C
    //  {                              // D E F
    //        for(int j=1;j<=i;j++)    // G H I J
    //        {                        // K L M N O
    //     printf(" %c", ch);
    //     ch++;
    // }
    // printf("\n");
    // }

    //   int i,j;                   //*
    // for(int i=1;i<=5;i++)        //* *
    //  {                           //* * *
    //        for(int j=1;j<=i;j++) //* * * *
    //        {                     //* * * * *
    //     printf(" *");

    // }
    // printf("\n");
    // }

    //    int i;                               //  1
    //    int k=1;                             //  2 3
    //     for(int i=1;i<=5;i++)               //  4 5 6
    //      {                                  //  5 6 7 8
    //            for(int j=1;j<=i;j++)        //  9 10 11 12
    //            {
    //         printf(" %d",k);
    //         k++;

    //     }
    //     printf("\n");
    //     }

    //    A
    //    A B
    //    A B C
    //    A B C D
    //    A B C D E

    //  char ch;
    //  for(int i=1;i<=10;i++)

    //  {ch='A';
    //        for(int j=1;j<=i;j++)
    //        {

    //     printf(" %c",ch);
    //     ch++;
    //   }
    // printf("\n");
    // }

    //    int i,j,k;
    //    for (int i=1;i<=5;i++)
    //    {
    //        for(j=5;j>=i;j--)
    //        {
    //         printf(" ");

    //        }
    //        for(k=1;k<=2*i-1;k++)
    //        {
    //         printf("*");

    //        }
    //        printf("\n");
    //      }

    //     int i,j,k,s;

    //    for (int i=1;i<=6;i++)
    //    {
    //        for(j=1;j<=i;j++)
    //        {
    //         printf(" * ");

    //        }
    //        printf(" \n");
    //    }
    //        for(k=1;k<=5;k++)
    //    {
    //        for(s=5;s>=k;s--)
    //       {
    //         printf(" * ");

    //        }
    //    printf(" \n");
    //  }

    //      1
    //     12
    //    123
    //   1234
    //  12345

    //     int i,j,k;

    //     for(int i=1;i<=5;i++)
    //      {
    //           for(int k=i;k<=5;k++)
    //           {
    //             printf(" ");
    //           }
    //            for(int j=1;j<=i;j++)
    //            {
    //         printf("%d",j);

    //     }
    //     printf("\n");
    // }

    //     1
    //    21
    //   321
    //  4321
    // 54321

    // int i,j,k;

    //     for(int i=1;i<=5;i++)
    //      {
    //           for(int k=i;k<=5;k++)
    //           {
    //             printf(" ");
    //           }
    //            for(int j=i;j>=1;j--)
    //            {
    //         printf("%d",j);

    //     }
    //     printf("\n");

    //        5
    //       45
    //      345
    //     2345
    //    12345

    // int i,j,k;
    // for (int i=5;i>=1;i--)
    // {
    //     for (int k=i;k>=1;k--)
    //     {
    //         printf(" ");
    //     }
    //     for(int j=i;j<=5;j++)
    //     {
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }

    //     5
    //     54
    //     543
    //     5432
    //     54321

    // int i,j,k;
    // for ( int i=5;i>=1;i--)
    // {
    //     for ( int k=i;k<=1;k++)
    //     {
    //         printf(" ");
    //     }
    //     for( int j=5;j>=i;j--)
    //     {
    //         printf("%d",j);
    //     }
    //        printf("\n");
    // }

    // for(int i=0;i<=5;i++){
    //         printf("\n%d",(int)pow(11,i));

    //      }

    //  A B C D E
    //  F G H I
    //  J K L
    //  M N
    //  O

    char ch = 'A';
    for (int i = 1; i <= 5; i++)
    {
        for (int j = i; j <= 5; j++)
        {
            printf(" %c", ch);
            ch++;
        }
        printf("\n");
    }
}
