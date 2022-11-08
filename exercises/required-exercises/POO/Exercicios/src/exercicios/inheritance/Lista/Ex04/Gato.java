/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.inheritance.Lista.Ex04;

/**
 *
 * @author Alunos
 */
public class Gato extends Animal {

    public Gato() {
        super();
    }

    public Gato(String nome) {
        super(nome);
    }

    public String miar() {
        return "nyan nyan";
    }
}
