/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.inheritance.Ex01;

/**
 *
 * @author Alunos
 */
public class Main {

    public static void main(String[] args) {
        int tickspeed = 20;
        MetaMachineFuelGenerator coalGenerator = new MetaMachineFuelGenerator()
                .setName("Coal Generator")
                .setFuelStorage(12000)
                .setFuelUsage(20)
                .setEnergyGeneration(40)
                .setEnergyStorage(8000)
                .setInputRate(80)
                .setOutputRate(8)
                .initialize();
        MetaEnergyBlock energyBattery = new MetaEnergyBlock()
                .setEnergyStorage(1200)
                .setInputRate(40)
                .setOutputRate(40);

        do {
            try {
                coalGenerator.generateEnergy();
                coalGenerator.sendEnergy(energyBattery, coalGenerator.getOutputRate());
                System.out.printf("%d RF\tfuel: %d\t\t%d RF on storage%n", coalGenerator.readEnergy(), coalGenerator.getFuelStorage(), energyBattery.getCurrentEnergy());
                Thread.sleep(1000 / tickspeed);
            } catch (Exception ex) {
            }

        } while (true);

    }
}
