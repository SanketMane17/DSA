#include <stdio.h>

int main(){
    int a = 1025;
    int *p = &a;
    printf("\n Address = %d, Value = %d",p,*p);
    printf("\n Address = %d, Value = %d",p+1,*(p+1));
    char *p1 = (char*)p; // Typecasting
    printf("\n Address = %d, Value = %d",p1,*p1);
    printf("\n Address = %d, Value = %d",p1+1,*(p1+1));

    //                          *(p1+2)  *(p1+1)
    // 1025 = 00000000 00000000 00000100 00000001

    int arr[] = {1,2,3,4,5,65,7,8,9,9};
    int n = sizeof(arr)/sizeof(arr[0]); 
    printf("\n %d",n);
    return 0;
}