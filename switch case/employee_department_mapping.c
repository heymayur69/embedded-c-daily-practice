/*
3. Write a program to accept Employee Id , Department No, Designation from user and display
output with reference to following tables
| Dept No | Dept Name  | Dsgn Code | Designation      |
| ------- | ---------- | --------- | ---------------- |
| 10      | Marketing  | M         | Manager          |
| 20      | Management | S         | Supervisor       |
| 30      | Sales      | s         | Security Officer |
| 40      | Designing  | C         | Clerk            |
Example:
If input given is
Employee Id
: 101
Dept No
: 30
Designation Code
: M
Then output should be:
Employee with employee id 101 is working in "Sales" department as "Manager".
*/

#include <stdio.h>

int main() {
    int empId, deptNo;
    char dsgnCode;

    printf("Enter Employee ID: ");
    scanf("%d", &empId);

    printf("Enter Department No: ");
    scanf("%d", &deptNo);
 
    printf("Enter Designation Code: ");
    scanf(" %c", &dsgnCode);  

    char deptName[20], designation[30];

    switch(deptNo) {
        case 10:
            sprintf(deptName, "Marketing");
            break;
        case 20:
            sprintf(deptName, "Management");
            break;
        case 30:
            sprintf(deptName, "Sales");
            break;
        case 40:
            sprintf(deptName, "Designing");
            break;
        default:
            printf("Invalid Department Number!\n");
            return 0;
    }

    switch(dsgnCode) {
        case 'M':
            sprintf(designation, "Manager");
            break;
        case 'S':
            sprintf(designation, "Supervisor");
            break;
        case 's':
            sprintf(designation, "Security Officer");
            break;
        case 'C':
            sprintf(designation, "Clerk");
            break;
        default:
            printf("Invalid Designation Code!\n");
            return 0;
    }

    printf("\nEmployee with ID %d is working in \"%s\" department as \"%s\".\n",
            empId, deptName, designation);
    return 0;
}