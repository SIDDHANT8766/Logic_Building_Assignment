import java.util.*;

class Assignment_78_2
{
    public static void main(String A[])
    {
        Scanner sobj = new Scanner(System.in);

        int N = 0;
        int i = 0;
        int j = 0;

        int ValidVotes = 0;
        int DuplicateVotes = 0;

        System.out.println("Enter number of votes : ");
        N = sobj.nextInt();

        if(N < 0)
        {
            System.out.println("Invalid input ");
            return;
        }

        int VoterIDs[] = new int[N];

        System.out.println("Enter voter IDs : ");

        for(i = 0; i < N; i++)
        {
            VoterIDs[i] = sobj.nextInt();

            if(VoterIDs[i] < 0)
            {
                System.out.println("Invalid ID ");
                return;
            }
        }

        // Check duplicates
        for(i = 0; i < N; i++)
        {
            boolean IsDuplicate = false;

            for(j = 0; j < i; j++)
            {
                if(VoterIDs[i] == VoterIDs[j])
                {
                    IsDuplicate = true;
                    break;
                }
            }

            if(IsDuplicate == true)
            {
                DuplicateVotes++;
            }
            else
            {
                ValidVotes++;
            }
        }

        System.out.println("Valid Votes : " + ValidVotes);
        System.out.println("Rejected Duplicate Votes : " + DuplicateVotes);
    }
}