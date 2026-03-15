import java.util.*;

class Assignment_78_3
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int Steps[] = new int[7];
        int i = 0;
        int GoalAchievedDays = 0;
        int MaxSteps = 0;

        System.out.println("Enter steps for 7 days : ");

        for(i = 0; i < 7; i++)
        {
            Steps[i] = sobj.nextInt();

            if(Steps[i] < 0)
            {
                System.out.println("Invalid input ");
                return;
            }

            // Goal = 10000 steps
            if(Steps[i] >= 10000)
            {
                GoalAchievedDays++;
            }

            if(i == 0 || Steps[i] > MaxSteps)
            {
                MaxSteps = Steps[i];
            }
        }

        System.out.println("Goal Achieved Days : " + GoalAchievedDays);
        System.out.println("Maximum Steps in Week : " + MaxSteps);
    }
}