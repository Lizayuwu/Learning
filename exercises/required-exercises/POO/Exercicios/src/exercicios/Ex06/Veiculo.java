/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.Ex06;

/**
 *
 * @author Alunos
 */
public class Veiculo {

    private Combustivel combustivelUtilizado;
    private Double qtdCombustivel = 0.0;

    public Veiculo(Combustivel cbUtilizado) {
        this.combustivelUtilizado = cbUtilizado;
    }

    public String getCombustivelInfo() {
        return String.format("%.2f litros de %s%n", this.qtdCombustivel, this.combustivelUtilizado.getName());
    }

    public void abastecerTanque(Double qtd, Combustivel cb) throws Exception {
        if (!this.combustivelUtilizado.getName().equals(cb.getName())) {
            throw new Exception("Esse combustível não é compatível com esse veículo");
        }
        this.qtdCombustivel += qtd;
    }

    public Combustivel getCombustivelUtilizado() {
        return combustivelUtilizado;
    }

    public void setCombustivelUtilizado(Combustivel combustivelUtilizado) {
        this.combustivelUtilizado = combustivelUtilizado;
    }

    public Double getQtdCombustivel() {
        return qtdCombustivel;
    }

    public void setQtdCombustivel(Double qtdCombustivel) {
        this.qtdCombustivel = qtdCombustivel;
    }

}
