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
public class Empregado {

    private int code;
    private String nome;
    private String email;
    private Double salario;

    public Double getSalario() {
        return salario;
    }

    public void setSalario(Double salario) {
        this.salario = salario;
    }

    public void aumento_salarial(int value) {
        if (this.salario != null) {
            this.salario *= 1 + (value * 0.01);

        }
    }

    public void aumento_salarial(int value, Double boni) {
        if (this.salario != null) {
            this.salario *= 1 + (value * 0.01);
            this.salario += boni;
        }
    }

    public Empregado(int code, String nome, String email, Double salario) {
        this.code = code;
        this.nome = nome;
        this.email = email;
        this.salario = salario;
    }

}
