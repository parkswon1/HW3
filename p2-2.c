#include <stdio.h>
void print1 (int *ptr, int rows); // void형 함수 print1 정의
int main()
{
    printf("[----- [Seok Won Park] [2017018003] -----]\n");
    int one[] = {0, 1, 2, 3, 4}; //int형 배열 one지정 값을 0,1,2,3,4순서대로 넣었다
    printf("one = %p\n", one); //one배열의 값을 출력 one또한 one[0]를 가르키는 포인터임으로 one[0]주소가 출력된다.
    printf("&one = %p\n", &one); //one배열의 주소를 출력
    printf("&one[0] = %p\n", &one[0]); //one[0]의 주소를 출력
    printf("\n");
    print1(&one[0], 5); // print1 호출 one배열의 주소들과 값들이 출력된다.
    return 0; 
}

void print1 (int *ptr, int rows) //int형 포인터와 int형 변수하나를 받아옴

{/* print out a one-dimensional array using a pointer */
    int i; //int형 i변수 정의
    printf ("Address \t Contents\n");
    for (i = 0; i < rows; i++) // i가 rows보다 작을때 i를 0부터 1씩증가시킴
        printf("%p \t %5d\n", ptr + i, *(ptr + i)); //포인터로받아온 주소에 i값을 더한주소를 출력 , 주소에 i값을 더한주소의 값을 출력
    printf("\n");
}