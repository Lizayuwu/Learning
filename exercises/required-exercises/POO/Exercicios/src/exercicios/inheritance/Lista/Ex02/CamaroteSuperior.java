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
public class CamaroteSuperior extends Vip {

    private int[] pos = new int[2];
    private Double adicionalExtra;

    public CamaroteSuperior(Double valor, Double adicional, Double adicionalExtra) {
        super(valor, adicional);
        this.adicionalExtra = adicionalExtra;
    }
    
    public Double getAdicional() {
        return adicionalExtra;
    }

    public void setAdicional(Double adicional) {
        this.adicionalExtra = adicional;
    }

    public int[] getPos() {
        return pos;
    }

    public void setPos(int[] pos) {
        this.pos = pos;
    }

    @Override
    public Double getValor() {
        return super.getValor() + this.adicionalExtra;
    }

}
