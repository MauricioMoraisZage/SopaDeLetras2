#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

using namespace std;

int main(int argc, char** argv){
    int op;

    do{
        cout<<"\n\t\t <<<<< SOPA DE LETRAS >>>>>\n";
        cout<<"\t\t 1-Sopa de Letra (Comida)\n";
        cout<<"\t\t 2-Sopa de Letra (Animais)\n";
        cout<<"\t\t 3-Sair\n";
        cout<<"\t\t Escolha uma opcao: ";
        cin>>op;

        if(op==1){
                //PARA SOPA DE LETRA - COMIDA .......................................
                int bolo=0, torta=0, pizza=0, espargueti=0, ponto1=0, tentatv1=8, SairSopCom=0; //Variaveis da SopaDeLetra Comidas:
                int i,j;
                char mat[20][20];  //matriz de palavras com 20 linhas e 20 colunas
                char palavra[20]; //guarda[strlen(palavra)+1];
                for(i=0;i<20;i++){
                    for(j=0;j<20;j++){
                        mat[i][j]= 'a' + (rand()%('z'-'a')); //funcao para gerar a matriz de letra aliatoria de A � Z;
                    }
                }
                //Letras escolhidas na nossa Sopa de Letras(Comida)
                mat[1][0]='b', mat[1][1]='o', mat[1][2]='l', mat[1][3]='o';     //horizontal
                mat[1][19]='t', mat[2][19]='o', mat[3][19]='r', mat[4][19]='t', mat[5][19]='a';   //vertical
                mat[19][1]='p', mat[18][2]='i', mat[17][3]='z', mat[16][4]='z', mat[15][5]='a';   //diagonal
                mat[17][10]='e', mat[17][11]='s', mat[17][12]='p', mat[17][13]='a',mat[17][14]='r', mat[17][15]='g', mat[17][16]='u',mat[17][17]='e', mat[17][18]='t', mat[17][19]='i';
                do{
                    system("cls");
                    cout<<"   SOPA DE LETRA (Comidas)   "<<endl;
                    for(i=0;i<20;i++){
                        for(j=0;j<20;j++){
                            cout<<" "<<mat[i][j]; //Chamando a matriz na tela

                            if(i==3 && j==19)
                                cout<<"     Deseja guardar e sair digite <<s>>";
                            if(i==6 && j==19)
                                cout<<"     Pontuacao: "<<ponto1;
                            if(i==7 && j==19)
                                cout<<"     Tentativas: "<<tentatv1;
                            if(i==9 && j==19)
                                cout<<"     Palavra encontrada: ";

                            if(bolo==1)
                            if(i==10 && j==19)
                                cout<<"         bolo";

                            if(torta==1)
                            if(i==11 && j==19)
                                cout<<"         torta";

                            if(pizza==1)
                            if(i==12 && j==19)
                                cout<<"         pizza";

                            if(espargueti==1)
                            if(i==13 && j==19)
                                cout<<"         espargueti";
                        }
                        cout<<endl;
                    }
                    cout<<"\nDigite a palavra encontrada: ";
                    cin>>palavra;

                    for(i=0; i<strlen(palavra); i++){
                        palavra[i] = tolower(palavra[i]);
                    }
                    //Para sair da sopa de letra comida................
                    if(strcmp(palavra, "s")==0 && SairSopCom==0){
                        cout<<"\nSair da Sopa de Letra\n";
                        SairSopCom=1;
                        break;
                    }
                    else if(strcmp(palavra, "bolo")==0 && bolo==0){
                        cout<<endl<<"Palavra encontrada! Inicia em [1][0] e termina em [1][3] (horizontal)\n\n";
                        bolo=1;
                        ponto1++;
                        tentatv1--;
                        system("pause");
                    }
                    else if(strcmp(palavra, "torta")==0 && torta==0){
                        cout<<endl<<"Palavra encontrada! Inicia em [1][19] e termina em [5][19] (vertical)\n\n";
                        torta=1;
                        ponto1++;
                        tentatv1--;
                        system("pause");
                    }
                    else if(strcmp(palavra, "pizza")==0 && pizza==0){
                        cout<<endl<<"Palavra encontrada! Inicia em [19][1] e termina em [15][5] (diagonal)\n\n";
                        pizza=1;
                        ponto1++;
                        tentatv1--;
                        system("pause");
                    }
                    else if(strcmp(palavra, "espargueti")==0 && espargueti==0){
                        cout<<endl<<"Palavra encontrada! Inicia em [17][10] e termina em [17][19] (horizontal)\n\n";
                        espargueti=1;
                        ponto1++;
                        tentatv1--;
                        system("pause");
                    }
                    else{
                        tentatv1--;
                    }
                }
                while((ponto1!=4)&&(tentatv1>0));

                system("cls");
                //::::::::::::::::::: Estatistiva do Jogo   :::::::::::::::::
                if(ponto1==4){ //Para vencedor......
                    cout<<"\n\tTodas as palavras foram encontradas, Parabens!\n";
                    cout<<"\tPontuacao: "<<ponto1<<"\n";
                    cout<<"\tTentativas Restadas: "<<tentatv1<<"\n\n";
                    system("pause");
                }
                else if(strcmp(palavra, "s")==0 && SairSopCom==1){ //Para jogo interropido....
                    cout<<"\n\tJogo interropido!\n";
                    cout<<"\tPontuacao: "<<ponto1<<"\n";
                    cout<<"\tTentativas Restadas: "<<tentatv1<<"\n\n";
                    system("pause");
                }
                else{ //Para perdedor.............
                    cout<<"\n\tVoce perdeu!!!\n";
                    cout<<"\tPontuacao: "<<ponto1<<"\n";
                    cout<<"\tTentativas Restadas: "<<tentatv1<<"\n\n";
                    system("pause");
                }
        }//Fim da op==1................................................................................

        else if(op==2){
                //PARA SOPA DE LETRA (ANIMAIS).............................................
                system("cls");
                int boy=0, macaco=0, galo=0, cabrito=0, ponto2=0, tentatv2=8, SairSopAm=0; //Variaveis da SopaDeLetra Animais;
                int i,j;
                char mat[20][20];  //matriz de palavras com 20 linhas e 20 colunas
                char palavra[20];
                for(i=0;i<20;i++){
                    for(j=0;j<20;j++){
                        mat[i][j]= 'a' + (rand()%('z'-'a')); //funcao para gerar a matriz de letra aliatoria de A � Z;
                    }
                }
                //Letras escolhidas na nossa Sopa de Letras(Animais)
                mat[1][1]='b', mat[1][2]='o', mat[1][3]='y';                    //horizontal
                mat[1][15]='m', mat[2][15]='a', mat[3][15]='c', mat[4][15]='a', mat[5][15]='c', mat[6][15]='o';   //vertical
                mat[19][1]='g', mat[18][2]='a', mat[17][3]='l', mat[16][4]='o';      //diagonal
                mat[17][10]='c', mat[17][11]='a', mat[17][12]='b', mat[17][13]='r',mat[17][14]='i', mat[17][15]='t', mat[17][16]='o';  //horizontal
                do{
                    system("cls");
                    cout<<"   SOPA DE LETRA (Animais)   "<<endl;
                    for(i=0;i<20;i++){
                        for(j=0;j<20;j++){
                            cout<<" "<<mat[i][j]; //Chamando a matriz na tela

                            if(i==3 && j==19)
                                cout<<"     Deseja guardar e sair digite <<s>>";
                            if(i==6 && j==19)
                                cout<<"     Pontuacao: "<<ponto2;
                            if(i==7 && j==19)
                                cout<<"     Tentativas: "<<tentatv2;
                            if(i==9 && j==19)
                                cout<<"     Palavra encontrada: ";

                            if(boy==1)
                            if(i==10 && j==19)
                                cout<<"          boy";

                            if(macaco==1)
                            if(i==11 && j==19)
                                cout<<"          macaco";

                            if(galo==1)
                            if(i==12 && j==19)
                                cout<<"          galo";

                            if(cabrito==1)
                            if(i==13 && j==19)
                                cout<<"          cabrito";
                        }
                        cout<<endl;
                    }
                    cout<<"\nDigite a palavra encontrada: ";
                    cin>>palavra;

                    for(i=0; i<strlen(palavra); i++){
                        palavra[i] = tolower(palavra[i]);
                    }
                    //Para sair da sopa de letra Animais................
                    if(strcmp(palavra, "s")==0 && SairSopAm==0){
                        cout<<"\nSair da Sopa de Letra\n";
                        SairSopAm=1;
                        break;
                    }
                    else if(strcmp(palavra, "boy")==0 && boy==0){
                        cout<<endl<<"Palavra encontrada! Inicia em [1][1] e termina em [1][3] (horizontal)\n\n";
                        boy=1;
                        ponto2++;
                        tentatv2--;
                        system("pause");
                    }
                    else if(strcmp(palavra, "macaco")==0 && macaco==0){
                        cout<<endl<<"Palavra encontrada! Inicia em [1][15] e termina em [6][15] (vertical)\n\n";
                        macaco=1;
                        ponto2++;
                        tentatv2--;
                        system("pause");
                    }
                    else if(strcmp(palavra, "galo")==0 && galo==0){
                        cout<<endl<<"Palavra encontrada! Inicia em [19][1] e termina em [16][4] (diagonal)\n\n";
                        galo=1;
                        ponto2++;
                        tentatv2--;
                        system("pause");
                    }
                    else if(strcmp(palavra, "cabrito")==0 && cabrito==0){
                        cout<<endl<<"Palavra encontrada! Inicia em [17][10] e termina em [17][16] (horizontal)\n\n";
                        cabrito=1;
                        ponto2++;
                        tentatv2--;
                        system("pause");
                    }
                    else{
                        tentatv2--;
                    }
                }while((ponto2!=4)&&(tentatv2>0));

                system("cls");
                //::::::::::::::::::: Estatistiva do Jogo   :::::::::::::::::
                if(ponto2==4){ //Para vencedor......
                    cout<<"\n\tTodas as palavras foram encontradas, Parabens!\n";
                    cout<<"\tPontuacao: "<<ponto2<<"\n";
                    cout<<"\tTentativas Restadas: "<<tentatv2<<"\n\n";
                    system("pause");
                }
                else if(strcmp(palavra, "s")==0 && SairSopAm==1){ //Para jogo interropido....
                    cout<<"\n\tJogo interropido!\n";
                    cout<<"\tPontuacao: "<<ponto2<<"\n";
                    cout<<"\tTentativas Restadas: "<<tentatv2<<"\n\n";
                    system("pause");
                }
                else{ //Para perdedor.............
                    cout<<"\n\tVoce perdeu!!!\n";
                    cout<<"\tPontuacao: "<<ponto2<<"\n";
                    cout<<"\tTentativas Restadas: "<<tentatv2<<"\n\n";
                    system("pause");
                }

        }//Fim da op==2.................................................................................
        else{
                system("cls");
                cout<<"\nApenas Opcoes de 1 a 3! Tente novamente...\n\n"<<endl;
        }
    }
    while(op!=3);

    //system("pause");
    return 0;
}
