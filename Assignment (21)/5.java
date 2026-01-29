class Logic {
    void printDivisibleBy2and3(int n) {
        System.out.println("Numbers from 1 to " + n + " divisible by both 2 and 3 are:");
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0 && i % 3 == 0) {
                System.out.println(i);
            }
        }
    }
}

