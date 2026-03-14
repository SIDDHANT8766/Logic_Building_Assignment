
import java.util.Scanner;

/*
 4. A customer enters a store with a fixed budget. They pick items one by one in a given order.    
        The cashier wants to know how many items can be purchased before money becomes insufficient. 
        
 Input: 
        - Budget amount 
        - Number of items N 
        - N item prices 
        
 Validations: 
        • Budget ≥ 0 
        • N≥0 
        • Each price > 0 
    
 Expected Output: 
        - Items Purchased: <count> 
        - Remaining Balance: F<amount> 

*/

class Assignment_76_4
{
    public static void main(String A[]) 
    {
        Scanner sobj = new Scanner(System.in);

        int Budget = 0;
        int N = 0;
        int count = 0;

        System.out.println("Enter the Budget :");
        Budget = sobj.nextInt();

        System.out.println("Enter number of items :");
        N = sobj.nextInt();

        if(Budget < 0 || N < 0)  // Validations
        {
            System.out.println("Invalid input");
            return;
        }

        int Remaining = Budget;     // To Count

        System.out.println("Enter the price of each item :");

        for(int i = 1; i <= N; i++)
        {
            int price = sobj.nextInt();

            if(price <= 0)
            {
                System.out.println("Invalid price");
                return;
            }

            if(Remaining >= price)
            {
                Remaining = Remaining - price;
                count++;
            }
            else
            {
                break;   // stop purchasing
            }
        }

        System.out.println("Items Purchased : " + count);
        System.out.println("Remaining Balance : Rs." + Remaining);

        sobj.close();
    }
}
