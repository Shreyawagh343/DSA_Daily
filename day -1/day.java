public class day {
public static void main(String[] args) {
    int n = 3;
    boolean flag= false;

    if(n==0 || n==1){
        flag = true;
    }

    for(int i=2;i<=n/26;i++){
            if(n%i==0){
                flag = true;
                break;
            }
        }
    
    if(!flag)
        System.out.println("its a prime number");
    else 
        System.out.println("its not a prime number");



}
}