
import java.util.Scanner;

/* 
5. A phone OS shows different battery warnings. The user wants a program that prints the correct battery status.

Rules:
        - Battery ≤ 5% → Critical
        - Battery ≤ 15% → Low
        - Otherwise → Normal
        
Input:
        - Battery percentage (integer)

Validations:
        - 0 to 100 only

Expected Output:
        - Battery Percentage:〈value>%
        - Status: <Critical/Low/Normal>
*/

class Assignment_76_5
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Battery = 0;

        System.out.println("Enter the Battery charged :");
        Battery = sobj.nextInt();

        // Validation
        if(Battery <= 0 || Battery >= 100)
        {
            System.out.println("Battery must be greater than 0 and less than 100");
            return;
        }

        // Charge calculation
        if(Battery <= 5)
        {
            System.out.println("Batterry Percentage : "+Battery+" %");
            System.out.println("Status : Critical");
        }
        else if(Battery <= 15)
        {
            System.out.println("Batterry Percentage : "+Battery+" %");
            System.out.println("Status : Low");
        }
        else
        {
            System.out.println("Batterry Percentage : "+Battery+" %");
            System.out.println("Status : Normal");
        }

        sobj.close();
    }
}
