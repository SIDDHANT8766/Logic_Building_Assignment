class Logic {
    void checkPerfect(int num) {
        int sum = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                if (i * i != num) {
                    sum += num / i;
                }
            }
        }
        if (sum == num && num > 1) {
            System.out.println(num + " is a perfect number.");
        } else {
            System.out.println(num + " is not a perfect number.");
        }
    }
}

class Program {
    public static void main(String args[]) {
        Logic obj = new Logic();
        obj.checkPerfect(6);
    }
}
