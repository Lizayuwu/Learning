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
public class MetaBlock {

    private int[] pos;
    private Texture tex;
    private Double[] orientation;
    private String blockMetaName;
    private Boolean isSolid;
    private int miningLevel;

    public MetaBlock(String blockName) {
        this.blockMetaName = blockName;
    }

    public MetaBlock() {
    }

    public Boolean getIsSolid() {
        return isSolid;
    }

    public void setIsSolid(Boolean isSolid) {
        this.isSolid = isSolid;
    }

    public int getMiningLevel() {
        return miningLevel;
    }

    public void setMiningLevel(int miningLevel) {
        this.miningLevel = miningLevel;
    }

    public int[] getPos() {
        return pos;
    }

    public void setPos(int[] pos) {
        this.pos = pos;
    }

    public Texture getTex() {
        return tex;
    }

    public void setTex(Texture tex) {
        this.tex = tex;
    }

    public Double[] getOrientation() {
        return orientation;
    }

    public void setOrientation(Double[] orientation) {
        this.orientation = orientation;
    }

    public String getBlockMetaName() {
        return blockMetaName;
    }

    public void setBlockMetaName(String blockMetaName) {
        this.blockMetaName = blockMetaName;
    }

    public MetaBlock setName(String nm) {
        this.blockMetaName = nm;
        return this;
    }

}
