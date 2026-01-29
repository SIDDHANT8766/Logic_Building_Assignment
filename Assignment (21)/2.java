class Logic {
    void countEvenOddRange(int n) {
        int evenCount = 0;
        int oddCount = 0;
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                evenCount++;
            } else {
                oddCount++;
            }
        }
        System.out.println("Even numbers: " + evenCount);
        System.out.println("Odd numbers: " + oddCount);
    }
}

