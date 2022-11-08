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
public class Main {

    public static void main(String[] args) {
        Gato g = new Gato();
        Cachorro d = new Cachorro();
        System.out.println(g.caminhar() + " " + d.caminhar());
        System.out.println(g.miar());
        System.out.println(d.latir());
    }

}
