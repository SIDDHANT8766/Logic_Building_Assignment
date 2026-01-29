class Logic {
    void sumEvenOddDigits(int num) {
        int evenSum = 0;
        int oddSum = 0;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit % 2 == 0) {
                evenSum += digit;
            } else {
                oddSum += digit;
            }
            temp /= 10;
        }
        System.out.println("Original number: " + num);
        System.out.println("Sum of even digits: " + evenSum);
        System.out.println("Sum of odd digits: " + oddSum);
    }
}

class Program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.sumEvenOddDigits(123456);
    }
}
