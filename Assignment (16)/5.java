class Logic
{
    void countDigits(int num)
    {
        int count = 0;
        while(num != 0)
        {
            count++;
            num = num / 10;
        }
        System.out.println("Number of digits: " + count);
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.countDigits(7865);
    }
}
