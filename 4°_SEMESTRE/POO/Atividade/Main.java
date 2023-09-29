
import PROGRAMACAO.Programacao;
import CANAL.Canal;
import PACOTE.Pacote;
import CLIENTE.Cliente;
import PESSOA.Pessoa;

public class Main {
    public static void main(String[] args) {
        Programacao x1 = new Programacao("XXY", "16:00", "20:00");
        Programacao x2 = new Programacao("aaa", "06:00", "20:00");
        Programacao x3= new Programacao("bbb", "10:00", "20:00");
        Programacao x4 = new Programacao("ccc", "05:00", "20:00");
        Programacao x5 = new Programacao("ddd", "07:00", "20:00");
        Programacao x6 = new Programacao("eee", "20:00", "20:00");
        Programacao x7 = new Programacao("fff", "04:00", "20:00");
        Programacao x8 = new Programacao("jjj", "10:00", "20:00");
        Programacao x9 = new Programacao("hhh", "05:00", "20:00");
        Programacao x10 = new Programacao("kkk", "50:00", "20:00");
        Programacao x11 = new Programacao("ooo", "30:00", "20:00");
        Programacao x12 = new Programacao("qqq", "10:00", "20:00");
        //System.out.println(x.getNome());
        //System.out.println(x.getInicio());
        //System.out.println(x.getFim());
        Canal y = new Canal();
        y.adcionarProgramacao(x1);
        y.adcionarProgramacao(x2);
        y.adcionarProgramacao(x3);
        y.adcionarProgramacao(x4);
        y.adcionarProgramacao(x5);
        y.adcionarProgramacao(x6);
        y.adcionarProgramacao(x7);
        y.adcionarProgramacao(x8);
        y.adcionarProgramacao(x9);
        y.adcionarProgramacao(x10);
        y.adcionarProgramacao(x11);
        y.adcionarProgramacao(x12);
        y.print();

    }
}
