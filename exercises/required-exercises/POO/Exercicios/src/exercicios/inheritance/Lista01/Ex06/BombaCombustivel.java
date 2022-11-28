/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.inheritance.Lista01.Ex06;

import java.util.ArrayList;
import java.util.HashMap;
import java.util.Map;

/**
 *
 * @author Alunos
 */
public class BombaCombustivel {

    private ArrayList<Combustivel> combustiveis = new ArrayList<>();
    private HashMap<String, Double> qtdCombustiveis = new HashMap();

    public BombaCombustivel(ArrayList<Combustivel> combustiveis, HashMap qtdCombustiveis) {
        this.combustiveis = combustiveis;
        this.qtdCombustiveis = qtdCombustiveis;
    }

    public BombaCombustivel() {
    }

    public void adicionarCombustivel(Combustivel cb, Double qtd) {
        this.combustiveis.add(cb);
        this.qtdCombustiveis.put(cb.getName(), qtd);
    }

    public void adicionarQtdCombustivel(Combustivel cb, Double qtd) throws Exception {
        if (qtd <= 0) {
            throw new Exception("Quantidade Inválida");
        }
        String nomeCbModified = cb.getName();
        Double qtdCbModified = qtdCombustiveis.get(nomeCbModified);
        if (qtdCbModified + qtd < 0) {
            throw new Exception("Quantidade Inválida");
        }
        qtdCombustiveis.put(nomeCbModified, qtdCbModified + qtd);
    }

    public void abastecerPorLitros(Veiculo vei, Double qtdLitros, Combustivel cb) throws Exception {
        if (qtdLitros > this.qtdCombustiveis.get(cb.getName())) {
            throw new Exception("Não há combustível o suficiente para realizar a operação");
        }
        if (qtdLitros < 0) {
            throw new Exception("Não é possível abastecer valores negativos");
        }
        vei.abastecerTanque(qtdLitros, cb);
        this.qtdCombustiveis.compute(cb.getName(), ((key, val) -> val - qtdLitros));
        System.out.printf("Foram abastecidos %.2f litros de %s, totalizando %.2f reais%n", qtdLitros, cb.getName(), cb.getPrice() * qtdLitros);
    }

    public void abastecerPorValor(Veiculo vei, Double qtdDinheiro, Combustivel cb) throws Exception {
        if (qtdDinheiro <= 0) throw new Exception("Não é possível pagar com valores negativos ou nulos");
        Double qtdLitros = qtdDinheiro / cb.getPrice();
        vei.abastecerTanque(qtdLitros, cb);
        this.qtdCombustiveis.compute(cb.getName(), ((key, val) -> val - qtdLitros));
        System.out.printf("Foram abastecidos %.2f litros de %s, totalizando %.2f reais%n", qtdLitros, cb.getName(), cb.getPrice() * qtdLitros);
    }

    public void listarCombustiveis() {
        combustiveis.stream().forEach((combustivel) -> {
            System.out.printf("%s custa R$%.2f/L e restam %.2f litros%n", combustivel.getName(), combustivel.getPrice(), qtdCombustiveis.get(combustivel.getName()));
        });
    }

    public void listarQuantidades() {
        for (Map.Entry qtdCombustivel : qtdCombustiveis.entrySet()) {
            System.out.printf("%s : %.2f Litros%n", qtdCombustivel.getKey(), qtdCombustivel.getValue());
        }
    }
}
