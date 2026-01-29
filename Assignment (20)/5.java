class Logic {
    void findSmallestDigit(int num) {
        int smallest = 9;
        int temp = num;
        while (temp > 0) {
            int digit = temp % 10;
            if (digit < smallest) {
                smallest = digit;
            }
            temp /= 10;
        }
        System.out.println("The smallest digit in " + num + " is: " + smallest);
    }
}

class Program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.findSmallestDigit(45872);
    }
}
