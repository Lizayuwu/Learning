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
public class MetaMachineFuelGenerator extends MetaEnergyBlock implements MetaEnergyGenerator {

    private int fuelUsage; //per second
    private int energyGeneration;
    private int fuelStorage;
    private Boolean isActive;

    public MetaMachineFuelGenerator(String blockName) {
        super(blockName);
    }

    public MetaMachineFuelGenerator() {
        super();
    }

    public int getFuelUsage() {
        return fuelUsage;
    }

    public MetaMachineFuelGenerator setFuelUsage(int fuelUsage) {
        this.fuelUsage = fuelUsage;
        return this;
    }

    public int getFuelStorage() {
        return fuelStorage;
    }

    public MetaMachineFuelGenerator setFuelStorage(int fuelStorage) {
        this.fuelStorage = fuelStorage;
        return this;
    }

    public int getEnergyGeneration() {
        return energyGeneration;
    }

    public MetaMachineFuelGenerator setEnergyGeneration(int energyGeneration) {
        this.energyGeneration = energyGeneration;
        return this;
    }

    private void setMachineWorkingState(Boolean newState) {
        this.isActive = newState;
    }

    public MetaMachineFuelGenerator initialize() {
        setMachineWorkingState(true);
        this.setCurrentEnergy(0);
        return this;
    }

    @Override
    public MetaMachineFuelGenerator setEnergyStorage(int energyStorage) {
        super.setEnergyStorage(energyStorage);
        return this;
    }

    @Override
    public MetaMachineFuelGenerator setInputRate(int energyStorage) {
        super.setInputRate(energyStorage);
        return this;
    }

    @Override
    public MetaMachineFuelGenerator setOutputRate(int energyStorage) {
        super.setOutputRate(energyStorage);
        return this;
    }

    @Override
    public void generateEnergy() {
        if (this.fuelStorage > this.fuelUsage
                && this.getCurrentEnergy() + this.getEnergyGeneration() <= this.getEnergyStorage()
                && this.isActive) {
            this.fuelStorage -= this.fuelUsage;
            this.setCurrentEnergy(this.getCurrentEnergy() + this.getEnergyGeneration());
        }
    }

    @Override
    public int readEnergy() {
        return this.getCurrentEnergy();
    }

    @Override
    public void sendEnergy(Double[] pos) {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    public void sendEnergy(MetaEnergyBlock receiver, int energyAmount) {
        if (receiver.canAcceptEnergy(energyAmount)) {
            int trueAmount = Math.min(energyAmount, Math.min(this.getOutputRate(), receiver.getInputRate()));
            receiver.changeEnergy(trueAmount);
            this.changeEnergy(-trueAmount);
        }
    }

    @Override
    public MetaMachineFuelGenerator setName(String name) {
        super.setBlockMetaName(name);
        return this;
    }
}
