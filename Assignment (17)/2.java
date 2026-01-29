class Logic
{
    void checkPalindrome(int num)
    {
        int original = num;
        int rev = 0;

        while(num != 0)
        {
            int digit = num % 10;
            rev = rev * 10 + digit;
            num = num / 10;
        }

        if(original == rev)
        {
            System.out.println(original + " is a Palindrome number");
        }
        else
        {
            System.out.println(original + " is NOT a Palindrome number");
        }
    }
}

class Program
{
    public static void main(String args[])
    {
        Logic obj = new Logic();
        obj.checkPalindrome(121);
    }
}
