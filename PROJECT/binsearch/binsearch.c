#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[] = {1,7,19,56,78,98};
    int a =  binsearch(19,v,6);
    printf("t\n");
    printf("%d",a);
    return  1;
}

/* binsearch函数：在v[0]<=v[1]<=v[2]<=...v[n-1]中查找x */
int binsearch(int x,int v[],int n){
    int low,high,mid;
    low = 0;
    high = n - 1;
    while (low <= high){
        mid = (low + high) / 2;
        if(x < v[mid]){
            high = mid - 1;
        }else if(x > v[mid]){
            low = mid + 1;
        }else{
            return mid;
        }
        return -1;
    }
}
