/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.inheritance.Lista.Ex02;

/**
 *
 * @author Alunos
 */
public class CamaroteInferior extends Vip {

    private int[] pos = new int[2];

    public CamaroteInferior(Double valor, Double adicional) {
        super(valor, adicional);
    }

    public int[] getPos() {
        return pos;
    }

    public void setPos(int[] pos) {
        this.pos = pos;
    }

}
