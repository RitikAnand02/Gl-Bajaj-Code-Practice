// Bubble Sort of element in ascending order...
public class Bubble {
    public static void main(String[] args) {
        int[] arr = { 2, 3, 4, 1, 0, 8 };
        int temp = 0;

        for (int i = 1; i < arr.length; i++) {
            for (int j = 1; j <= arr.length - i; j++) {
                if (arr[j] < arr[j - 1]) {
                    temp = arr[j];
                    arr[j] = arr[j - 1];
                    arr[j - 1] = temp;
                }
            }
        }

        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}