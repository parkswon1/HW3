#include <stdio.h>
struct student1 { //student1구조체 선언
    char lastName; //char형 lastName 변수정의
    int studentId; //int형 studentID 변수정의
    char grade; //char형 grade 변수정의
};
typedef struct { //student2구조체 선언 여기서는 typedef방식을 사용함
    char lastName; //char형 lastName 변수정의
    int studentId; //int형 studentID 변수정의
    char grade; //char형 grade 변수정의
} student2;
int main() {
    printf("[----- [Seok Won Park] [2017018003] -----]\n");
    struct student1 st1 = {'A', 100, 'A'}; //st1를 student1 구조체형식으로 정의, 각 변수들에 값을 넣어줬다.
    printf("st1.lastName = %c\n", st1.lastName); // st1구조체의 lastName 값 출력
    printf("st1.studentId = %d\n", st1.studentId); // st1구조체의 studnetID 값 출력
    printf("st1.grade = %c\n", st1.grade); // st1구조체의 grade 값 출력
    student2 st2 = {'B', 200, 'B'}; //st1를 student2 구조체형식으로 정의, 각 변수들에 값을 넣어줬다.
    printf("\nst2.lastName = %c\n", st2.lastName); // st2구조체의 lastName 값 출력
    printf("st2.studentId = %d\n", st2.studentId); // st2구조체의 studnetID 값 출력
    printf("st2.grade = %c\n", st2.grade); // st2구조체의 grade 값 출력
    student2 st3; //st3를 student2 구조체형식으로 정의
    st3 = st2; //st3를 st2로 각항목들의 값을 넣어줌
    printf("\nst3.lastName = %c\n", st3.lastName); // st3구조체의 lastName 값 출력
    printf("st3.studentId = %d\n", st3.studentId); // st3구조체의 studnetID 값 출력
    printf("st3.grade = %c\n", st3.grade); // st3구조체의 grade 값 출력
/* equality test */
    if(st3 == st2) /* not working */ 
    //이런 방식으로 구조체를 비교할수는 없지만 주석을 달아보라고 넣어두신것 같음 실행할땐 if else를 모두 주석처리후 실행했다
        printf("equal\n"); // 각항목에 들어있는 값을 비교하라는 뜻이면 True가되어 출력될 것이다.
    else
        printf("not equal\n");
    return 0;
}