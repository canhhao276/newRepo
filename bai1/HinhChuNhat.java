package bai1;
import java.util.Scanner;
public class HinhChuNhat {
    private double  chieuDai;
    private double  chieuRong;
    Scanner sc = new Scanner(System.in);
    public HinhChuNhat(){
    }
    public HinhChuNhat(double  chieuDai, double chieuRong){
        this.chieuDai = chieuDai;
        this.chieuRong = chieuRong;
    }
    public double getChieuDai(){
        return chieuDai;
    }  
    public void setChieuDai(double chieuDai){
        this.chieuDai = chieuDai;
    }
    public double getChieuRong(){
        return chieuRong;
    }
    public void setChieuRong(double ChieuRong,double chieuRong){
        this.chieuRong = chieuRong;
    }
    public void nhapDuLieu(){
        chieuDai = sc.nextDouble();
        chieuRong = sc.nextDouble();
    }
    public double tinhDienTich(){
        double dai = getChieuDai();
        double rong = getChieuRong();
        return dai*rong;
    }
    public double tinhChuVi(){
        return (getChieuDai()+getChieuRong())*2;
    }
    public String toString(){
        String res = tinhDienTich() + "\n" + tinhChuVi();
        return res;
    }
    public static void main(String[] args) {
        
    }
}
