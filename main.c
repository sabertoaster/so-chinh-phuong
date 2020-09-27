#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    int n=0,dem=0;
    bool kt=false;
    printf("Nhap so n:\n");
    scanf("%d",&n);
    do
    {
        kt=false;
        dem++;
        if (dem*dem==n)
        {
            printf("So %d la so chinh phuong",n);
            kt=true;
        }
    } while (dem*dem<n);
    if (kt==false) { printf("So %d khong phai so chinh phuong",n); }
    return 0;
}
