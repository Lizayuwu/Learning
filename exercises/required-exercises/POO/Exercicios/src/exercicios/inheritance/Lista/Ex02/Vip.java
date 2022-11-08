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
public class Vip extends Ingresso {

    private Double adicional;

    public Vip(Double valor, Double adicional) {
        super(valor);
        this.adicional = adicional;
    }

    @Override
    public Double getValor() {
        return super.getValor() + this.adicional;
    }

}
