
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
int menu();
void diposite();
void transfer();
void withdraw();
void checkdetail();
void last();
int totalAmount = 1000, amount, amo, tr, TotalDiposite = 0, TotalWith = 0, TotalTr = 0;
int Acc;
char a[50];
void main()
{ 
    // clrscr();
    printf("\nEnter your name: ");
    gets(a);
    printf("\nEnter your account number: ");
    scanf("%d", &Acc);
    while (1)
    {
        // clrscr();
        switch (menu()) // list calling
        {
        case 1:
            diposite(); //diposite calling
            TotalDiposite += amount;
            break;
        case 2:
            withdraw(); // withdraw calling
            if (amo <= totalAmount)
            {
                TotalWith += amo;
            }
            break;
        case 3:
            transfer(); // transfer calling
            if (tr <= totalAmount)
            {
                TotalTr += tr;
            }
            break;
        case 4:
            checkdetail(); // checkdetail calling
            break;
        case 5:
            // clrscr();
            last();
            getch();
            exit(0);
            break;
        default:
            printf("\n invalid:id chose");
        } // switch end
        getch();
    } // loop end
} // main-end

// list Function define
int menu()
{
    int ch;
    printf("\n1.Diposite Amount: ");
    printf("\n2.withdraw Amount: ");
    printf("\n3.Transfer Amount: ");
    printf("\n4.check details: ");
    printf("\n5.Exit: ");
    printf("\nEnter your choice: ");
    scanf("%d", &ch);
    return ch;
}
// diposite function define
void diposite()
{
    printf("\nEnter the amount you want to diposite: ");
    scanf("%d", &amount);
    totalAmount += amount;
}
// withdraw function
void withdraw()
{
    printf("Enter the amount u wish to withdraw: ");
    scanf("%d", &amo);
    if (amo <= totalAmount)
        totalAmount -= amo;
    else
        printf("\nless amount withdraw is not possible");
}
//  transfer function
void transfer()
{
    printf("\nEnter the amount u want to transfer: ");
    scanf("%d", &tr);
    if (tr <= totalAmount)
        totalAmount -= tr;
    else
        printf("\n Amount transfer is not possible");
}
// checkdetail function
void checkdetail()
{
    printf("\nTotal amount = %d", totalAmount);
    printf("\nTotal diposite amount %d", TotalDiposite);
    printf("\nTotal withdraw amount %d", TotalWith);
    printf("\nTotal Transfer amount %d", TotalTr);
}

// last function
void last()
{
    printf("\n****************************************\n");
    printf("\n your Name=%s", a);
    printf("\nAccount Number=%d", Acc);
    printf("\nTotal amount = %d", totalAmount);
    printf("\nTotal diposite amount %d", TotalDiposite);
    printf("\nTotal withdraw amount %d", TotalWith);
    printf("\nTotal Transfer amount %d", TotalTr);
    printf("\n\n**********thanks******");
}