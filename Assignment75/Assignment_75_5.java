// Tax portal

import java.util.Scanner;

class Assignment_75_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter Annual Income: ");
        int income = sobj.nextInt();

        if(income < 0)
        {
            System.out.println("Income cannot be negative!");
            return;
        }

        float tax = 0;

        if(income <= 250000)
        {
            tax = 0;
        }
        else if(income <= 500000)
        {
            tax = (income - 250000) * 0.05f;
        }
        else if(income <= 1000000)
        {
            tax = (250000 * 0.05f) + (income - 500000) * 0.20f;
        }
        else
        {
            tax = (250000 * 0.05f) + (500000 * 0.20f) + (income - 1000000) * 0.30f;
        }

        System.out.println("Annual Income : " + income);
        System.out.println("Total Tax Payable : " + tax);

        sobj.close();
    }
}