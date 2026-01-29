public class Bit3 {
    public static void main(String[] args) {
        int n = 13;
        int bit = 0;
        int count = 0;
        while (n != 0) {
            if ((n & 1) != 0) {
                bit = count;
            }
            n >>= 1;
            count++;
        }
        System.out.println(bit);
    }
}
