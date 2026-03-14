// Trafic police app

import java.util.Scanner;

class Assignmenmt_75_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int totalFine = 0;

        System.out.println("Helmet worn (Yes/No): ");
        String helmet = sobj.next();

        System.out.println("License available (Yes/No): ");
        String license = sobj.next();

        System.out.println("Overspeeding (Yes/No): ");
        String speed = sobj.next();

        // Validation
        if((!helmet.equalsIgnoreCase("Yes") && !helmet.equalsIgnoreCase("No")) ||
           (!license.equalsIgnoreCase("Yes") && !license.equalsIgnoreCase("No")) ||
           (!speed.equalsIgnoreCase("Yes") && !speed.equalsIgnoreCase("No")))
        {
            System.out.println("Invalid input! Please enter Yes or No only.");
            return;
        }

        // Fine calculation
        if(helmet.equalsIgnoreCase("No"))
        {
            totalFine = totalFine + 500;
        }

        if(license.equalsIgnoreCase("No"))
        {
            totalFine = totalFine + 1000;
        }

        if(speed.equalsIgnoreCase("Yes"))
        {
            totalFine = totalFine + 1500;
        }

        System.out.println("Total Fine Amount : " + totalFine);

        sobj.close();
    }
}