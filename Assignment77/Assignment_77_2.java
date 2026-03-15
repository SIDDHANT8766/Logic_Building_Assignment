import java.util.*;

class Assignment_77_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Distance = 0;
        String ClassType = null;
        int BookingHoursBefore = 0;
        int Age = 0;

        float BaseFare = 0.0f;
        float ClassCharge = 0.0f;
        float TatkalCharge = 0.0f;
        float SeniorDiscount = 0.0f;

        System.out.println("Enter distance in KM : ");
        Distance = sobj.nextInt();

        System.out.println("Enter class type (Sleeper/3AC/2AC) : ");
        ClassType = sobj.next();

        System.out.println("Enter booking hours before journey : ");
        BookingHoursBefore = sobj.nextInt();

        System.out.println("Enter age : ");
        Age = sobj.nextInt();

        // Validations
        if(Distance < 0 || BookingHoursBefore < 0 || Age < 0)
        {
            System.out.println("Invalid input ");
            return;
        }

        if(!(ClassType.equalsIgnoreCase("Sleeper")) &&
           !(ClassType.equalsIgnoreCase("3AC")) &&
           !(ClassType.equalsIgnoreCase("2AC")))
        {
            System.out.println("Invalid class type ");
            return;
        }

        // Base fare calculation (Distance Slabs)
        if(Distance <= 100)
        {
            BaseFare = Distance * 2;
        }
        else if(Distance <= 500)
        {
            BaseFare = Distance * 5;
        }
        else
        {
            BaseFare = Distance * 8;
        }

        // Class charges
        if(ClassType.equalsIgnoreCase("Sleeper"))
        {
            ClassCharge = 200;
        }
        else if(ClassType.equalsIgnoreCase("3AC"))
        {
            ClassCharge = 500;
        }
        else
        {
            ClassCharge = 800;
        }

        float TotalFare = BaseFare + ClassCharge;

        // Tatkal charge
        if(BookingHoursBefore <= 24)
        {
            TatkalCharge = TotalFare * 0.30f;
            TotalFare = TotalFare + TatkalCharge;
        }

        // Senior citizen discount
        if(Age >= 60)
        {
            SeniorDiscount = TotalFare * 0.40f;
            TotalFare = TotalFare - SeniorDiscount;
        }

        // Output
        System.out.println("Base Fare : " + BaseFare);
        System.out.println("Class Charge : " + ClassCharge);
        System.out.println("Tatkal Charge : " + TatkalCharge);
        System.out.println("Senior Discount : " + SeniorDiscount);
        System.out.println("Final Fare : " + TotalFare);
    }
}