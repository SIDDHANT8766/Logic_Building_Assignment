class Logic {
    void printDigits(int num) {
        // Write logic here
        if (num == 0) {
            System.out.println(0);
            return;
        }
        int temp = num;
        int reversedNum = 0;
        while (temp > 0) {
            int digit = temp % 10;
            reversedNum = reversedNum * 10 + digit;
            temp /= 10;
        }
        System.out.println("Digits of " + num + " are:");
        while (reversedNum > 0) {
            int digit = reversedNum % 10;
            System.out.println(digit);
            reversedNum /= 10;
        }
    }
}

