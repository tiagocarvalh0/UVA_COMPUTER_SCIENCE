package CELULA;

public class Celula {
    private String value;
    private boolean isVisivel = true, isModify = true;

    public Celula() {}

    public String getValueString() {
        if(isVisivel)
            return value;
        else
            return "      \n" + "      \n" + "      \n" + "      \n" + "      \n" + "      \n";
    }

    public boolean getIsVisivel() {
        return isVisivel;
    }

    public boolean getIsModify() {
        return isModify;
    }

    public void setValuePlayer1() {
        if(isModify)
            value = " \\    /\n" +
                    "  \\  /\n" +
                    "   \\/\n" +
                    "   /\\\n" +
                    "  /  \\\n" +
                    " /    \\\n";

    }

    public void setValuePlayer2() {
        if(isModify)
            value = "   /\\\n" +
                    "  /  \\\n" +
                    " /    \\\n" +
                    " \\    /\n" +
                    "  \\  /\n" +
                    "   \\/\n"; 

    }

}