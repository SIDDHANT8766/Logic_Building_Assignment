import java.util.*;

class Assignment_77_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Mins = 0;
        int GB = 0;
        int SMS = 0;

        System.out.println("Enter call minutes : ");
        Mins = sobj.nextInt();

        System.out.println("Enter data usage in GB : ");
        GB = sobj.nextInt();

        System.out.println("Enter SMS count : ");
        SMS = sobj.nextInt();

        if(Mins < 0 || GB < 0 || SMS < 0)
        {
            System.out.println("Invalid input ");
            return;
        }

        // Plan 1
        int Plan1 = 199;
        if(Mins > 300)
            Plan1 = Plan1 + (Mins - 300) * 1;
        if(GB > 2)
            Plan1 = Plan1 + (GB - 2) * 10;
        if(SMS > 100)
            Plan1 = Plan1 + (SMS - 100) * 1;

        // Plan 2
        int Plan2 = 399;
        if(Mins > 600)
            Plan2 = Plan2 + (Mins - 600) * 1;
        if(GB > 5)
            Plan2 = Plan2 + (GB - 5) * 10;
        if(SMS > 300)
            Plan2 = Plan2 + (SMS - 300) * 1;

        // Plan 3
        int Plan3 = 599;
        if(Mins > 1000)
            Plan3 = Plan3 + (Mins - 1000) * 1;
        if(GB > 10)
            Plan3 = Plan3 + (GB - 10) * 10;
        if(SMS > 500)
            Plan3 = Plan3 + (SMS - 500) * 1;

        // Plan 4
        int Plan4 = 799;

        int MinCost = Plan1;
        String Recommended = "Plan 1";

        if(Plan2 < MinCost)
        {
            MinCost = Plan2;
            Recommended = "Plan 2";
        }
        if(Plan3 < MinCost)
        {
            MinCost = Plan3;
            Recommended = "Plan 3";
        }
        if(Plan4 < MinCost)
        {
            MinCost = Plan4;
            Recommended = "Plan 4";
        }

        System.out.println("Recommended Plan : " + Recommended);
        System.out.println("Total Cost : " + MinCost);
    }
}