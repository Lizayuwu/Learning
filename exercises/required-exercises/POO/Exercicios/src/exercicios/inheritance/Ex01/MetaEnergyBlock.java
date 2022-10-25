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
public class MetaEnergyBlock extends MetaBlock {

    private int energyStorage;
    private int currentEnergy;
    private int inputRate;
    private int outputRate;

    public MetaEnergyBlock(String blockName) {
        super(blockName);
    }

    public MetaEnergyBlock() {
        super();
    }

    public int getCurrentEnergy() {
        return this.currentEnergy;
    }

    public void setCurrentEnergy(int currentEnergy) {
        this.currentEnergy = currentEnergy;
    }

    public int getInputRate() {
        return inputRate;
    }

    public MetaEnergyBlock setInputRate(int inputRate) {
        this.inputRate = inputRate;
        return this;
    }

    public int getOutputRate() {
        return outputRate;
    }

    public MetaEnergyBlock setOutputRate(int outputRate) {
        this.outputRate = outputRate;
        return this;
    }

    public int getEnergyStorage() {
        return energyStorage;
    }

    protected void changeEnergy(int amount) {
        if(this.currentEnergy + amount < 0 || this.currentEnergy + amount > this.energyStorage) return;
        this.currentEnergy += amount;
    }

    public Boolean canAcceptEnergy(int transferAmount) {
        return this.currentEnergy + transferAmount <= this.energyStorage;
    }

    public MetaEnergyBlock setEnergyStorage(int energyStorage) {
        this.energyStorage = energyStorage;
        return this;
    }

}
