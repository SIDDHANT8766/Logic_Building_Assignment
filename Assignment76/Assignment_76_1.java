
import java.util.Scanner;

/* 
1. A ride-hailing app calculates trip fare based on distance and whether the trip happened during peak hours.
    Peak hours increase demand, so surcharge applies.

Rules:
        - Base fare Rs.50
        - First 10 km → Rs.12 per km
        - Beyond 10 km → Rs.15 per km
        - Peak hours → 20% extra on total fare

Input:
        - Distance in km (integer)
        - Peak hour (Yes/No)

Validations:
        - Distance cannot be negative

Expected Output:
        - Distance: <km> km
        - Peak Hour: <Yes/No>
        - Total Fare: F<amount>

*/

class Assignment_76_1 
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Distance = 0;
        float Fare = 0.0f;
        String PeakHours = null;

        System.out.println("Enter how much km you ride : ");
        Distance = sobj.nextInt();

        System.out.println("Is it peak hours : (Yes/No ");
        PeakHours = sobj.next();

        if(Distance < 0)
        {
            System.out.println("Distance not be -ve");
            return;
        }

        if(Distance <= 10)
        {
            Fare = 50 + (Distance * 12);
        }
        else if(Distance > 10)
        {
            Fare = 50 + (10 * 12) + ((Distance - 10) * 15);
        }

        if(PeakHours.equalsIgnoreCase("Yes"))
        {
            Fare = (float)Fare + (float)(Fare * 0.2);
        }

        System.out.println("Distance : "+ Distance +"km");
        System.out.println("Peak housr : "+PeakHours);
        System.out.println("Total Fare : "+Fare);

        sobj.close();
    }  
}
