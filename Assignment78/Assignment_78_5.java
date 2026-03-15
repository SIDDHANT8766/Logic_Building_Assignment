import java.util.*;

class Assignment_78_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Minutes = 0;
        int TotalCharge = 0;

        System.out.println("Enter call duration in minutes : ");
        Minutes = sobj.nextInt();

        if(Minutes < 0)
        {
            System.out.println("Invalid input ");
            return;
        }

        if(Minutes <= 5)
        {
            TotalCharge = 0;
        }
        else if(Minutes <= 15)
        {
            TotalCharge = (Minutes - 5) * 1;
        }
        else
        {
            TotalCharge = (10 * 1) + (Minutes - 15) * 2;
        }

        System.out.println("Call Duration : " + Minutes + " minutes");
        System.out.println("Total Call Charge : ₹" + TotalCharge);
    }
}