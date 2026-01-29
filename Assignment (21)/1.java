class Logic {
    void productOfDigits(int num) {
        int product = 1;
        while (num > 0) {
            int digit = num % 10;
            product = product * digit;
            num = num / 10;
        }
        System.out.println("Product of digits is: " + product);
    }
}
