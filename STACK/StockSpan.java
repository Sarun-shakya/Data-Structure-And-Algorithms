// Write a program for stock span problem
import java.util.*;

class StockSpan {
    public static void main(String[] args) {
        int[] price = {100, 80, 60, 70, 60, 75, 85};
        int n = price.length;
        Vector<Integer> ans =  new Vector<>(n);
        Stack<Integer> stack = new Stack<>();
        for(int i = 0; i < n; i++){
            while(stack.size() > 0 && price[stack.peek()] <= price[i]){
                stack.pop();
            }
            if(stack.size() == 0){
                ans.add(i+1);
            } else{
                ans.add(i - stack.peek());
            }
            stack.push(i);
        }
        System.out.print("The stock span is : ");
        for(int i = 0; i < ans.size(); i++){
            System.out.print(ans.get(i) + " ");
        }
    }
}