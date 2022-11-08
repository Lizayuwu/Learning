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
public class Funcionario {

    private String nome;
    private String endereco;
    private String telefone;
    private String email;
    private Double salario;

    public Double getSalario() {
        return salario;
    }

    public String getNome() {
        return nome;
    }

    public String getEndereco() {
        return endereco;
    }

    public String getTelefone() {
        return telefone;
    }

    public String getEmail() {
        return email;
    }

    public Funcionario(String nome, String endereco, String telefone, String email, Double sal) {
        this.nome = nome;
        this.endereco = endereco;
        this.telefone = telefone;
        this.email = email;
        this.salario = sal;
    }
}
