class Logic {
    void calculatePower(int base, int exp) {
        // Write logic here
        long result = 1;
        for (int i = 0; i < exp; i++) {
            result *= base;
        }
        System.out.println(base + " to the power of " + exp + " is " + result);
    }
}

