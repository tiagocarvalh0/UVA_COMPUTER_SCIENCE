package CELULA;

public class Celula {
    private String value; // informa quantidade de bombas proximas 
    private boolean isABomb = false, isVisivel = false;

    public Celula() {}    
    
    public void virar() {
        isVisivel = !isVisivel;
    }

    public String getValue() {
        if(isVisivel)
            return value;
        else
            return "# ";
    }

    public boolean getIsABomb() {
        if (isABomb)
            return true;
        else
            return false;
    }

    public boolean getIsVisivel() {
        return isVisivel;
    }   

    public void setValue(String value) {
        this.value = value;
    }

    public void setIsABomb(boolean isABomb) {
        this.isABomb = isABomb;
    }

    public void setVisivel(boolean isVisivel) {
        this.isVisivel = isVisivel;
    }

}