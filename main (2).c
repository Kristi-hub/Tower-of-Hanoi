#include <stdio.h>
void hanoi_tower(int n, int a, 
                    int b, int c)  
{  
    char ch;
    if(n == 1)  
    {  
        printf("Move C to %d\n",c);  
        return;  
    }  
    hanoi_tower(n - 1, c, b, a);  
    if(n == 2)
    {
        ch = 'B';
    
    printf("Move %c to %d\n",ch,b);
    }
    else if(n == 3)
    {
        ch = 'A';
        printf("Move %c to %d\n",ch,c);
    }
    hanoi_tower(n - 1, a,c,b);  
}  
  
int main()
{
    int n = 3; //Number of disks
    hanoi_tower(n, 1, 2, 3); // A, B and C are names of rods  

    return 0;
}



