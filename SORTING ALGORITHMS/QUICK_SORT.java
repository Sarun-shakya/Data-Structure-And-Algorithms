//Write a program to sort a array using quick sort algorithm

class QUICK_SORT{

    static int partition(int[] arr, int st, int end){
        int idx = st - 1;
        int pivot = arr[end];
        for(int j = st; j < end; j++){
            if(arr[j] <= pivot){
                idx++;
                int temp = arr[idx];
                arr[idx] = arr[j];
                arr[j] = temp;
            }
        }
        idx++;
        int temp = arr[idx];
        arr[idx] = arr[end];
        arr[end] = temp;
        return idx;
    }

    static void quickSort(int[] arr, int st, int end){
        if(st < end){
            int pivIdx = partition(arr, st, end);
            quickSort(arr, st, pivIdx - 1); // left half (smaller element than pivot)
            quickSort(arr, pivIdx + 1, end); // right half ( greater element than pivot)
        }
    }
    public static void main(String[] args) {
        int[] arr = {5, 2, 6, 4, 1, 3};
        int st = 0, end = arr.length - 1;
        quickSort(arr, st, end);
        System.out.println("After sorting: ");
        for(int val : arr){
            System.out.print(val + " ");
        }
    }
}