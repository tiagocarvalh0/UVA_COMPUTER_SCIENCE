package aula2;

public class Carta {
    private String naipe,valor;
    private boolean visivel=false;
    private String naipes="paus  espadaouro  copas ";
    private String valores ="A 2 3 4 5 6 7 8 9 10J Q K ";

    public String getValor() {
        if (visivel)
           return valor;
        else 
           return "Nan"; 
    }


    public String getNaipe() {
        if (visivel) 
           return naipe;
        else
           return "Nan";
    }


  

    public void setNaipe(String naipe) {
        naipe = naipe.toLowerCase().trim();
        if (naipes.contains(naipe)){
            this.naipe=naipe;
        } else {
            System.out.println("Naipe inválido");
        }
    }

  
    public void setValor(String valor) {
        valor = valor.toUpperCase().trim();
        if (valores.contains(valor)){
            this.valor=valor;
        } else {
            System.out.println("Valor inválido");
        }
    }



    public void virar(){
        visivel = !visivel;
    }
    
        // sobrecarga ou overload
    public void setTudo(String valor,String naipe){
        this.valor = valor;
        this.naipe = naipe;        
    }

  
      
    public void setTudo(String valor){
        this.valor = valor;
    }
    
    public void setTudo(){
        this.valor = null;
        this.naipe = null;        
    }

    public Carta(String valor,String naipe){
        this.valor = valor;
        this.naipe = naipe;        
    }
    
    public Carta(){
        
    }
    
    public Carta(String valor){
        this.valor = valor;
    }
}
