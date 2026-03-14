
import java.util.Scanner;

/* 
2. A scholarship committee uses a strict checklist. Only students who meet all academic and financial
     conditions qualify.

Conditions:
        - Marks ≥ 80%
        - Attendance ≥ 75%
        - Family income ≤ 73,00,000
Input:
        - Marks percent (integer)
        - Attendance percent (integer)
        - Family income (integer)

Validations:
        - Marks and attendance must be 0-100
        - Income cannot be negative

Expected Output:

        - Scholarship Approved
          OR
        - Scholarship Rejected: <Reason>

*/

class Assignment_76_2
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Marks = 0;
        int Attendence = 0;
        int Family_Income = 0;

        System.out.println("Enter the marks : ");
        Marks = sobj.nextInt();
        
        System.out.println("Enter the Attendence : ");
        Attendence = sobj.nextInt();
        
        System.out.println("Enter the Family income : ");
        Family_Income = sobj.nextInt();

        if((Marks < 0 || Marks > 100) && (Attendence < 0 || Attendence > 100))
        {
            System.out.println("Invalid input");
        }
        else if(Family_Income < 0)
        {
            System.out.println("Invalid Income");
        }

        if(Marks < 80)
        {
            System.out.println("\nScholarship Rejected : Marks is less");
        }
        else if(Attendence < 75)
        {
            System.out.println("\nScholarship Rejected : Attendence is less");   
        }
        else if(Family_Income > 300000)
        {
           System.out.println("\nScholarship Rejected : Family income is high");   
        }
        else 
        {
            System.out.println("\nScholarship Approved");
        }

        sobj.close();
    }
}
