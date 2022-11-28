/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.inheritance.Lista02.Empresa;

/**
 *
 * @author Alunos
 */
public class Chefe extends Empregado {

    private Double beneficios;

    public Chefe(int code, String nome, String email, Double salario, Double beneficios) {
        super(code, nome, email, salario);
        this.beneficios = beneficios;
    }

    @Override
    public void aumento_salarial(int value) {
        super.aumento_salarial(value, this.beneficios);
    }

}
