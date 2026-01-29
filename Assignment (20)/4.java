class Logic {
    void findLargestDigit(int num) {
        int largest = 0;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit > largest) {
                largest = digit;
            }
            temp /= 10;
        }
        System.out.println("The largest digit in " + num + " is: " + largest);
    }
}

class Program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.findLargestDigit(83429);
    }
}
