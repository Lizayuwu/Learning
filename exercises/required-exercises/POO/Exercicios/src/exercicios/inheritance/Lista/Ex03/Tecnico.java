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
public class Tecnico extends Assistente {

    private Double bonusSalarial;

    public Tecnico(Double bonusSalarial, String matricula, String nome, String endereco, String telefone, String email, Double sal) {
        super(matricula, nome, endereco, telefone, email, sal);
        this.bonusSalarial = bonusSalarial;
    }

    @Override
    public Double getSalario() {
        return super.getSalario() + this.bonusSalarial; //To change body of generated methods, choose Tools | Templates.
    }

}
