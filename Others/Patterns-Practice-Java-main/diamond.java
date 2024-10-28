public class diamond {
    
    public static void main(String[] args) {
        /*
           *
          ***
         *****
        *******
        *******
         *****
          ***
           *
         */
        for(int i=1;i<=4;i++)
        {
            for(int j=i;j<=4-1;j++)
            {
                System.out.print(" ");
            }
            
            for(int j=1;j<=2*i-1;j++)
            {
                System.out.print("*");
            }
            System.out.print("\n");
        }
        for(int i=4;i>=1;i--)
        {
            for(int j=i;j<=4-1;j++)
            {
                System.out.print(" ");
            }
            
            for(int j=1;j<=2*i-1;j++)
            {
                System.out.print("*");
            }
            System.out.print("\n");
        }
    }
}
