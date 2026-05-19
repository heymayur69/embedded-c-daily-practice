/*11. Write a program to determine the ranges of char, short, int, and long variables, both signed and
unsigned, by printing appropriate values from standard headers.
Do not use spaces to align table columns.
(note: the size and range changes from compiler to compiler)*/


#include <stdio.h>
#include <limits.h>
void headerRow(){
    printf("==========================================================================================================================\n");

    printf("%-25s%-8s%-18s%s\n","Data Type","Size","Format Specifier","Range");

    printf("==========================================================================================================================\n");
}

void contentRows(){
    printf("%-25s%-8ld%-17s%d to %d\n","char",sizeof(char),"%c",CHAR_MIN,CHAR_MAX);

    printf("%-25s%-8ld%-18s%d to %d\n","unsigned char",sizeof(unsigned char),"%c",0,CHAR_MAX);

    printf("%-25s%-8ld%-17s%d to %d\n","short",sizeof(short int),"%hd",SHRT_MIN,SHRT_MAX);

    printf("%-25s%-8ld%-18s%d to %d\n","unsigned short int ",sizeof(unsigned short int),"%hu",0,USHRT_MAX);

    printf("%-25s%-8ld%-17s%d to %d\n","int",sizeof(int),"%d",INT_MIN,INT_MAX);

    printf("%-25s%-8ld%-18s%d to %d\n","unsigned int",sizeof(unsigned int),"%u",0,UINT_MAX);

    printf("%-25s%-8ld%-17s%ld to %ld\n","long int",sizeof(long int),"%ld",LONG_MIN,LONG_MAX);

    printf("%-25s%-8ld%-18s%d to %ld\n","unsigned long int",sizeof(unsigned long int),"%lu",0,ULONG_MAX);

    printf("==========================================================================================================================\n");


}



int main() {
    headerRow(); 
    contentRows();

    return 0;
} 