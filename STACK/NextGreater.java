//Write a program to find a next greater element

import java.util.*;

public class NextGreater {
    public static void main(String[] args) {
        int[] arr = {6, 8, 0, 1, 3};
        Stack<Integer> s = new Stack<>();
        Vector<Integer> ans = new Vector<>();
        int n = arr.length; // size of array
        for(int i = n - 1; i >= 0; i--){
            while(s.size() > 0 && s.peek() <= arr[i]){
                s.pop();
            }
            if(s.isEmpty()){
                ans.add(-1);
            } else{
                ans.add(s.peek());
            }
            s.push(arr[i]);
        }
        System.out.print("The next greater elements is : ");
        for(int i = ans.size()  - 1; i >= 0; i--){
            System.out.print(ans.get(i) + " ");
        }
    }
}
