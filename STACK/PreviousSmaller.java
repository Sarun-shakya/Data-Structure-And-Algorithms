//WAP to find the previous smaller element in an array

import java.util.*;

public class PreviousSmaller {
    public static void main(String[] args) {
        int[] arr = {3, 1, 2, 8, 6};
        int n = arr.length;
        ArrayList <Integer> ans = new ArrayList<>(n);
        Stack<Integer> s = new Stack<>();
        for(int i = 0; i < n; i++){
            while(s.size() > 0 && s.peek() >= arr[i]){
                s.pop();
            }
            if(s.isEmpty()){
                ans.add(-1);
            } else{
                ans.add(s.peek());
            }
            s.push(arr[i]);
        }
        System.out.print("The previous smaller elements : ");
        for(int val : ans){
            System.out.print(val + " ");
        }
    }
}
