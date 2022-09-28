/**
 * Main
 */

import java.util.Scanner;
import board.Board;

public class Ex {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Board board = new Board(10, 10);
        Boolean willContinue = true;
        int option, x, y;
        while(willContinue) {
            try {
                System.out.println("-------------------------------");
                System.out.println("\t0 - Terminate program\n\t1 - Insert\n\t2 - Remove\n\t3 - Print");
                System.out.println("-------------------------------");
                option = sc.nextInt();
                switch(option) {
                    case 0:
                        System.out.println("The program will now exit.");
                        willContinue = false;
                        break;
                    case 1:
                        System.out.println("Please write the coordinate X");
                        x = sc.nextInt();
                        System.out.println("Please write the coordinate y");
                        y = sc.nextInt();
                        board.insert(x, y);
                        break;
                    case 2:
                        System.out.println("Please write the coordinate X");
                        x = sc.nextInt();
                        System.out.println("Please write the coordinate y");
                        y = sc.nextInt();
                        board.remove(x, y);
                        break;
                    case 3:
                        board.printBoard();
                        break;
                    default :
                        System.err.println("Invalid option");
                }
            } catch(Exception ex) {
                ex.printStackTrace();
            }   
    
        }
        sc.close();
        System.out.println("Thank you for using our BoardManager");
    
    }
    
}


