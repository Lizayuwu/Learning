/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.inheritance.Lista.Ex01;

/**
 *
 * @author Alunos
 */
public class Main {

    public static void main(String[] args) {
      
        Empregado emp = new Estagiario(0, "liza", "liza@mail.co", 1000.0, 100);

        Empregado emp2 = new Chefe(0, "liza", "liza@mail.co", 1800.0, 600.0);
        System.out.println(emp.getSalario());
        emp.aumento_salarial(20);
        System.out.println(emp.getSalario());

    }
}
