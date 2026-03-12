import java.util.Scanner;

class Matrix
{
    public int iRow;
    public int iCol;
    public int Arr[][];

    public Matrix(int a, int b)
    {
        iRow = a;
        iCol = b;
        Arr = new int[iRow][iCol];
    }

    public void Accept()
    {
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of Matrix : ");

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        System.out.println("Matrix is like :");

        for(int i = 0; i < iRow; i++)
        {
            for(int j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j] + "\t");
            }
            System.out.println();
        }
    }

    // Method to swap two rows
    public void SwitchRow(int r1, int r2)
    {
        if(r1 >= iRow || r2 >= iRow || r1 < 0 || r2 < 0)
        {
            System.out.println("Invalid row numbers!");
            return;
        }

        for(int j = 0; j < iCol; j++)
        {
            int temp = Arr[r1][j];
            Arr[r1][j] = Arr[r2][j];
            Arr[r2][j] = temp;
        }

        System.out.println("Rows swapped successfully.");
    }
}

class Assignment_72_5
{
    public static void main(String A[])
    {
        Scanner asobj = new Scanner(System.in);

        System.out.println("Enter the number of Rows :");
        int Row = asobj.nextInt();

        System.out.println("Enter the number of Columns :");
        int Col = asobj.nextInt();

        Matrix mobj = new Matrix(Row, Col);

        mobj.Accept();

        System.out.println("\nOriginal Matrix:");
        mobj.Display();

        System.out.println("\nEnter first row to swap (0-based index): ");
        int r1 = asobj.nextInt();

        System.out.println("Enter second row to swap (0-based index): ");
        int r2 = asobj.nextInt();

        mobj.SwitchRow(r1, r2);

        System.out.println("\nMatrix after swapping rows:");
        mobj.Display();
    }
}