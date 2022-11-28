/*Classe Pessoa: Crie uma classe que modele uma pessoa:
 *Atributos: nome, idade, peso e altura
 *Métodos:envelhecer,engordar,emagrecer,crescer.
 *Obs.:A cada ano que nossa pessoa envelhece, 
 *sendo a idade dela menor que 21 anos, ela deve crescer 0,5 cm
 */
package exercicios.inheritance.Lista01.Ex03;

public class Pessoa {

    private final Double crescimento = 0.5; //em cm
    private String nome;
    private int idade;
    private Double peso;
    private Double altura;

    public Pessoa(String nome, int idade, Double peso, Double altura) {
        this.nome = nome;
        this.idade = idade;
        this.peso = peso;
        this.altura = altura;
    }

    private void changeHeightWithAge(int age, int newAge) {
        if (newAge <= 21) {
            int diff = newAge - age;
            this.altura += diff * this.crescimento;
        }
    }

    /**
     * Adds an unspecified number to the person's age
     *
     * @param qtdAnos is a positive Integer.
     */
    public void envelhecer(int qtdAnos) {
        if (qtdAnos <= 0) {
            return;
        }
        changeHeightWithAge(this.idade, this.idade + qtdAnos);
        this.idade += qtdAnos;

    }

    public void engordar(Double qtdPeso) {
        if (this.peso - qtdPeso <= 0 || qtdPeso <= 0) {
            System.err.println("invalid value");
            return;
        }
        this.peso += qtdPeso;
    }

    public void emagrecer(Double qtdPeso) {
        if (this.peso - qtdPeso <= 0 || qtdPeso <= 0) {
            System.err.println("invalid value");
            return;
        }
        this.peso -= qtdPeso;
    }

    public void crescer(Double qtdAltura) {
        if (this.altura - qtdAltura <= 0 || qtdAltura <= 0) {
            System.err.println("invalid value");
            return;
        }
        this.altura += qtdAltura;
    }
}
