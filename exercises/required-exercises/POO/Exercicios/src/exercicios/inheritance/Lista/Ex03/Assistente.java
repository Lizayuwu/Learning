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
public class Assistente extends Funcionario {

    private String matricula;

    public Assistente(String matricula, String nome, String endereco, String telefone, String email, Double sal) {
        super(nome, endereco, telefone, email, sal);
        this.matricula = matricula;
    }

}
