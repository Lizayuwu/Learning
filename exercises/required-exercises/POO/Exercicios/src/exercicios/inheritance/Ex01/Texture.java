/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.inheritance.Ex01;

import java.awt.image.BufferedImage;
import java.io.File;
import javax.imageio.ImageIO;

/**
 *
 * @author Alunos
 */
public class Texture {

    private BufferedImage img;

//    File path is RELATIVE
    public Texture(File file) {
        if (img != null) {
            try {
                this.img = ImageIO.read(file);
            } catch (Exception ex) {
                //
            }
        }
    }
}
