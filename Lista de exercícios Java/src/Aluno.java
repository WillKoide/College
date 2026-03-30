public class Aluno {

    String nome;
    int matricula;
    double nota1;
    double nota2;


    public Aluno(String nome, int matricula, double nota1, double nota2) {
        this.nome = nome;
        this.matricula = matricula;
        this.nota1 = nota1;
        this.nota2 = nota2;
    }
    public double mediaFinal() {
        return (this.nota1 + this.nota2) / 2;
    }
}
