public class Main{

    public static void main(String[] args) {

        Aluno aluno1 = new Aluno("Willian", 1234, 10, 9.5);

        System.out.println("Nome: " + aluno1.nome);
        System.out.println("Matrícula: " + aluno1.matricula);
        System.out.println("Nota 1: " + aluno1.nota1);
        System.out.println("Nota 2: " + aluno1.nota2);

        if (aluno1.mediaFinal() >= 6) {
            System.out.println("Aprovado: (X) Sim ( ) Não");
        } else {
            System.out.println("Aprovado: ( ) Sim (X) Não");
        }
        System.out.println("Média Final: " + aluno1.mediaFinal());
    }
}