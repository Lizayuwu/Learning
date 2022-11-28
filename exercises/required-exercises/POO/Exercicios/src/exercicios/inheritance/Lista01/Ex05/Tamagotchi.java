/*
 Classe Bichinho Virtual: Crie uma classe que modele um Tamagotchi(bichinho eletrônico):
 Atributos: nome, fome, saúde e idade
 Métodos:
 alterarnome,fome,saúdeeidade(set’s);
 retornarnome,fome,saúdeeidade(get’s).
 Obs.:Existe mais uma informação que devemos levar em consideração, 
 o humor do nosso tamagotchi,este humor é uma combinação entre os atributos fome e saúde,
 ou seja,um campo calculado,então não devemos criar um atributo
 para armazenar esta informação porque ela pode ser calculada a qualquer momento.
 */
package exercicios.inheritance.Lista01.Ex05;

/**
 *
 * @author Alunos
 */
public class Tamagotchi {

    private String name;
    private int hunger;
    private int health;
    private int age;

    public int calcHumor() {
        return health * hunger;
    }

    public String getNome() {
        return name;
    }

    public void setNome(String nome) {
        this.name = nome;
    }

    public int getFome() {
        return hunger;
    }

    public void setFome(int fome) {
        this.hunger = fome;
    }

    public int getHealth() {
        return health;
    }

    public void setHealth(int health) {
        this.health = health;
    }

    public int getIdade() {
        return age;
    }

    public void setIdade(int idade) {
        this.age = idade;
    }

}
