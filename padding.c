#include <stdio.h>
struct student { //student구조체 정의
    char lastName[13]; /* 13 bytes */ //char형을 13번개까지 입력할수 있는 lastName문자열 정의
    int studentId; /* 4 bytes */ //int형 변수 studentID 정의
    short grade; /* 2 bytes */ //short형 변수 grade 정의
};
int main()
{
    printf("[----- [Seok Won Park] [2017018003] -----]\n");
    struct student pst; // pst를 student구조체 형식으로 정의
    printf("size of student = %ld\n", sizeof(struct student)); 
    //구조체의 사이즈 출력 19가 출력되어야할것 같지만 gcc컴파일러는 padding을 가짐으로 4의 배수가 되어 short에서 2추가(2+2=4) char에서 3추가(13+3=16)되어서 24로 출력됨
    printf("size of int = %ld\n", sizeof(int)); //int형 사이즈 출력
    printf("size of short = %ld\n", sizeof(short)); //char형 사이즈 출력
    return 0;
}