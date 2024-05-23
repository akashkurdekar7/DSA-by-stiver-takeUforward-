import java.util.*;
class hashing{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i]=sc.nextInt();
        }
        boolean found[]  =new boolean[n];
        for(int i=0; i<n; i++){
            if(found[i]==true) continue;
            int count = 1;
            for(int j=i+1; j<n; j++) {                
                if(arr[i]==arr[j]){
                    found[j] = true;
                    count++;
                }
            }
            System.out.println(arr[i] + " "+ count);
            
        }
    }
}