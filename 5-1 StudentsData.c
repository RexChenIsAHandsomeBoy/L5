#include <stdio.h>
#include <stdlib.h>

struct student{
char *no;
char *name;
int age;
};

int main()
{
    printf("姓名\t學號\t年齡\n");
    struct student z;
    z.no="08101";
    z.name="張三";
    z.age=17;
    printf("%s\t",z.name);
    printf("%s\t",z.no);
    printf("%d\n",z.age);
    struct student a;
    a.no="08301";
    a.name="阿美";
    a.age=17;
    printf("%s\t",a.name);
    printf("%s\t",a.no);
    printf("%d\n",a.age);
    struct student l;
    l.no="08103";
    l.name="李四";
    l.age=16;
    printf("%s\t",l.name);
    printf("%s\t",l.no);
    printf("%d\n",l.age);
    struct student s;
    s.no="08201";
    s.name="小美";
    s.age=16;
    printf("%s\t",s.name);
    printf("%s\t",s.no);
    printf("%d\n",s.age);
    system("PAUSE");
    return 0;
}
