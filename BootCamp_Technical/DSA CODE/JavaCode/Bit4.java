// write a program to convert number into binary using bitwise operator 
public class Bit4 {
    public static void main(String[] args) {
        int n = 15;
        int binary = 0;
        int power = 1;
        while (n != 0) {
            binary += (n & 1) * power;
            n >>= 1;
            power *= 10;
        }
        System.out.println(binary);
    }
}
