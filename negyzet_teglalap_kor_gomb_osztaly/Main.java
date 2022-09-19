import java.util.Scanner;

class Negyzet
{
    public double oldal;

    public Negyzet(double oldal)
    {
        this.oldal = oldal; // az aktuális program objektumra mutató refencia, a 2. a metódus lokális változója lesz.
    }

    public double keruletn()
    {
        return 2 * oldal;
    }

    public double teruletn()
    {
        return oldal * oldal;
    }
}

class Teglalap
{
    public double oldala;
    public double oldalb;

    public Teglalap(double oldala, double oldalb)
    {
        this.oldala = oldala; // az aktuális program objektumra mutató refencia, a 2. a metódus lokális változója lesz.
        this.oldalb = oldalb;
    }

    public double kerulett()
    {
        return 2 * (oldala + oldalb);
    }

    public double terulett()
    {
        return oldala * oldalb;
    }
}

class Kor
{
    public double sugar;

    public Kor(double sugar)
    {
        this.sugar = sugar; // az aktuális program objektumra mutató refencia, a 2. a metódus lokális változója lesz.
    }

    public double keruletk()
    {
        return 2 * sugar * Math.PI;
    }

    public double teruletk()
    {
        return sugar * sugar * Math.PI;
    }
}

class Gomb
{
    public double sugar;

    public Gomb(double sugar)
    {
        this.sugar = sugar; // az aktuális program objektumra mutató refencia, a 2. a metódus lokális változója lesz.
    }

    public double felszing()
    {
        return 4 * sugar * sugar * Math.PI;
    }

    public double terfogatg()
    {
        return (4 * sugar * sugar * sugar * Math.PI) / 3;
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);

        System.out.print("Add meg a negyzet oldalalnak meretet: ");
        double an = sc.nextDouble();

        // String s = new String ("hello"); alapján készül
        Negyzet negyzet1 = new Negyzet(an);

        System.out.print("\nAdd meg a teglalap ket oldalabol az elso meretet: ");
        double at = sc.nextDouble();
        System.out.print("most a masodikat: ");
        double bt = sc.nextDouble();

        Teglalap teglalap1 = new Teglalap(at, bt);

        System.out.print("\nAdd meg a kor sugaranak meretet: ");
        double ks = sc.nextDouble();

        Kor kor1 = new Kor(ks);

        System.out.print("\nAdd meg a gomb sugaranak meretet: ");
        double gs = sc.nextDouble();

        Gomb gomb1 = new Gomb(gs);

        System.out.printf("\nNegyezet kerulete: %.2f", negyzet1.keruletn());
        System.out.printf("\nNegyezet terulete: %.2f", negyzet1.teruletn());

        System.out.printf("\n\nTeglalap kerulete: %.2f", teglalap1.kerulett());
        System.out.printf("\nTeglalap terulete: %.2f", teglalap1.terulett());
        
        System.out.printf("\n\nKor kerulete: %.2f", kor1.keruletk());
        System.out.printf("\nKor terulete: %.2f", kor1.teruletk());

        System.out.printf("\n\nGomb felszie: %.2f", gomb1.felszing());
        System.out.printf("\nGomb terfogata: %.2f\n", gomb1.terfogatg());

        sc.close();
    }

}