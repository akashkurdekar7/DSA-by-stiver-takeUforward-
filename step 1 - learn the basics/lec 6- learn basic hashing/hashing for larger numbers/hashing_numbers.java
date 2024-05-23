import java.util.*;
class hashing {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        n= sc.nextInt();
        int[] arr = new int[n];
        for(int i=0; i<n; i++){
            arr[i]=sc.nextInt();
        }


        HashMap<Integer,Integer> mp = new HashMap<>();
        for(int i=0; i<n; i++){
            int key = arr[i];
            int freq=0;
            if(mp.containsKey(key)) freq = mp.get(key);// fetching from the map
            freq++;
            mp.put(key, freq);// inserting into the map
        }

        int q;
        q= sc.nextInt();
        while(q--!=0){
            int number = sc.nextInt();
            if(mp.containsKey(number)) System.out.println(mp.get(number));
            else System.out.println(0);
        }
    }
}