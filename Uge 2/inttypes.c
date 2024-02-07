// ’include’ is a keyword in C. Here, it loads the
// "stdio.h" library so we can use the functions defined
// there. In this code, we use the ’printf’ function that’s
// defined there.
#include <stdio.h>
// The main function will be executed when we run the program
void main(){
    char c=1;
    short s=1;
    int i=1;
    long l=1;
    long long ll=1;
    printf("Size of a char type is %d byte or %d bits.\n",sizeof(c),sizeof(c)*8);
    printf("Size of a short type is %d byte or %d bits.\n",sizeof(s),sizeof(s)*8);
    printf("Size of a int type is %d byte or %d bits.\n",sizeof(i),sizeof(i)*8);
    printf("Size of a long type is %d byte or %d bits.\n",sizeof(l),sizeof(l)*8);
    printf("Size of a long long type is %d byte or %d bits.\n",sizeof(ll),sizeof(ll)*8);
}