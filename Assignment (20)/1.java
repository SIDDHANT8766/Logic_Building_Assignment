class Logic {
    void sumEvenNumbers(int n) {
        int sum = 0;
        for (int i = 2; i <= n; i += 2) {
            sum += i;
        }
        System.out.println("Sum of even numbers up to " + n + " is: " + sum);
    }
}

class Program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.sumEvenNumbers(10);
    }
}
