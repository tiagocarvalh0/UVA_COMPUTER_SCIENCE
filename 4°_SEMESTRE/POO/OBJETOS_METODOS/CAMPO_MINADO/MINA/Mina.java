package MINA;

public class Mina {
    private String value;
    private boolean isABomb = false, isVisivel = false;

    public Mina() {
    }

    public String getValue() {
        if(isVisivel)
            return value;
        else
            return "Nan";
    }
    public boolean getIsABomb() {
        if (isABomb)
            return true;
        else
            return false;
    }
    public void virar() {
        isVisivel = !isVisivel;
    }
    public boolean visibilidade() {
        return this.isVisivel;
    }
}