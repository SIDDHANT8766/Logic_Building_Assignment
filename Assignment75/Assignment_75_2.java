// quik bank loan (eligible)

import java.util.Scanner;

class Assignment_75_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Age = 0;
        int Income = 0;
        int CreditScore = 0;
        String ExistingLoan = null;
        
        System.out.println("Enter your Age : ");
        Age = sobj.nextInt();
        
        System.out.println("Enter your monthly income : ");
        Income = sobj.nextInt();
        
        System.out.println("Enter your Credit Score : ");
        CreditScore = sobj.nextInt();
        
        System.out.println("Existing Unpaid Loan : (Yes/No) ");
        ExistingLoan = sobj.next();

        if(Age < 0 || Income < 0 || CreditScore < 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        if((!(ExistingLoan.equalsIgnoreCase("Yes"))) &&
            (!(ExistingLoan.equalsIgnoreCase("No"))))
        {
            System.out.println("Invalid Input");
            return;   
        }

        if(Age < 21 || Age > 60)
        {
            System.out.println("Loan Rejected : Age is not satisfy");
        }
        else if(Income < 2500)
        {
            System.out.println("Loan Rejected : Income is not satisfy");
        }
        else if(CreditScore < 700)
        {
            System.out.println("Loan Rejected : Credit Score is not satisfy");   
        }
        else if(ExistingLoan.equalsIgnoreCase("Yes"))
        {
            System.out.println("Loan Rejected : Already a loan unpaid");  
        }
        else 
        {
            System.out.println("Loan Approved");
        }

        sobj.close();
    }
}