#include<stdio.h>
#include<stdlib.h>
void main()
{
    printf("[----- [Seok Won Park] [2017018003] -----]\n");
    int **x; //int형 x이중포인터 정의
    printf("sizeof(x) = %lu\n", sizeof(x)); //x 포인터가 가지는 사이즈출력
    printf("sizeof(*x) = %lu\n", sizeof(*x)); //*x 포인터가 저장되는 사이즈출력
    printf("sizeof(**x) = %lu\n", sizeof(**x)); //**x 이중 포인터가 저장되는 사이즈출력
}