public class holl_rhom {
    public static void main(String[] args) {
        /*
            *****
           *   *
          *   *
         *   *
        *****
         */
        for(int i=1;i<=5;i++)
        {
            for(int j=i;j<=5-1;j++)
            {
                System.out.print(" ");
            }
            for(int j=1;j<=5;j++)
            {
                if(i == 1 || j == 1 || j == 5 || i == 5 )
                {
                    System.out.print("*");
                }
                else
                {
                    System.out.print(" ");
                }
                
            }
            System.out.print("\n");
        }
    }
}
