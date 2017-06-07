package fattoriale;

/**
 *
 * @author Studente
 */
public class Fatt extends Thread{
    public int fat = 1;
    public int n;
    public Fatt(int n){
        this.n = n;
    }
    public void run(){
        int i = this.n;
        while(n>0){
            this.fat *= this.n;
            n--;
        }
        System.out.println(i+"!="+fat);
    } 
}