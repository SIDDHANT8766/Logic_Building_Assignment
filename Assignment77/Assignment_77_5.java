import java.util.*;

class Assignment_77_5
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Rows = 0;
        int Cols = 0;
        int RequestedSeats = 0;
        int AlreadyBooked = 0;

        float SeatPrice = 0.0f;
        float TotalCost = 0.0f;

        System.out.println("Enter total rows : ");
        Rows = sobj.nextInt();

        System.out.println("Enter total columns : ");
        Cols = sobj.nextInt();

        System.out.println("Enter already booked seats count : ");
        AlreadyBooked = sobj.nextInt();

        System.out.println("Enter requested seats count : ");
        RequestedSeats = sobj.nextInt();

        if(Rows <= 0 || Cols <= 0 || RequestedSeats <= 0)
        {
            System.out.println("Invalid input ");
            return;
        }

        int TotalSeats = Rows * Cols;
        int AvailableSeats = TotalSeats - AlreadyBooked;

        if(RequestedSeats > AvailableSeats)
        {
            System.out.println("Booking Failed - Not enough seats");
            return;
        }

        // Row pricing (simple logic)
        SeatPrice = 200;   // assume base price

        TotalCost = RequestedSeats * SeatPrice;

        // Group discount
        if(RequestedSeats >= 6)
        {
            float Discount = TotalCost * 0.10f;
            TotalCost = TotalCost - Discount;
        }

        AvailableSeats = AvailableSeats - RequestedSeats;

        System.out.println("Booking Successful");
        System.out.println("Total Cost : " + TotalCost);
        System.out.println("Remaining Seats : " + AvailableSeats);
    }
}