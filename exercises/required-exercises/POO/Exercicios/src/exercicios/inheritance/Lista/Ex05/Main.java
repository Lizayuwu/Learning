/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.inheritance.Lista.Ex05;

/**
 *
 * @author Alunos
 */
public class Main {

    public static void main(String[] args) {
        Pobre p = new Pobre();
        Rica r = new Rica();
        Miseravel m = new Miseravel();
        
        p.trabalha();
        r.fazCompra();
        m.mendiga();
    }
}
