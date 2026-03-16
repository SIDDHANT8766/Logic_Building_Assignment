import java.util.Scanner;

class WarehouseRobot
{
    public static boolean findPath(int[][] grid, int i, int j, int R, int C)
    {
        // If out of bounds
        if(i >= R || j >= C)
        {
            return false;
        }

        // If obstacle found
        if(grid[i][j] == -1)
        {
            return false;
        }

        // If destination reached
        if(i == R-1 && j == C-1)
        {
            return true;
        }

        // Move Right OR Down
        return findPath(grid, i, j+1, R, C) || 
               findPath(grid, i+1, j, R, C);
    }

    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int R = sobj.nextInt();
        int C = sobj.nextInt();

        // Validations
        if(R <= 0 || C <= 0)
        {
            System.out.println("Invalid Input");
            return;
        }

        int[][] grid = new int[R][C];

        for(int i = 0; i < R; i++)
        {
            for(int j = 0; j < C; j++)
            {
                grid[i][j] = sobj.nextInt();

                if(grid[i][j] != 0 && grid[i][j] != -1)
                {
                    System.out.println("Invalid Input");
                    return;
                }
            }
        }

        // Check if start or end blocked
        if(grid[0][0] == -1 || grid[R-1][C-1] == -1)
        {
            System.out.println("No Path Found");
            return;
        }

        boolean result = findPath(grid, 0, 0, R, C);

        if(result)
        {
            System.out.println("Path Available");
        }
        else
        {
            System.out.println("No Path Found");
        }

        sobj.close();
    }
}