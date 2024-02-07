#include <stdio.h>

void displaychar(char c){
    printf("0x%hhX =\t’%hhu’unsigned =\t’%hhd’signed =\t’%c’char (8 bits)\n",c,c,c,c);
}

int main(){
    unsigned char c1=0xFF; // 0x means we are using a hexadecimal number
    unsigned char c2=0x1;
    unsigned char sum = c1+c2;
    displaychar(c1);
    printf("\t\t+\n");
    displaychar(c2);
    printf("\t\t=\n");
    displaychar(sum);
    printf("\n\n\tConverting Hex to binary table:\n\n\
    *****************************\n\
    ** H E X **** B I N A R Y **\n\
    **-------****--------------**\n\
    ** 0 **** 0000 **\n\
    ** 1 **** 0001 **\n\
    ** 2 **** 0010 **\n\
    ** 3 **** 0011 **\n\
    ** 4 **** 0100 **\n\
    ** 5 **** 0101 **\n\
    ** 6 **** 0110 **\n\
    ** 7 **** 0111 **\n\
    ** 8 **** 1000 **\n\
    ** 9 **** 1001 **\n\
    ** 10 **** 1010 **\n\
    ** 11 **** 1011 **\n\
    ** 12 **** 1100 **\n\
    ** 13 **** 1101 **\n\
    ** 14 **** 1110 **\n\
    ** 15 **** 1111 **\n\
    *****************************\n");
}