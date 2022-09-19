public class Main
{
    // E. verbing
    // Ha az adott sztring hossza legalább 3, akkor
    // a végéhez adjuk hozzá az 'ing' ragot.
    // Ha 'ing'-re végződik, akkor ehelyett az 'ly'
    // ragot tegyük hozzá.
    // Ha a sztring hossza rövidebb 3 karakternél, akkor
    // hagyjuk változatlanul.
    // Adjuk vissza az eredménysztringet.
    private static String verbing(String s)
    {
        int len = s.length();

        if(len < 3)
        {
            return "" + s;
        }
        else
        {
            String ing = s.substring(len - 3);
            if(ing.equals("ing"))
            {
                return "" + s + "ly";
            }
            else
            {
                return "" + s + "ing";
            }
        }

    }

    // F. not_bad
    // Egy adott sztringben keressük meg a 'not' és
    // 'bad' szavak előfordulási helyét. Ha a 'bad'
    // a 'not' szót követi, akkor cseréljük ki az
    // egész 'not'...'bad' részsztringet a 'good' szóra.
    // Adjuk vissza az eredmény sztringet.
    // Példa: 'This dinner is not that bad!' ->
    //        This dinner is good!
    private static String notBad(String s)
    {
        if(s.contains("not"))
        {
            if(s.contains("bad"))
            {
                int len = s.length();
                int not = s.indexOf("not");
                int bad = s.indexOf("bad");
                String last = s.substring(len - 1);

                if(not < bad)
                {
                    if(last.equals(".") || last.equals("?") || last.equals("!"))
                    {
                        return "" + s.substring(0, not - 1) + " good" + last;
                    }
                    else
                    {
                        return "" + s.substring(0, not - 1) + " good";
                    }
                }
                else
                {
                    return "" + s;
                }
                
        
            }
            else
            {
                return "" + s;
            }
        }
        else
        {
            return "" + s;
        }
    }

    // G. front_back
    // Egy sztringet osszunk két részre, s a két részt nevezzük
    // a sztring elejének és végének. Ha a sztring hossza páros, akkor
    // a két rész hossza azonos. Ha a hossz páratlan, akkor az eleje
    // legyen egy karakterrel hosszabb mint a vége.
    // Például 'abcde' esetén a két rész: 'abc' és 'de'.
    // Két adott sztring (a és b) esetén adjunk vissza egy sztringet, mely
    // a következőképpen épül fel:
    // a-eleje + b-eleje + a-vége + b-vége
    // Például ha a = 'abcd' és b = 'xy', akkor az eredmény 'abxcdy' legyen.
    private static String frontBack(String a, String b)
    {
        int lena = a.length();
        int lenb = b.length();
        int felea = lena / 2;
        int feleb = lenb / 2;

        if(lena % 2 == 0 && lenb % 2 == 0)
        {
            return "" + a.substring(0, felea) + b.substring(0, feleb) + a.substring(felea, lena) + b.substring(feleb, lenb);
        }
        else if(lena % 2 != 0 && lenb % 2 != 0)
        {
            return "" + a.substring(0, felea + 1) + b.substring(0, feleb + 1) + a.substring(felea + 1, lena) + b.substring(feleb + 1, lenb);
        }
        else if(lena % 2 == 0 && lenb % 2 != 0)
        {
            return "" + a.substring(0, felea) + b.substring(0, feleb + 1) + a.substring(felea, lena) + b.substring(feleb + 1, lenb);
        }
        else
        {
            return "" + a.substring(0, felea + 1) + b.substring(0, feleb) + a.substring(felea + 1, lena) + b.substring(feleb, lenb);
        }

    }

    static void test(String got, String expected)
    {
        String prefix = (got.equals(expected) ? " OK " : "  X ");
        System.out.printf("%s got: %s; expected: %s\n", prefix, got, expected);
    }

    public static void main(String[] args)
    {
        System.out.println("verbing");
        test(verbing("hail"), "hailing");
        test(verbing("swiming"), "swimingly");
        test(verbing("do"), "do");

        System.out.println();
        System.out.println("not_bad");
        test(notBad("This movie is not so bad"), "This movie is good");
        test(notBad("This dinner is not that bad!"), "This dinner is good!");
        test(notBad("This tea is not hot"), "This tea is not hot");
        test(notBad("It's bad yet not"), "It's bad yet not");

        System.out.println();
        System.out.println("front_back");
        test(frontBack("abcd", "xy"), "abxcdy");
        test(frontBack("abcde", "xyz"), "abcxydez");
        test(frontBack("Kitten", "Donut"), "KitDontenut");
    }
}
