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
public class Main {

    public static void main(String[] args) {

        Ingresso ig = new CamaroteSuperior(150.0, 100.0, 50.0);
        Ingresso igV = new Vip(50.0, 50.0);
        System.out.println(ig.getValor());
        System.out.println(igV.getValor());
    }

}
