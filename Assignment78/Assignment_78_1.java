import java.util.*;

class Assignment_78_1
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Total_Days = 0;
        int Bill = 0;
        
        System.out.println("Ehter how many days you stay : ");
        Total_Days = sobj.nextInt();

        if(Total_Days < 0)
        {
            System.out.println("Invalid input");
            return;
        }

        Bill = Total_Days * 3000;

        float Discount_Bill = 0.0f;

        if(Total_Days > 7)
        {
            Discount_Bill = (Total_Days * 3000) * 0.05f;
        }

        float Final_Bill = Bill - Discount_Bill;

        System.out.println("Total Stay Duration : "+Total_Days);
        System.out.println("Final Bill Amount : "+Final_Bill);
    }
}