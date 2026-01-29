class Logic {
    void countFactors(int num) {
        int count = 0;
        for (int i = 1; i <= num; i++) {
            if (num % i == 0) {
                count++;
            }
        }
        System.out.println("Total number of factors for " + num + " is: " + count);
    }
}
