
import java.util.Scanner;

/* 
3. A courier counter calculates delivery charge by weight. Charges increase when parcel is heavier.

Charges:
        - Up to 1 kg → 750
        - 1-5 kg → 750 + £20/kg above 1 kg
        - Above 5 kg → 7150 + $30/kg above 5 kg
Input:
        - Parcel weight in kg (integer)

Validations:
        - Weight must be > 0

Expected Output:
        - Parcel Weight: <weight> kg
        - Courier Charge: {<amount>

*/

class Assignment_76_3
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Weight = 0;
        int Charges = 0;

        System.out.println("Enter the weight :");
        Weight = sobj.nextInt();

        // Validation
        if(Weight <= 0)
        {
            System.out.println("Weight must be greater than 0");
            return;
        }

        // Charge calculation
        if(Weight <= 1)
        {
            Charges = 50;
        }
        else if(Weight <= 5)
        {
            Charges = 50 + ((Weight - 1) * 20);
        }
        else
        {
            Charges = 50 + (4 * 20) + ((Weight - 5) * 30);
        }

        System.out.println("Parcel Weight : " + Weight + " kg");
        System.out.println("Courier Charge : Rs." + Charges);

        sobj.close();
    }
}
