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
        int i = 0;
        int j = 0;
        Scanner sobj = new Scanner(System.in);

        System.out.println("Enter the elements of Matrix : ");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                Arr[i][j] = sobj.nextInt();
            }
        }
    }

    public void Display()
    {
        int i = 0;
        int j = 0;

        System.out.println("Matrix is like :");

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                System.out.print(Arr[i][j]+"\t");
            }

            System.out.println();
        }
    }

    public int Frequency(int no)
    {
        int fCount = 0;
        int i,j = 0;

        for(i = 0; i < iRow; i++)
        {
            for(j = 0; j < iCol; j++)
            {
                if(Arr[i][j] == no)
                {
                    fCount = fCount + 1; 
                }
            }
        }

        return fCount;
    }
}

class Assignment_72_2
{
    public static void main(String A[]) 
    {
        Scanner asobj = new Scanner(System.in);

        int Row = 0;
        int Col = 0;
        int iNo = 0;

        int iRet = 0;

        System.out.println("Enter the Rows :");
        Row = asobj.nextInt();

        System.out.println("Enter the Column :");
        Col = asobj.nextInt();

       

        Matrix mobj = new Matrix(Row,Col);

        mobj.Accept();
        mobj.Display();

        System.out.println("Enter the searching number :");
        iNo = asobj.nextInt();
        
        iRet = mobj.Frequency(iNo);
        System.out.println("Frequency is :"+iRet);
    }

}