import java.util.*;

class Assignment_77_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Days = 0;
        String Ward_Type = null;
        int Roomchargech = 0;
        int Medicine_Bill = 0;
        int Consultation_Fee = 0;
        String Insured = null;

        System.out.println("Enter number of days you stay : ");
        Days = sobj.nextInt();

        System.out.println("Enter ward type you stay (Normal/ICU) : ");
        Ward_Type = sobj.next();

        System.out.println("Enter medicine bill of a day : ");
        Medicine_Bill = sobj.nextInt();

        System.out.println("Enter Consultation of a day : ");
        Consultation_Fee = sobj.nextInt();

        System.out.println("Enter the insured or not (Yes/No) : ");
        Insured = sobj.next();

        // Validations
        if(Days < 0  || Medicine_Bill < 0 || Consultation_Fee < 0 )
        {
            System.out.println("Invalid input ");
            return;
        }

        if(!(Ward_Type.equalsIgnoreCase("Normal")) &&
           !(Ward_Type.equalsIgnoreCase("ICU")))
        {
            System.out.println("Invalid ward type ");
            return;
        }

        if(!(Insured.equalsIgnoreCase("Yes")) &&
           !(Insured.equalsIgnoreCase("No")))
        {
            System.out.println("Invalid insurance input ");
            return;
        }

        // Room charges
        if(Ward_Type.equalsIgnoreCase("Normal"))
        {
            Roomchargech = Days * 2000;
        }
        else
        {
            Roomchargech = Days * 5000;
        }

        int TotalBill = Roomchargech + (Medicine_Bill * Days) + (Consultation_Fee * Days);

        float InsuranceCover = 0.0f;

        if(Insured.equalsIgnoreCase("Yes"))
        {
            float seventyPercent = TotalBill * 0.70f;

            if(seventyPercent < 50000)
            {
                InsuranceCover = seventyPercent;
            }
            else
            {
                InsuranceCover = 50000;
            }
        }

        float FinalBill = TotalBill - InsuranceCover;

        System.out.println("Total bill : " + TotalBill);
        System.out.println("Insurance applied : " + InsuranceCover);
        System.out.println("Final bill after insurance : " + FinalBill);
    }
}