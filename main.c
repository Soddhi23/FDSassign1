#include <stdio.h>
 #define Z 5 
void inputdata(int *T) 
{ 
    for (int i = 0; i < Z; i++) 
    { 
       printf("Enter the element number %d = ", i);             scanf("%d", &T[i]); 
    } 
} 
void display(int *T, int n) 
{     printf("{ ");    
  for (int i = 0; i < n; i++) 
    { 
        printf("%d ", T[i]); 
    }   
printf("}");   
printf("\n"); } 
int isUni(int union1[], int ar1[], int ar2[]) 
{    
int i, j, k = 0;  
for (i = 0; i < Z; i++) 
    {         union1[k] = ar1[i];  
              k++;
} 
    for (i = 0; i < Z; i++) 
    { 
        for (j = 0; j < Z; j++) 
        { 
            if (ar1[j] == ar2[i]) 
            {                 break; 
            }         }         if (j == Z) 
        {             union1[k] = ar2[i];             k++; 
        }     }     return k; } 
int isInters(int Inter[], int ar1[], int ar2[]) 
{     int k = 0, j;     for (int i = 0; i < Z; i++) 
    { 
        for (int j = 0; j < Z; j++) 
        { 
            if (ar1[j] == ar2[i]) 
            { 
                Inter[k] = ar2[i]; 
                k++; 
            } 
        }     }     return k; } 
int isDiffe(int diff[], int ar1[], int ar2[]) 
{     int k = 0, j;     for (int i = 0; i < Z; i++) 
    {         int flag = 1;         for (int j = 0; j < Z; j++) 
        { 
            if (ar1[i] == ar2[j]) 
            {                 flag = 0;                 break; 
            }         }         if (flag == 1) 
        {             diff[k] = ar1[i];             k++; 
        }     }     return k; } 
int isSymme(int symm[], int ar1[], int ar2[], int diff[]) 
{     int k = 0, j;     for (int i = 0; i < Z; i++) 
    {         int flag = 1;         for (int j = 0; j < Z; j++)         { 
            if (ar1[i] == ar2[j]) 
            {                 flag = 0;                 break; 
            }         } 
        if (flag == 1) 
        { 
            symm[k] = ar1[i]; 
            k++; 
        }     } 
    for (int i = 0; i < Z; i++) 
    { 
        int flag = 1; 
        for (int j = 0; j < Z; j++) 
        { 
            if (ar2[i] == ar1[j]) 
            {                 flag = 0;                 break; 
            }         } 
        if (flag == 1) 
        { 
            symm[k] = ar2[i]; 
            k++; 
        }     }     return k; 
} int main() { 
    int n, ar1[Z], ar2[Z], Union_ar[Z * 2], Inter_ar[Z * 2], differ_ar[Z * 2], symmetr_ar[Z * 
2]; 
    char operator; 
    printf("Enter the elements of array 1\n");     inputdata(ar1);     display(ar1, Z); 
    printf("Enter the elements of array 2\n");     inputdata(ar2);     display(ar2, Z); 
    do 
    { 
        printf("Enter which operation you want to perform\n"); 
        printf("1 = Union\n2 = Intersection\n3 = Difference\n4 = Symmetric Difference\n");             scanf(" %c", &operator);         switch (operator) 
        {         case '1': 
            n = isUni(Union_ar, ar1, ar2);             printf("Union of two ar1 and ar2 is :- ");             display(Union_ar, n); 
            break;         case '2': 
            n = isInters(Inter_ar, ar1, ar2);             printf("Intersection of two ar1 and ar2 is :- ");             display(Inter_ar, n); 
            break;         case '3': 
            n = isDiffe(differ_ar, ar1, ar2);             printf("Difference of two ar1 and ar2 is :- ");             display(differ_ar, n); 
            break;         case '4': 
            n = isSymme(symmetr_ar, ar1, ar2, differ_ar);             printf("Symmetric Difference of two ar1 and ar2 is :- ");             display(symmetr_ar, n); 
            break; 
        } 
        printf("Do you want to perform operation again(Y/N) = ");         scanf(" %c", &operator); 
    } while (operator== 'Y' || operator== 'y');     return 0; 
} 
 