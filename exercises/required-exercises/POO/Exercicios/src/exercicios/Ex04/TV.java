/*Classe TV:
 Faça um programa que simule um televisor criando-o como umobjeto.
 O usuário deve ser capaz de informar o número do canal e aumentar e diminuir o volume.
 Certifique-se de que o número do canal e o nível do volume permaneçam dentro de faixas válidas

 */
package exercicios.Ex04;

/**
 *
 * @author Alunos
 */
public class TV {

    private int canal;
    private int maxCanais;
    private int volume;
    private int maxVolume;

    /**
     *
     * @param qtdCanais is a non-zero positive integer that denotes the upper
     * limit to @param canal
     * @param maxVolume is a non-zero positive integer that denotes the upper
     * limit to @param volume
     */
    public TV(int qtdCanais, int maxVolume) {
        this.maxCanais = qtdCanais;
        this.maxVolume = maxVolume;
        this.canal = 0;
        this.volume = maxVolume;
    }

    public int getCanal() {
        return canal;
    }

    public void mudarCanal(int newCanal) {
        if (newCanal <= this.maxCanais && newCanal > 0) {
            this.canal = newCanal;
        }
    }

    public void mudarVolume(int newVolume) {
        if (newVolume <= this.maxVolume && newVolume > 0) {
            this.volume = newVolume;
        }

    }

    public int getQtdCanais() {
        return maxCanais;
    }

    public void setQtdCanais(int qtdCanais) {
        this.maxCanais = qtdCanais;
    }

    public int getVolume() {
        return volume;
    }

    public void setVolume(int volume) {
        this.volume = volume;
    }

    public int getMaxVolume() {
        return maxVolume;
    }

    public void setMaxVolume(int maxVolume) {
        this.maxVolume = maxVolume;
    }

}
