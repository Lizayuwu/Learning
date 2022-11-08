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
public class Cachorro extends Animal {

    public Cachorro() {
        super();
    }

    public Cachorro(String nome) {
        super(nome);
    }
    
    public String latir() {
        return "wan wan";
    }
}
