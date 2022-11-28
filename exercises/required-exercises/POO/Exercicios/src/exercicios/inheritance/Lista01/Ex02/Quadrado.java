/*
 Classe Quadrado: Crie uma classe que modele um quadrado:
 Atributos: tamanho do lado
 Métodos:Mudarvalordolado(setLado),retornarvalordolado(getLado) e calcular área
 */
package exercicios.inheritance.Lista01.Ex02;

public class Quadrado {

    private Double length;

    public Quadrado() {

    }

    public Double getLength() {
        return length;
    }

    public void setLength(Double length) {
        this.length = length;
    }

    public Double getArea() {
        return length * length;
    }
}
