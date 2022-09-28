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
public class PostoDeCombustivel {

    public static void main(String[] args) {
        Combustivel gComum = new Combustivel("Gasolina Comum", 5.45);
        Combustivel gAditivada = new Combustivel("Gasolina Aditivada", 5.77);
        Combustivel gEtanol = new Combustivel("Etanol", 5.33);
        Combustivel gDiesel = new Combustivel("Diesel", 4.67);
        Combustivel cbArr[] = {gComum, gAditivada, gEtanol, gDiesel};
        BombaCombustivel bdc = new BombaCombustivel();

        Veiculo vc = new Veiculo(gEtanol);
        Veiculo vc2 = new Veiculo(gComum);

        for (Combustivel cb : cbArr) {
            bdc.adicionarCombustivel(cb, 1000.0); //insere todos os combustiveis com 1000L
        }

        bdc.listarCombustiveis();

        try {
            bdc.abastecerPorLitros(vc, 100.0, gEtanol);
            bdc.abastecerPorValor(vc, 100.0, gEtanol);
            bdc.abastecerPorValor(vc2, 50.0, gComum);
        } catch (Exception ex) {
            ex.printStackTrace();
        }

        bdc.listarCombustiveis();
        bdc.listarQuantidades();
        
        System.out.println(vc.getCombustivelInfo());
        System.out.println(vc2.getCombustivelInfo());

    }
}
