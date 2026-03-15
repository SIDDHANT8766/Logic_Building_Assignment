import java.util.*;

class Assignment_77_4
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Units = 0;
        int WeeksLate = 0;

        float BillAmount = 0.0f;
        float Penalty = 0.0f;

        System.out.println("Enter water units : ");
        Units = sobj.nextInt();

        System.out.println("Enter weeks late : ");
        WeeksLate = sobj.nextInt();

        if(Units < 0 || WeeksLate < 0)
        {
            System.out.println("Invalid input ");
            return;
        }

        // Progressive Slabs
        if(Units <= 100)
        {
            BillAmount = Units * 5;
        }
        else if(Units <= 300)
        {
            BillAmount = (100 * 5) + (Units - 100) * 8;
        }
        else
        {
            BillAmount = (100 * 5) + (200 * 8) + (Units - 300) * 10;
        }

        // Fixed meter charge
        BillAmount = BillAmount + 100;

        // Penalty (2% per week, max 10%)
        if(WeeksLate > 0)
        {
            float Rate = WeeksLate * 0.02f;

            if(Rate > 0.10f)
            {
                Rate = 0.10f;
            }

            Penalty = BillAmount * Rate;
            BillAmount = BillAmount + Penalty;
        }

        System.out.println("Final Water Bill : " + BillAmount);
    }
}