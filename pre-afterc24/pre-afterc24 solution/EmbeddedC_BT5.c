#include <stdio.h>
#include <string.h>
#include <stdint.h>

struct infor {
    char name[32];
    char mssv[8];
    uint8_t course;
};

void infor_input();
void infor_output();

void main(void)
{
    struct infor my_infor;
    infor_input(&my_infor);
    infor_output(&my_infor);
}

void infor_input(struct infor *stu_infor)
{
    printf("\ninfor_input function\n");

    printf("name = ");
    scanf("%s", stu_infor->name);
    printf("mssv = ");
    scanf("%s", stu_infor->mssv);
    printf("course = ");
    scanf("%d", &stu_infor->course);
}


/* Declaration function */
void age_output(int age);

/* Definition function */
void age_output(int age)
{
    printf("Age: %d", age);
}


