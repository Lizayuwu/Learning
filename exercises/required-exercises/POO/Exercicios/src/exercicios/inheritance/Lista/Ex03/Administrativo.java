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
public class Administrativo extends Assistente {

    private Boolean trabalhoNoturno;
    private Double adicionalNoturno;

    public Administrativo(Boolean trabalhoNoturno, Double adicionalNoturno, String matricula, String nome, String endereco, String telefone, String email, Double sal) {
        super(matricula, nome, endereco, telefone, email, sal);
        this.trabalhoNoturno = trabalhoNoturno;
        this.adicionalNoturno = adicionalNoturno;
    }

    @Override
    public Double getSalario() {
        return (trabalhoNoturno)
                ? super.getSalario() + this.adicionalNoturno
                : super.getSalario();
    }
}
