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
public class Estagiario extends Empregado {

    private int descontos;

    public Estagiario(int code, String nome, String email, Double salario, int descontos) {
        super(code, nome, email, salario);
        this.descontos = descontos;
    }

    @Override
    public void aumento_salarial(int value) {
        super.aumento_salarial(value);
        super.setSalario(
                super.getSalario() - this.descontos);

    }

}
