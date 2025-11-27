#include <stdio.h>

struct Employee {
    char name[20];
    int id;
    float salary;
};

int main() {
    struct Employee emp;
    printf("Enter name: ");
    scanf("%s", emp.name);
    printf("Enter ID: ");
    scanf("%d", &emp.id);
    printf("Enter salary: ");
    scanf("%f", &emp.salary);
    FILE *fp = fopen("employees.bin", "wb");
    fwrite(&emp, sizeof(struct Employee), 1, fp);
    fclose(fp);
    fp = fopen("employees.bin", "rb");
    fread(&emp, sizeof(struct Employee), 1, fp);
    printf("Read: %s, %d, %.2f\n", emp.name, emp.id, emp.salary);
    fclose(fp);
    return 0;
}