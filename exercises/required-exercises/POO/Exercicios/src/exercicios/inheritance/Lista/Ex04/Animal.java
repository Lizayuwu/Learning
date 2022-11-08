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
public class Animal {

    private String nome;
    private String raca;

    public String getRaca() {
        return raca;
    }

    public void setRaca(String raca) {
        this.raca = raca;
    }

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public Animal() {
    }

    public Animal(String nome) {
        this.nome = nome;
    }

    public String caminhar() {
        return "caminho e caminho";
    }
}
