// warehous product stock (request puchase)

import java.util.Scanner;

class Assignment_75_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Current_Stock = 0;
        int Request_Quantity = 0;
        int iCal = 0;

        System.out.println("Enter the total stock : ");
        Current_Stock = sobj.nextInt();

        System.out.println("Enter the request quantity : ");
        Request_Quantity = sobj.nextInt();

        if(Current_Stock < 0 || Request_Quantity < 0)
        {
            System.out.println("Invalide Input");
        }

        if(Request_Quantity > Current_Stock)
        {
            System.out.println("Order Failed : Insufficient Stock");
        }
        else if(Request_Quantity < Current_Stock)
        {
            System.out.println("Order Processed Successfully");
            iCal = Current_Stock - Request_Quantity;
            System.out.println("Remaining Stock : "+iCal);

            if(iCal < 5)
            {
                System.out.println("Low Stock Alert");
            }
        }

        
        sobj.close();
    }
}