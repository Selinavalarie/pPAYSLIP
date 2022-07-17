#include <stdio.h>
#include <stdlib.h>

int main()
{
    char name[100];
    int normalpay, overtimepay, taxpaid, netincome, emplnumber, hrswrkd, krapin;
    int hrsworked = 40;

    printf("\tGITONGA'S FACTORY PAYROLL!\n");

    printf("Enter your name :");
    scanf("%s", &name);

    printf("Enter emplnumber :");
    scanf("%d", &emplnumber);

    printf("enter krapin :");
    scanf("%d", &krapin);

    printf("Enter hours worked :");
    scanf("%d", &hrswrkd);

    normalpay = 1000 * hrsworked;

    overtimepay = (hrswrkd - hrsworked) * 1500;

    taxpaid =  30*normalpay/100;

    netincome = (normalpay - taxpaid) + overtimepay;

    printf("normalpay %d\n", normalpay);

    printf("overtimepay %d\n",overtimepay);

    printf("taxpaid %d\n", taxpaid);

    printf("netincome %d\n", netincome);
    return 0;
}
