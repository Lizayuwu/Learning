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
public class Normal extends Ingresso {

    public Normal(Double valor) {
        super(valor);
    }

    public void printName() {
        System.out.println("Ingresso Normal");
    }

}
