/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package exercicios.inheritance.Lista02;

/**
 *
 * @author Alunos
 */
public class Ex01 {

    private int PRECISION = 10;

    public int add(int a, int b) {
        return a + b;
    }

    public Double add(Double a, Double b) {
        return a + b;
    }

    public float add(float a, float b) {
        return a + b;
    }

    public int subtract(int a, int b) {
        return a - b;
    }

    public Double subtract(Double a, Double b) {
        return a - b;
    }

    public float subtract(float a, float b) {
        return a - b;
    }

    public int multi(int a, int b) {
        return a * b;
    }

    public Double multi(Double a, Double b) {
        return a * b;
    }

    public float multi(float a, float b) {
        return a * b;
    }

    public int div(int a, int b) throws Exception {
        if (a == 0 || b == 0) {
            throw new Exception("Divide by 0");
        }
        return a / b;
    }

    public Double div(Double a, Double b) throws Exception {
        if (a == 0 || b == 0) {
            throw new Exception("Divide by 0");
        }
        return a / b;
    }

    public float div(float a, float b) throws Exception {
        if (a == 0 || b == 0) {
            throw new Exception("Divide by 0");
        }
        return a / b;
    }

    public int pow(int a, int b) {
        int tmp = a;
        for (int i = 1; i < b; i++) {
            tmp *= tmp;
        }
        return tmp;
    }

    public Double pow(Double a, Double b) {
        return Math.pow(a, b);
    }

    public float pow(float a, float b) {
        Double tmp, tmp2;
        tmp = Double.parseDouble(Float.toString(a));
        tmp2 = Double.parseDouble(Float.toString(b));

        return (float) Math.pow(a, 1 / b);

    }

    public int root(int num, int root) {
        return (int) Math.pow((double) num, (double) 1 / root);
    }

    public Double root(Double a, Double b) {
        double intNum, decimal, tmp;
        int magn = 10;

        intNum = Double.parseDouble(String.valueOf(b).split("\\.")[0]);
        decimal = Double.parseDouble(String.valueOf(b).split("\\.")[1]);

        if (decimal == 0)
            return this.ipow((int) intNum, (int) decimal);

        while (true) {
            if (decimal % magn > 0) {
                magn *= 10;
            } else {
                break;
            }
        }

        tmp = newtonMethod((float) Math.sin(decimal), (int) decimal, (int) intNum, this.PRECISION);

        return tmp;

        // return (Double) this.ipow((int) intNum, (int) intNum);
    }

    public float root(float a, float b) {
        return (float) Math.pow(a, 1 / b);
    }

    private double ipow(int num, int exponent) {
        int total = 1;
        while (exponent > 0) {
            total *= num;
            exponent--;
        }
        return total;
    }

    private Double newtonMethod(float xn, int rootN, int num, int precision) {
        float xk = ((rootN - 1 / rootN) * xn) + (num / rootN) * (1 / this.pow(xn, rootN - 1));

        if (precision > 0) {
            precision = precision - 1;
            return this.newtonMethod(xk, rootN, num, precision);
        }
        return Double.parseDouble(String.valueOf(xk));
    }

    private Double f(double x) {
        return Math.sin(x);
    }
}
