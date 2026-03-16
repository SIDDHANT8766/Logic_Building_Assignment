import java.util.Scanner;

class Assignment_79_1
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the nymber of student : ");
        int N = sc.nextInt();   // Number of students

        System.out.println("Enter the number of subjects : ");
        int M = sc.nextInt();   // Number of subjects

        // Validations
        if(N <= 0 || M <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int[][] marks = new int[N][M];

        System.out.println("Enter the marks of each subject : ");

        // Input marks
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                marks[i][j] = sc.nextInt();

                if(marks[i][j] < 0 || marks[i][j] > 100)
                {
                    System.out.println("Invalid Input");
                    return;
                }
            }
        }

        int[] total = new int[N];
        int topperIndex = 0;

        // Calculate total marks of each student
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                total[i] = total[i] + marks[i][j];
            }

            if(total[i] > total[topperIndex])
            {
                topperIndex = i;
            }
        }

        // Output Section
        System.out.println("Student Totals:");
        for(int i = 0; i < N; i++)
        {
            System.out.println("Student " + (i+1) + ": " + total[i]);
        }

        System.out.println("Topper: Student " + (topperIndex+1));

        // Subject Averages
        System.out.println("Subject Averages:");
        for(int j = 0; j < M; j++)
        {
            double sum = 0;

            for(int i = 0; i < N; i++)
            {
                sum += marks[i][j];
            }

            double avg = sum / N;
            System.out.printf("Subject %d: %.2f\n", (j+1), avg);
        }

        // Students Failed
        System.out.println("Students Failed:");
        boolean found = false;

        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < M; j++)
            {
                if(marks[i][j] < 35)
                {
                    System.out.println("Student " + (i+1));
                    found = true;
                    break;
                }
            }
        }

        sc.close();
    }
}