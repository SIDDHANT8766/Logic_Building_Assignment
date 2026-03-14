// Shoping mall parking (hours)


import java.util.Scanner;

class Assignment_75_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int ParkHours = 0;
        int Charges = 0;

        System.out.println("Enter total number of hours parked : ");
        ParkHours = sobj.nextInt();

        if(ParkHours < 0)
        {
            System.out.println("Inavlid number of hours");
            return;
        }

        if(ParkHours <= 2 && ParkHours > 0)
        {
            Charges = 20;
        }
        else if(ParkHours > 2 && ParkHours <= 10)
        {
            Charges = (20) + ((ParkHours - 2) * 10);
        }
        else if(ParkHours > 10)
        {
            Charges = (20) + (8 * 10) + (50);
        }

        System.out.println("Total Parking Duration : "+ParkHours+" hours");
        System.out.println("Total Parking Fee : "+Charges);

        sobj.close();
    }
}