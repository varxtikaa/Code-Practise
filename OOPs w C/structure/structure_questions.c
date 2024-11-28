/*
Design a structure for a bank account with fields for the account holder's name, account number, 
and balance. Implement functions for deposit and withdrawal.*/
#include<stdio.h>
struct account
{
    char acc_holder_name[50];
    int acc_no;
    float balance;
};
int Deposit(struct account a1,int amt)
{  
    a1.balance+=amt;
    printf("Balance: %.2f",a1.balance);
    return 0;
}
int Withdrawal(struct account a1,int amt)
{  
    a1.balance-=amt;
    printf("Balance: %.2f",a1.balance);
    return 0;
}
int main()
{
    struct account a;
    int amount;
    int ch;
    printf("Enter Account holder name:\n");
    fgets(a.acc_holder_name,50,stdin);
    printf("Enter Account number and Balance:\n");
    scanf("%d %.2f",&a.acc_no,&a.balance);
    while (getchar() != '\n');
    printf("Enter 1 for Deposit\nEnter 2 for Withdrawal\n");
    while (getchar() != '\n');
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:
        printf("Enter the amount you want to deposit: ");
        scanf("%d",&amount);
        Deposit(a,amount);
        break;
        case 2:
        printf("Enter the amount you want to withdrawal: ");
        scanf("%d",&amount);
        Withdrawal(a,amount);
        break;
        default:
        printf("Invalid Input");
        break;
    }
}