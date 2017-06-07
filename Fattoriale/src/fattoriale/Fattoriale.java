package fattoriale;

/**
 *
 * @author Studente
 */
public class Fattoriale {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {

        for(int i=1;i<=10;i++){
            Fatt f = new Fatt(i);
            f.start();
        }
    }
}