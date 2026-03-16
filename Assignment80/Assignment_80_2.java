import java.util.Scanner;

class Assignment_80_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in); 

        int N = 0;

        System.out.println("Enter the matrix size : ");
        N = sobj.nextInt();

        if(N <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int Arr[][] = new int[N][N]; 

        System.out.println("Enter the values of matrix : ");

        for(int i = 0; i < N; i++)
        {
            System.out.println("Enter for row : "+(i+1));

            for(int j = 0; j < N; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }

        // Display Matrix
        System.out.println("Matrix is : ");
        for(int i = 0; i < N; i++)
        {
            for(int j = 0; j < N; j++)
            {
                System.out.print(Arr[i][j]+"  ");
            }
            System.out.println();
        }

        // ------------------------------
        // Magic Square Logic
        // ------------------------------

        int sum = 0;

        // First row sum
        for(int j = 0; j < N; j++)
        {
            sum += Arr[0][j];
        }

        boolean isMagic = true;

        // Check row sums
        for(int i = 1; i < N; i++)
        {
            int rowSum = 0;

            for(int j = 0; j < N; j++)
            {
                rowSum += Arr[i][j];
            }

            if(rowSum != sum)
            {
                isMagic = false;
                break;
            }
        }

        // Check column sums
        for(int j = 0; j < N && isMagic; j++)
        {
            int colSum = 0;

            for(int i = 0; i < N; i++)
            {
                colSum += Arr[i][j];
            }

            if(colSum != sum)
            {
                isMagic = false;
                break;
            }
        }

        // Check diagonals
        int diag1 = 0;
        int diag2 = 0;

        for(int i = 0; i < N; i++)
        {
            diag1 += Arr[i][i];
            diag2 += Arr[i][N - 1 - i];
        }

        if(diag1 != sum || diag2 != sum)
        {
            isMagic = false;
        }

        // Final Output
        if(isMagic)
        {
            System.out.println("Matrix is a Magic Square");
        }
        else
        {
            System.out.println("Matrix is NOT a Magic Square");
        }

        sobj.close();
    }
}