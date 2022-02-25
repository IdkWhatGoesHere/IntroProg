import java.util.Scanner;

public class PrimeFinder {
    public static void print(String s){
        System.out.println(s);
    }
    public static boolean esPrimo(int n){
        boolean primo=true;
        for(int i=n-1;i>1;i--){
            if(n%i==0){
                primo=false;
            }
        }
        return primo;
    }
    public static void main(String []args){
        Scanner sc=new Scanner(System.in);
        boolean end=false;
        int counter=1,i=2;
        print("Introduzca cuantos numeros primos quiere encontrar");
        int target=sc.nextInt();
        int [] primos=new int[target];
        primos[0]=1;
        while(!end){
            if(esPrimo(i)){
                primos[counter]=i;
                counter++;
            }
            i++;
            if(counter==target){end=true;}
        }
        for(int j=0;j<target;j++){
            System.out.print(primos[j]+" ");
        }
    }
}
