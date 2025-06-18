#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void balance();
void credit();
void phone();
void transfer();
void con();
void main()
{
    int i, k, b, pint, p;
    char pst[30], v[30], name[30], a[6], u[20];
    printf("*WELCOME TO SBI INTERNET BANKING\n\n");
    printf("USER NAME : ");
    scanf("%s", name);
    printf("PASSWORD (IN DIGITS): ");
    scanf("%d", &pint);
    printf("Press'yes'to enable online transactions: \n");
    scanf("%s", &a);
    i = strcmp(a, "yes");
    if (i == 0)
    {
        printf("Account verified..!");
    }
    else
    {
        printf("Online transactions declined..!");
    }
label1:
{
    printf("\n**HOME PAGE*");
    printf("\nWELCOME %s TO THE SBI SERVICES", name);
    printf("\n1.Check balance \n2.Credit/Debit card number \n3.Link phone number\n4.Transfer money\n5.Customer service\nNote: Enter digits only.");
    printf("\n\nEnter the options : ");
    scanf("%d", &b);
}
    switch (b)
    {
    case 1:
        balance();
        printf("\nPress 'back' to main menu:");
        scanf("%s", v);
        k = strcmp(v, "back");
        if (k == 0)
        {
            goto label1;
        }
        break;
    case 2:
        credit();
        printf("\nPress 'back' to main menu:");
        scanf("%s", u);
        p = strcmp(u, "back");
        if (p == 0)
        {
            goto label1;
        }
        break;
    case 3:
        phone();

  break;
    case 4:
        transfer();
        break;
    case 5:

        break;
    default:
        printf("Invalid operation");
        break;
    }
    printf("\n\n");
    printf("Contact us|About us|Privacy & Policy |Agree&Continue|Terms&Conditions|Trade mark™");
}
void balance()
{
    int n = 0, d;
    long int c;

    printf("");
    printf("*1.Check balance");
label:
{
    printf("\nEnter A/C number(11 digits only): ");
    scanf("%ld", &c);
}
    while (c > 0)
    {
        n++;
        c = c / 10;
    }
    if (n != 11)
    {
        printf("Entered A/C number is not valid ");
        goto label;
    }
    else
        printf("\nYour balance: 25,000/-");
}
void credit()
{
    int i, j, k, m;
    printf("Enter the Credit /Debit card number: ");
    scanf("%d", &i);
    printf("Enter valid (MM/YY): ");
    scanf("%d/%d", &j, &k);
    printf("Enter CVV (THREE DIGITS ONLY.): ");
    scanf("%d", &m);
}
void phone()
{
    int i = 0, a[12],n=0,v=0;
    long int c;
label:
{
    printf("\nEnter A/C number(11 digits only): ");
    scanf("%ld", &c);
}
    while (c > 0)
    {
        n++;
        c = c / 10;
    }
    if (n != 11)
    {
        printf("Entered A/C number is not valid ");
        goto label;
    }
    printf("Enter the mobile number: ");
    for(i=0;i<10;i++)
    {
    scanf("%d", &a[i]);
    }
    printf("We shortly sent message to %d%d%dxxxxx%d%d", a[0], a[1], a[2], a[8], a[9]);
}
void transfer()
{
    int a, b;
    long int n, c;
    printf("1.Transfer to mobile number\n2.To Self Bank\n3.SBI WALLET");
    printf("\nEnter the options (digits only): ");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
        printf("Enter the mobile number: ");
        break;
    case 2:
       con();
         printf("Enter the amount : ");
        scanf("%d", &b);
        printf("The Amount %d/- is credited in your account.", b);
        char h[5]="back";
        printf ("press 'back' to main menu");
        scanf("%s",h);
        int t;
        
        t=strcmp("back",h);
        if(t==0)
        {
            
        }
break;
case 3:

break;
default :
printf("Invalid operator ");
break;
}
    }
    void con()
    {
        long int c,n;
    label:
    {
        printf("\nEnter A/C number(11 digits only): ");
        scanf("%ld", &c);
    }
        while (c > 0)
        {
            n++;
            c = c / 10;
        }
    
         if(n != 11)
        {
            printf("Entered A/C number is not valid ");
            goto label;
        }
    }    
