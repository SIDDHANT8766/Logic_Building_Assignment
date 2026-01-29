class Logic
{
    void reverseNumber(int num)
    {
        int rev = 0;
        while(num != 0)
        {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }
        System.out.println("Reversed number is: " + rev);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.reverseNumber(1234);
    }
}

