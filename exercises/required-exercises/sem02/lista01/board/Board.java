package board;

public class Board {

    private int[][] board;
    private int width;
    private int height;

    public Board(int height, int width) {
        this.height = height;
        this.width = width;
        this.board = new int[height][width];
        for (int i = 0; i < height; i++) {
            for (int j = 0; j < width; j++) {
                board[i][j] = 0;
            }
        }
    }

    public void insert(int x,int y) {
        try {
            this.board[x-1][y-1] = 1;
        } catch(Exception ex) {
            ex.printStackTrace();
        }
    }

    public void remove(int x,int y) {
        try {
            this.board[x][y] = 0;
        } catch(Exception ex) {
            ex.printStackTrace();
        }
    }

    public void printBoard() {
        for (int i = 0; i < this.width; i++) {
            for (int j = 0; j < this.height; j++) {
                System.out.print("["+ board[i][j] +"]");
            }
            System.out.println("");
        }

    }
}