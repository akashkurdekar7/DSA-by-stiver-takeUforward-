import java.util.*;
class hashing{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n= sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i]=sc.nextInt();
        }
        // countFreq(arr,n);
        countFreq_map(arr,n);
        
    }
    static void countFreq(int[] arr, int n) {
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
    static void countFreq_map(int[] arr, int n) {
        HashMap<Integer, Integer> hash = new HashMap<Integer,Integer>();
        for(int i=0; i<n; i++){
            if(hash.containsKey(arr[i])){
                hash.put(arr[i],hash.get(arr[i])+1); //integer + count =1
            }
            else
            {
                hash.put(arr[i],1);
            }
        }
        for(hash.Entry<Integer, Integer> x : hash.entrySet()){
            System.out.println(x.getKey()+" " + x.getValue())
        }
    }
}