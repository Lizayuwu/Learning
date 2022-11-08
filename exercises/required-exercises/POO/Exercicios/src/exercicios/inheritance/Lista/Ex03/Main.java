/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.inheritance.Lista.Ex03;

/**
 *
 * @author Alunos
 */
public class Main {

    public static void main(String[] args) {
        Funcionario aT = new Tecnico(
                50.0, "12182025", "Liza", "sim", "talvez", "liza@mail.com", 1350.0);
        Funcionario aA = new Administrativo(
                true, 500.0, "12182025", "Liza", "sim", "talvez", "liza@mail.com", 1350.0);
        Funcionario aA2 = new Administrativo(
                false, 500.0, "12182025", "Liza", "sim", "talvez", "liza@mail.com", 1350.0);
        
        System.out.println(aT.getSalario());
        System.out.println(aA.getSalario());
        System.out.println(aA2.getSalario());
    }
}
