#include <iostream>
#include <string>
#include <climits>

using namespace std;

const int numModulosProgramacao = 7;
const int numModulosMatematica = 3;
const int numModulosPortugues = 3;
const int numModulosFisicoQuimica = 6;
const int numModulosIngles = 3;
const int numModulosAI = 3;
const int numModulosTIC = 4;
const int numModulosEMRC = 1;
const int numModulosMA = 4;
const int numModulosRedes = 2;
const int numModulosEducacaoFisica = 6;

struct areas {
    string areaNome;
    string moduloNome[20];
    int moduloNota[20];
};

float calculaMedia(int notas[], int numModulos) {
    int soma = 0;
    for (int i = 0; i < numModulos; i++) {
        soma += notas[i];
    }
    return static_cast<float>(soma) / numModulos;
}

int encontraMaiorNota(int notas[], int numModulos) {
    int maior = notas[0];
    for (int i = 1; i < numModulos; i++) {
        if (notas[i] > maior) {
            maior = notas[i];
        }
    }
    return maior;
}

int encontraMenorNota(int notas[], int numModulos) {
    int menor = notas[0];
    for (int i = 1; i < numModulos; i++) {
        if (notas[i] < menor) {
            menor = notas[i];
        }
    }
    return menor;
}
int encontraMaiorNotaCurso(areas notasprogramacao, areas notasmatematica, areas notasPortugues, areas notasFisicoQuimica, areas notasIngles, areas notasAI, areas notasTic, areas notasEMRC, areas notasMA, areas notasRedes, areas notasEducacaoFisica) {
    int maiorNota = 0;
    for (int i = 0; i < numModulosProgramacao; ++i) {
        if (notasprogramacao.moduloNota[i] > maiorNota) {
            maiorNota = notasprogramacao.moduloNota[i];
        }
    }
    for (int y = 0; y < numModulosMatematica; ++y) {
        if (notasmatematica.moduloNota[y] > maiorNota) {
            maiorNota = notasmatematica.moduloNota[y];
        }
    }
    for (int z = 0; z < numModulosPortugues; ++z) {
        if (notasPortugues.moduloNota[z] > maiorNota) {
            maiorNota = notasPortugues.moduloNota[z];
        }
    }
    for (int a = 0; a < numModulosFisicoQuimica; ++a) {
        if (notasFisicoQuimica.moduloNota[a] > maiorNota) {
            maiorNota = notasFisicoQuimica.moduloNota[a];
        }
    }
    for (int l = 0; l < numModulosAI; ++l) {
        if (notasAI.moduloNota[l] > maiorNota) {
            maiorNota = notasAI.moduloNota[l];
        }
    }
    for (int j = 0; j < numModulosTIC; ++j) {
        if (notasTic.moduloNota[j] > maiorNota) {
            maiorNota = notasTic.moduloNota[j];
        }
    }
    for (int s = 0; s < numModulosEMRC; ++s) {
        if (notasEMRC.moduloNota[s] > maiorNota) {
            maiorNota = notasEMRC.moduloNota[s];
        }
    }
    for (int e = 0; e < numModulosMA; ++e) {
        if (notasMA.moduloNota[e] > maiorNota) {
            maiorNota = notasMA.moduloNota[e];
        }
    }
    for (int m = 0; m < numModulosRedes; ++m) {
        if (notasRedes.moduloNota[m] > maiorNota) {
            maiorNota = notasRedes.moduloNota[m];
        }
    }
    for (int p = 0; p < numModulosEducacaoFisica; ++p) {
        if (notasEducacaoFisica.moduloNota[p] > maiorNota) {
            maiorNota = notasEducacaoFisica.moduloNota[p];
        }
    }
    for (int n = 0; n < numModulosIngles; ++n) {
        if (notasIngles.moduloNota[n] > maiorNota) {
            maiorNota = notasIngles.moduloNota[n];
        }
    }
    return maiorNota;
}
int encontraMenorNotaCurso(areas notasprogramacao, areas notasmatematica, areas notasPortugues, areas notasFisicoQuimica, areas notasIngles, areas notasAI, areas notasTic, areas notasEMRC, areas notasMA, areas notasRedes, areas notasEducacaoFisica) {
    int menorNota = 0;
    for (int i = 0; i < numModulosProgramacao; ++i) {
        if (notasprogramacao.moduloNota[i] < menorNota) {
            menorNota = notasprogramacao.moduloNota[i];
        }
    }
    for (int y = 0; y < numModulosMatematica; ++y) {
        if (notasmatematica.moduloNota[y] < menorNota) {
            menorNota = notasmatematica.moduloNota[y];
        }
    }
    for (int z = 0; z < numModulosPortugues; ++z) {
        if (notasPortugues.moduloNota[z] < menorNota) {
            menorNota = notasPortugues.moduloNota[z];
        }
    }
    for (int a = 0; a < numModulosFisicoQuimica; ++a) {
        if (notasFisicoQuimica.moduloNota[a] < menorNota) {
            menorNota = notasFisicoQuimica.moduloNota[a];
        }
    }
    for (int l = 0; l < numModulosAI; ++l) {
        if (notasAI.moduloNota[l] < menorNota) {
            menorNota = notasAI.moduloNota[l];
        }
    }
    for (int j = 0; j < numModulosTIC; ++j) {
        if (notasTic.moduloNota[j] < menorNota) {
            menorNota = notasTic.moduloNota[j];
        }
    }
    for (int s = 0; s < numModulosEMRC; ++s) {
        if (notasEMRC.moduloNota[s] < menorNota) {
            menorNota = notasEMRC.moduloNota[s];
        }
    }
    for (int e = 0; e < numModulosMA; ++e) {
        if (notasMA.moduloNota[e] < menorNota) {
            menorNota = notasMA.moduloNota[e];
        }
    }
    for (int m = 0; m < numModulosRedes; ++m) {
        if (notasRedes.moduloNota[m] < menorNota) {
            menorNota = notasRedes.moduloNota[m];
        }
    }
    for (int p = 0; p < numModulosEducacaoFisica; ++p) {
        if (notasEducacaoFisica.moduloNota[p] < menorNota) {
            menorNota = notasEducacaoFisica.moduloNota[p];
        }
    }
    for (int n = 0; n < numModulosIngles; ++n) {
        if (notasIngles.moduloNota[n] < menorNota) {
            menorNota = notasIngles.moduloNota[n];
        }
    }
    return menorNota;
}
float calculaMediaCurso(areas notasprogramacao,areas notasmatematica,areas notasPortugues,areas notasFisicoQuimica,areas notasIngles,areas notasAI,areas notasTic,areas notasEMRC,areas notasMA,areas notasRedes,areas notasEducacaoFisica) {

    int totalModulos = numModulosProgramacao + numModulosMatematica + numModulosPortugues + numModulosFisicoQuimica + numModulosIngles + numModulosAI + numModulosTIC + numModulosEMRC + numModulosMA + numModulosRedes + numModulosEducacaoFisica;

    int somaNotas = 0;

    // Somar as notas de cada área
    for (int i = 0; i < numModulosProgramacao; ++i)
        somaNotas += notasprogramacao.moduloNota[i];
    for (int i = 0; i < numModulosMatematica; ++i)
        somaNotas += notasmatematica.moduloNota[i];
    for (int i = 0; i < numModulosPortugues; ++i)
        somaNotas += notasPortugues.moduloNota[i];
    for (int i = 0; i < numModulosFisicoQuimica; ++i)
        somaNotas += notasFisicoQuimica.moduloNota[i];
    for (int i = 0; i < numModulosIngles; ++i)
        somaNotas += notasIngles.moduloNota[i];
    for (int i = 0; i < numModulosAI; ++i)
        somaNotas += notasAI.moduloNota[i];
    for (int i = 0; i < numModulosTIC; ++i)
        somaNotas += notasTic.moduloNota[i];
    for (int i = 0; i < numModulosEMRC; ++i)
        somaNotas += notasEMRC.moduloNota[i];
    for (int i = 0; i < numModulosMA; ++i)
        somaNotas += notasMA.moduloNota[i];
    for (int i = 0; i < numModulosRedes; ++i)
        somaNotas += notasRedes.moduloNota[i];
    for (int i = 0; i < numModulosEducacaoFisica; ++i)
        somaNotas += notasEducacaoFisica.moduloNota[i];

    return static_cast<float>(somaNotas) / totalModulos;
}



int main() {
    areas notasprogramacao;
    areas notasmatematica;
    areas notasPortugues;
    areas notasFisicoQuimica;
    areas notasIngles;
    areas notasAI;
    areas notasTic;
    areas notasEMRC;
    areas notasMA;
    areas notasRedes;
    areas notasEducacaoFisica;
    string nome;
    int op, op1, op2, op3;
    areas todasAsAreas[] = {notasprogramacao, notasmatematica, notasPortugues, notasFisicoQuimica, notasIngles, notasAI, notasTic, notasEMRC, notasMA, notasRedes, notasEducacaoFisica};
    areas nota1,  nota2,  nota3,  nota4,  nota5,  nota6,  nota7,  nota8,  nota9,  nota10,  nota11;
    // Inicialização das notas
    notasprogramacao.areaNome = "Programacao";
    notasprogramacao.moduloNome[0] = "Algoritmia";
    notasprogramacao.moduloNome[1] = "Estrutura de Dados";
    notasprogramacao.moduloNome[2] = "Principios Metodologicos da Programacao";
    notasprogramacao.moduloNome[3] = "C++ - Fundamentos";
    notasprogramacao.moduloNome[4] = "C++ - Avancado";
    notasprogramacao.moduloNome[5] = "JAVA";
    notasprogramacao.moduloNome[6] = "JAVA WEB";
    notasprogramacao.moduloNota[0] = 16;
    notasprogramacao.moduloNota[1] = 17;
    notasprogramacao.moduloNota[2] = 12;
    notasprogramacao.moduloNota[3] = 16;
    notasprogramacao.moduloNota[4] = 0;
    notasprogramacao.moduloNota[5] = 0;
    notasprogramacao.moduloNota[6] = 0;

    notasmatematica.areaNome = "Matematica";
    notasmatematica.moduloNome[0] = "Estatistica";
    notasmatematica.moduloNome[1] = "Geomatria";
    notasmatematica.moduloNome[2] = "Funcoes Poligonais";
    notasmatematica.moduloNota[0] = 14;
    notasmatematica.moduloNota[1] = 0;
    notasmatematica.moduloNota[2] = 0;



    notasPortugues.areaNome = "Portugues";
    notasPortugues.moduloNome[0] = "Modulo 1";
    notasPortugues.moduloNome[1] = "Modulo 2";
    notasPortugues.moduloNome[2] = "Modulo 3";
    notasPortugues.moduloNota[0] = 15;
    notasPortugues.moduloNota[1] = 14;
    notasPortugues.moduloNota[2] = 0;


    notasFisicoQuimica.areaNome = "FisicoQuimica";
    notasFisicoQuimica.moduloNome[0] = "Forsas e Movimentos";
    notasFisicoQuimica.moduloNome[1] = "Estatica";
    notasFisicoQuimica.moduloNome[2] = "Hidroestatica e Hidrodinamica";
    notasFisicoQuimica.moduloNome[3] = "Luz e Fontes de Luz";
    notasFisicoQuimica.moduloNome[4] = "Otica Geometrica";
    notasFisicoQuimica.moduloNome[5] = "Circuitos Eletricos";
    notasFisicoQuimica.moduloNota[0] = 16;
    notasFisicoQuimica.moduloNota[1] = 18;
    notasFisicoQuimica.moduloNota[2] = 16;
    notasFisicoQuimica.moduloNota[3] = 0;
    notasFisicoQuimica.moduloNota[4] = 0;
    notasFisicoQuimica.moduloNota[5] = 0;

    notasIngles.areaNome = "Ingles";
    notasIngles.moduloNome[0] = "Eu e o Mundo Profissional";
    notasIngles.moduloNome[1] = "Um Mundo de Muitas Linguas";
    notasIngles.moduloNome[2] = "O Mundo Tecnologico";
    notasIngles.moduloNota[0] = 13;
    notasIngles.moduloNota[1] = 0;
    notasIngles.moduloNota[2] = 0;

    notasAI.areaNome = "AI";
    notasAI.moduloNome[0] = "Modulo 1";
    notasAI.moduloNome[1] = "Modulo 2";
    notasAI.moduloNota[0] = 0;
    notasAI.moduloNota[1] = 0;


    notasTic.areaNome = "TIC";
    notasTic.moduloNome[0] = "Pesquisar, filtrar e estruturar imformação e conteudos em ambientes digitais";
    notasTic.moduloNome[1] = "Organização e tratamento de dados";
    notasTic.moduloNome[2] = "Edicao de som e video";
    notasTic.moduloNome[3] = "Introducao a modelagem 3D";
    notasTic.moduloNota[0] = 0;
    notasTic.moduloNota[1] = 0;
    notasTic.moduloNota[2] = 16;
    notasTic.moduloNota[3] = 15;

    notasEMRC.areaNome = "EMRC";
    notasEMRC.moduloNome[0] = "Modulo I";
    notasEMRC.moduloNota[0] = 0;

    notasMA.areaNome = "MA";
    notasMA.moduloNome[0] = "Dispositivos e perifericos";
    notasMA.moduloNome[1] = "Sistemas operativos-tipologias";
    notasMA.moduloNome[2] = "utilitarios";
    notasMA.moduloNome[3] = "Informatica - nocoes basicas";
    notasMA.moduloNota[0] = 14;
    notasMA.moduloNota[1] = 16;
    notasMA.moduloNota[2] = 0;
    notasMA.moduloNota[3] = 0;

    notasRedes.areaNome = "Redes";
    notasRedes.moduloNome[0] = "Conexoes de rede";
    notasRedes.moduloNome[1] = "Sistemas de rede local";
    notasRedes.moduloNota[0] = 17;
    notasRedes.moduloNota[1] = 0;

    notasEducacaoFisica.areaNome = "EducacaoFisica";
    notasEducacaoFisica.moduloNome[0] = "Jogos Desportivos coletivos I";
    notasEducacaoFisica.moduloNome[1] = "Ginastica I";
    notasEducacaoFisica.moduloNome[2] = "Atletismo / Raquetas / Patinagem I";
    notasEducacaoFisica.moduloNome[3] = "Danca I";
    notasEducacaoFisica.moduloNome[4] = "Aptidao Fisica";
    notasEducacaoFisica.moduloNome[5] = "Atividades fisicas / contextos e saude I";
    notasEducacaoFisica.moduloNota[0] = 18;
    notasEducacaoFisica.moduloNota[1] = 0;
    notasEducacaoFisica.moduloNota[2] = 0;
    notasEducacaoFisica.moduloNota[3] = 0;
    notasEducacaoFisica.moduloNota[4] = 0;
    notasEducacaoFisica.moduloNota[5] = 0;

    cout << "Olá caro utilizador, para uma melhor experiência, digite o seu nome: ";
    cin >> nome;
    system("cls");

    do {
        cout << "---------------------------------------" << endl;
        cout << "Olá " << nome << ", o que pretende ver?" << endl << endl;
        cout << "0 - Sair" << endl;
        cout << "1 - Média de uma área escolhida" << endl;
        cout << "2 - Nota máxima de uma área escolhida" << endl;
        cout << "3 - Nota mínima de uma área escolhida" << endl;
        cout << "4 - Melhor nota tirada no curso inteiro" << endl;
        cout << "5 - Pior nota tirada no curso inteiro" << endl;
        cout << "6 - Média do curso inteiro" << endl;
        cout << "Resposta: ";
        cin >> op;
        system("cls");

        switch (op) {
            case 1:
                cout << "---------------------------------------" << endl << endl;
                cout << "Que disciplina deseja ver a média?" << endl;
                cout << "1 - Português" << endl;
                cout << "2 - Inglês" << endl;
                cout << "3 - AI" << endl;
                cout << "4 - TIC" << endl;
                cout << "5 - Educação Física" << endl;
                cout << "6 - Física e Química" << endl;
                cout << "7 - Matemática" << endl;
                cout << "8 - MA" << endl;
                cout << "9 - Redes" << endl;
                cout << "10 - Programação" << endl;
                cout << "11 - EMRC" << endl;
                cout << "Resposta: ";
                cin >> op1;
                system("cls");
                switch (op1) {
                case 1:
                    cout << "A média de Português = " << calculaMedia(notasPortugues.moduloNota, numModulosPortugues) << endl;
                    break;
                case 2:
                    cout << "A média de Inglês = " << calculaMedia(notasIngles.moduloNota, numModulosIngles) << endl;
                    break;
                case 3:
                    cout << "A média de AI = " << calculaMedia(notasAI.moduloNota, numModulosAI) << endl;
                    break;
                case 4:
                    cout << "A média de TIC = " << calculaMedia(notasTic.moduloNota, numModulosTIC) << endl;
                    break;
                case 5:
                    cout << "A média de Educação Física = " << calculaMedia(notasEducacaoFisica.moduloNota, numModulosEducacaoFisica) << endl;
                    break;
                case 6:
                    cout << "A média de Física Química = " << calculaMedia(notasFisicoQuimica.moduloNota, numModulosFisicoQuimica) << endl;
                    break;
                case 7:
                    cout << "A média de Matemática = " << calculaMedia(notasmatematica.moduloNota, numModulosMatematica) << endl;
                    break;
                case 8:
                    cout << "A média de MA = " << calculaMedia(notasMA.moduloNota, numModulosMA) << endl;
                    break;
                case 9:
                    cout << "A média de Redes = " << calculaMedia(notasRedes.moduloNota, numModulosRedes) << endl;
                    break;
                case 10:
                    cout << "A média de Programação = " << calculaMedia(notasprogramacao.moduloNota, numModulosProgramacao) << endl;
                    break;
                case 11:
                    cout << "A média de EMRC = " << calculaMedia(notasEMRC.moduloNota, numModulosEMRC) << endl;
                    break;
                default:
                    cout << "Opção inválida!" << endl;
            }
            break;
           case 2:
                cout << "---------------------------------------" << endl << endl;
                cout << "Que disciplina deseja ver a nota máxima?" << endl;
                cout << "1 - Português" << endl;
                cout << "2 - Inglês" << endl;
                cout << "3 - AI" << endl;
                cout << "4 - TIC" << endl;
                cout << "5 - Educação Física" << endl;
                cout << "6 - Física e Química" << endl;
                cout << "7 - Matemática" << endl;
                cout << "8 - MA" << endl;
                cout << "9 - Redes" << endl;
                cout << "10 - Programação" << endl;
                cout << "11 - EMRC" << endl;
                cout << "Resposta: ";
                cin >> op2;
                switch (op2) {
                case 1:
                    cout << "A maior nota de Português = " << encontraMaiorNota(notasPortugues.moduloNota, numModulosPortugues) << endl;
                    break;
                case 2:
                    cout << "A maior nota de Inglês = " << encontraMaiorNota(notasIngles.moduloNota, numModulosIngles) << endl;
                    break;
                case 3:
                    cout << "A maior nota de AI = " << encontraMaiorNota(notasAI.moduloNota, numModulosAI) << endl;
                    break;
                case 4:
                    cout << "A maior nota de TIC = " << encontraMaiorNota(notasTic.moduloNota, numModulosTIC) << endl;
                    break;
                case 5:
                    cout << "A maior nota de Educação Física = " << encontraMaiorNota(notasEducacaoFisica.moduloNota, numModulosEducacaoFisica) << endl;
                    break;
                case 6:
                    cout << "A maior nota de Física Química = " << encontraMaiorNota(notasFisicoQuimica.moduloNota, numModulosFisicoQuimica) << endl;
                    break;
                case 7:
                    cout << "A maior nota de Matemática = " << encontraMaiorNota(notasmatematica.moduloNota, numModulosMatematica) << endl;
                    break;
                case 8:
                    cout << "A maior nota de MA = " << encontraMaiorNota(notasMA.moduloNota, numModulosMA) << endl;
                    break;
                case 9:
                    cout << "A maior nota de Redes = " << encontraMaiorNota(notasRedes.moduloNota, numModulosRedes) << endl;
                    break;
                case 10:
                    cout << "A maior nota de Programação = " << encontraMaiorNota(notasprogramacao.moduloNota, numModulosProgramacao) << endl;
                    break;
                case 11:
                    cout << "A maior nota de EMRC = " << encontraMaiorNota(notasEMRC.moduloNota, numModulosEMRC) << endl;
                    break;
                default:
                    cout << "Opção inválida!" << endl;
                }
                break;
            case 3:
                cout << "---------------------------------------" << endl << endl;
                cout << "Que disciplina deseja ver a nota mínima?" << endl;
                cout << "1 - Português" << endl;
                cout << "2 - Inglês" << endl;
                cout << "3 - AI" << endl;
                cout << "4 - TIC" << endl;
                cout << "5 - Educação Física" << endl;
                cout << "6 - Física e Química" << endl;
                cout << "7 - Matemática" << endl;
                cout << "8 - MA" << endl;
                cout << "9 - Redes" << endl;
                cout << "10 - Programação" << endl;
                cout << "11 - EMRC" << endl;
                cout << "Resposta: ";
                cin >> op3;
                switch (op3) {
                case 1:
                    cout << "A menor nota de Português = " << encontraMenorNota(notasPortugues.moduloNota, numModulosPortugues) << endl;
                    break;
                case 2:
                    cout << "A menor nota de Inglês = " << encontraMenorNota(notasIngles.moduloNota, numModulosIngles) << endl;
                    break;
                case 3:
                    cout << "A menor nota de AI = " << encontraMenorNota(notasAI.moduloNota, numModulosAI) << endl;
                    break;
                case 4:
                    cout << "A menor nota de TIC = " << encontraMenorNota(notasTic.moduloNota, numModulosTIC) << endl;
                    break;
                case 5:
                    cout << "A menor nota de Educação Física = " << encontraMenorNota(notasEducacaoFisica.moduloNota, numModulosEducacaoFisica) << endl;
                    break;
                case 6:
                    cout << "A menor nota de Física Química = " << encontraMenorNota(notasFisicoQuimica.moduloNota, numModulosFisicoQuimica) << endl;
                    break;
                case 7:
                    cout << "A menor nota de Matemática = " << encontraMenorNota(notasmatematica.moduloNota, numModulosMatematica) << endl;
                    break;
                case 8:
                    cout << "A menor nota de MA = " << encontraMenorNota(notasMA.moduloNota, numModulosMA) << endl;
                    break;
                case 9:
                    cout << "A menor nota de Redes = " << encontraMenorNota(notasRedes.moduloNota, numModulosRedes) << endl;
                    break;
                case 10:
                    cout << "A menor nota de Programação = " << encontraMenorNota(notasprogramacao.moduloNota, numModulosProgramacao) << endl;
                    break;
                case 11:
                    cout << "A menor nota de EMRC = " << encontraMenorNota(notasEMRC.moduloNota, numModulosEMRC) << endl;
                    break;
                default:
                    cout << "Opção inválida!" << endl;
                }
                break;
            case 4:
                cout << "A maior nota de todo o curso = " << encontraMaiorNotaCurso(notasprogramacao, notasmatematica, notasPortugues, notasFisicoQuimica, notasIngles, notasAI, notasTic, notasEMRC, notasMA, notasRedes, notasEducacaoFisica) << endl;
                break;
            case 5:
                cout << "A menor nota de todo o curso = " << encontraMenorNotaCurso(notasprogramacao, notasmatematica, notasPortugues, notasFisicoQuimica, notasIngles, notasAI, notasTic, notasEMRC, notasMA, notasRedes, notasEducacaoFisica) << endl;
                break;
            case 6:
                cout << "A média de todo o curso = " << calculaMediaCurso(notasprogramacao, notasmatematica, notasPortugues, notasFisicoQuimica, notasIngles, notasAI, notasTic, notasEMRC, notasMA, notasRedes, notasEducacaoFisica) << endl;
                break;
            default:
                cout << "Opção inválida. Por favor, escolha uma opção válida." << endl;
        }
    } while (op != 0);

    return 0;
}


