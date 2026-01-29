class Logic {
    void printEvenNumbers(int n) {
        System.out.println("Even numbers up to " + n + ":");
        for (int i = 1; i <= n; i++) {
            if (i % 2 == 0) {
                System.out.println(i);
            }
        }
    }
}

class Program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.printEvenNumbers(20);
    }
}
