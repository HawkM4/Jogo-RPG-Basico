#pragma once
#include<iostream>
#include<chrono>
#include<thread>

using namespace std::this_thread;
using namespace std::chrono;
using namespace std;

int code = 4532, opcc;
int vidadl1 = 50, atqdl1 = 10, vidadl2 = 75, atqdl2 = 15, vidadl3 = 100, atqdl3 = 20, vidadl4 = 125, atqdl4 = 25, vidaB = 175, atqB = 40;
bool cu = false;

void fases() {

//Primeira Fase
    if (code == 4532 ) {

        cout << "\n\n\033[91m" << "Vida: " << vida << "\033[0m" << '\n';
        cout << "\033[32m" << "Atq: " << atq << "\033[0m" << '\n';
        cout << "\033[36m" << "Mana: " << mana << "\033[0m" << '\n';
        cout << '\n' << "\033[93m" << "Feitico de cura(25) - Custo: 25" << "\033[0m\n\n";

        cout << "\n\n Fase 1: Queda aos Abismos\n\n";

        cout << "\nVoce e um bravo guerreiro que foi arrastado para os Abismos do Inferno apos uma batalha epica. Agora, sua missao e encontrar o caminho de volta a superficie. Nessa fase, voce precisa enfrentar demonios e criaturas infernais\n\n\n";

        cout << "\n\n\n Assim que voce levanta do chao voce avista 5 demonios de lvl(1) entao voce decide atacar eles\n\n";

        for (int dl1 = 1; dl1 <= 5; dl1++) {
            do {
                if (vida <= 0) {
                    cout << "avancou smoke, foi de americanas, foi de berco, contratado pelo vasco, lol\ntu morreu, mt ruim pprt, otario\n\n";
                    break;
                }
                cout << "\nVoce entrou em combate com um demonio(1)";
                cout << "\nOpcoes de combate\n";
                cout << "\n(1) - Ataque\n";
                cout << "\n(2) - Cura\n\nR:";
                cin >> opcc;
                cout << '\n';

                if (opcc == 2)
                {
                    if (mana > 25 && vida < 110)
                    {
                        cu = true;
                        vida = vida + 25;
                        mana = mana - 25;
                        cout << "Voce recuperou 25 de vida.\n";
                        cout << "Vida atual " << vida << '\n';
                        cout << "Voce esta com " << mana << " de mana\n\n";
                        sleep_until(system_clock::now() + seconds(1));
                    }

                    else
                    {
                        cout << "Voce esta sem mana, ou com a vida muito cheia, lol\n";
                        sleep_until(system_clock::now() + seconds(1));
                    }
                }


                if (opcc == 1)
                {
                    vidadl1 = vidadl1 - atq;
                    cout << "Voce Atacou um demonio(1)\n";
                    cout << "Vida restante do demonio(1): " << vidadl1 << '\n' << '\n';

                    sleep_until(system_clock::now() + seconds(2));
                }

                if (vidadl1 > 0 && cu == false)
                {
                    vida = vida - atqdl1;
                    cout << "\nO demonio te atacou\n";
                    cout << "Sua vida Restante: " << vida << '\n' << '\n';
                    cout << "Vida restante do demonio(1): " << vidadl1 << '\n' << '\n';
                }



                if (vidadl1 <= 0)
                {
                    cout << "parabens voce matou 1 demonio(1) e recuperou 35 de mana\n\n";
                    sleep_until(system_clock::now() + seconds(1));
                    mana = mana + 35;
                }




                cu = false;

            } while (vidadl1 >= 1);
            vidadl1 = 50;
        }
        if (vidaB <= 0); {
            cout << "Parabens voce finalizou a Primeira fase o codigo dessa fase foi:4532\n\n";
        }
    } // Primeira Fase

//Segunda Fase
    if (code == 7891 ) {

        cout << "\n\n\033[91m" << "Vida: " << vida << "\033[0m" << '\n';
        cout << "\033[32m" << "Atq: " << atq << "\033[0m" << '\n';
        cout << "\033[36m" << "Mana: " << mana << "\033[0m" << '\n';
        cout << '\n' << "\033[93m" << "Feitico de cura(25) - Custo: 25" << "\033[0m\n\n";

        cout << "\n\n Fase 2: A Trilha das Almas Perdidas\n\n";

        cout << "\nApós escapar dos Abismos, você encontra-se em uma trilha sombria, onde as almas perdidas vagam eternamente. O objetivo é encontrar as chamas sagradas que podem purificar as almas e abrir caminho para a próxima fase. No entanto, você deve ter cuidado, pois criaturas atormentadas e espíritos vingativos espreitam nas sombras.\n\n\n";

        cout << "\n\n\n Assim que voce entra na trilha voce avista 5 demonios de lvl(2) entao voce decide atacar eles\n\n";

        for (int dl2 = 1; dl2 <= 5; dl2++) {
            do {
                if (vida <= 0) {
                    cout << "avancou smoke, foi de americanas, foi de berco, contratado pelo vasco, lol\ntu morreu, mt ruim pprt, otario\n\n";
                    break;
                }
                cout << "\nVoce entrou em combate com um demonio(2)";
                cout << "\nOpcoes de combate\n";
                cout << "\n(1) - Ataque\n";
                cout << "\n(2) - Cura\n\nR:";
                cin >> opcc;
                cout << '\n';

                if (opcc == 2)
                {
                    if (mana > 25 && vida < 110)
                    {
                        cu = true;
                        vida = vida + 25;
                        mana = mana - 25;
                        cout << "Voce recuperou 25 de vida.\n";
                        cout << "Vida atual " << vida << '\n';
                        cout << "Voce esta com " << mana << " de mana\n\n";
                        sleep_until(system_clock::now() + seconds(1));
                    }

                    else
                    {
                        cout << "Voce esta sem mana, ou com a vida muito cheia, lol\n";
                        sleep_until(system_clock::now() + seconds(1));
                    }
                }


                if (opcc == 1)
                {
                    vidadl2 = vidadl2 - atq;
                    cout << "Voce Atacou um demonio(2)\n";
                    cout << "Vida restante do demonio(2): " << vidadl2 << '\n' << '\n';

                    sleep_until(system_clock::now() + seconds(2));
                }

                if (vidadl2 > 0 && cu == false)
                {
                    vida = vida - atqdl2;
                    cout << "\nO demonio te atacou\n";
                    cout << "Sua vida Restante: " << vida << '\n' << '\n';
                    cout << "Vida restante do demonio(2): " << vidadl2 << '\n' << '\n';
                }



                if (vidadl2 <= 0)
                {
                    cout << "parabens voce matou 1 demonio(2) e recuperou 35 de mana\n\n";
                    sleep_until(system_clock::now() + seconds(1));
                    mana = mana + 35;
                }




                cu = false;

            } while (vidadl2 >= 1);
            vidadl2 = 75;
        }
        if (vidadl2 <= 0); {
            cout << "Parabens voce achou as chamas sagradas nos corpos e finalizou a Segunda fase o codigo dessa fase foi:7891\n\n";
        }
    } 

 //Terceira Fase
    if (code == 2367 ) {

        cout << "\n\n\033[91m" << "Vida: " << vida << "\033[0m" << '\n';
        cout << "\033[32m" << "Atq: " << atq << "\033[0m" << '\n';
        cout << "\033[36m" << "Mana: " << mana << "\033[0m" << '\n';
        cout << '\n' << "\033[93m" << "Feitico de cura(25) - Custo: 25" << "\033[0m\n\n";

        cout << "\n\n Fase 3: A Cidadela dos Pesadelos\n\n";

        cout << "\nA Cidadela dos Pesadelos é um castelo macabro habitado por entidades demoníacas e regido por um senhor das trevas. Nessa fase, você deve infiltrar-se nas profundezas da cidadela, enfrentar guardiões poderosos e descobrir segredos ocultos. O objetivo é encontrar o antigo artefato que pode desvendar o portal para a próxima fase.\n\n\n";

        cout << "\n\n\n Assim que voce entra na Castelo voce avista 5 demonios de lvl(3) entao voce decide atacar eles\n\n";

        for (int dl3 = 1; dl3 <= 5; dl3++) {
            do {
                if (vida <= 0) {
                    cout << "avancou smoke, foi de americanas, foi de berco, contratado pelo vasco, lol\ntu morreu, mt ruim pprt, otario\n\n";
                    break;
                }
                cout << "\nVoce entrou em combate com um demonio(3)";
                cout << "\nOpcoes de combate\n";
                cout << "\n(1) - Ataque\n";
                cout << "\n(2) - Cura\n\nR:";
                cin >> opcc;
                cout << '\n';

                if (opcc == 2)
                {
                    if (mana > 25 && vida < 110)
                    {
                        cu = true;
                        vida = vida + 25;
                        mana = mana - 25;
                        cout << "Voce recuperou 25 de vida.\n";
                        cout << "Vida atual " << vida << '\n';
                        cout << "Voce esta com " << mana << " de mana\n\n";
                        sleep_until(system_clock::now() + seconds(1));
                    }

                    else
                    {
                        cout << "Voce esta sem mana, ou com a vida muito cheia, lol\n";
                        sleep_until(system_clock::now() + seconds(1));
                    }
                }


                if (opcc == 1)
                {
                    vidadl3 = vidadl3 - atq;
                    cout << "Voce Atacou um demonio(3)\n";
                    cout << "Vida restante do demonio(3): " << vidadl3 << '\n' << '\n';

                    sleep_until(system_clock::now() + seconds(2));
                }

                if (vidadl3 > 0 && cu == false)
                {
                    vida = vida - atqdl3;
                    cout << "\nO demonio te atacou\n";
                    cout << "Sua vida Restante: " << vida << '\n' << '\n';
                    cout << "Vida restante do demonio(3): " << vidadl3 << '\n' << '\n';
                }



                if (vidadl3 <= 0)
                {
                    cout << "parabens voce matou 1 demonio(3) e recuperou 35 de mana\n\n";
                    sleep_until(system_clock::now() + seconds(1));
                    mana = mana + 35;
                }




                cu = false;

            } while (vidadl3 >= 1);
            vidadl3 = 100;
        }
        if (vidadl3 <= 0); {
            cout << "Parabens voce encontrou o Antigo Artefato no ultimo corpo e finalizou a Terceira fase o codigo dessa fase foi:2367\n\n";
        }
    }

//Quarta fase
    if (code == 9825 ) {

        cout << "\n\n\033[91m" << "Vida: " << vida << "\033[0m" << '\n';
        cout << "\033[32m" << "Atq: " << atq << "\033[0m" << '\n';
        cout << "\033[36m" << "Mana: " << mana << "\033[0m" << '\n';
        cout << '\n' << "\033[93m" << "Feitico de cura(25) - Custo: 25" << "\033[0m\n\n";

        cout << "\n\n Fase 4: O Reino da Perdição\n\n";

        cout << "\nA Ao atravessar o portal, você chega ao Reino da Perdição, um lugar desolado e distorcido. Aqui, a realidade está em constante transformação e você deve resolver enigmas complexos para abrir caminho através de uma paisagem em constante mudança. Além disso, monstros grotescos e criaturas abomináveis estão à espreita, prontos para desafiar sua coragem.\n\n\n";

        cout << "\n\n\n Assim que voce Atravesou o portal voce avista 5 demonios de lvl(4) entao voce decide atacar eles\n\n";

        for (int dl4 = 1; dl4 <= 5; dl4++) {
            do {
                if (vida <= 0) {
                    cout << "avancou smoke, foi de americanas, foi de berco, contratado pelo vasco, lol\ntu morreu, mt ruim pprt, otario\n\n";
                    break;
                }
                cout << "\nVoce entrou em combate com um demonio(3)";
                cout << "\nOpcoes de combate\n";
                cout << "\n(1) - Ataque\n";
                cout << "\n(2) - Cura\n\nR:";
                cin >> opcc;
                cout << '\n';

                if (opcc == 2)
                {
                    if (mana > 25 && vida < 110)
                    {
                        cu = true;
                        vida = vida + 25;
                        mana = mana - 25;
                        cout << "Voce recuperou 25 de vida.\n";
                        cout << "Vida atual " << vida << '\n';
                        cout << "Voce esta com " << mana << " de mana\n\n";
                        sleep_until(system_clock::now() + seconds(1));
                    }

                    else
                    {
                        cout << "Voce esta sem mana, ou com a vida muito cheia, lol\n";
                        sleep_until(system_clock::now() + seconds(1));
                    }
                }


                if (opcc == 1)
                {
                    vidadl4 = vidadl4 - atq;
                    cout << "Voce Atacou um demonio(4)\n";
                    cout << "Vida restante do demonio(4): " << vidadl4 << '\n' << '\n';

                    sleep_until(system_clock::now() + seconds(2));
                }

                if (vidadl4 > 0 && cu == false)
                {
                    vida = vida - atqdl4;
                    cout << "\nO demonio te atacou\n";
                    cout << "Sua vida Restante: " << vida << '\n' << '\n';
                    cout << "Vida restante do demonio(4): " << vidadl4 << '\n' << '\n';
                }



                if (vidadl4 <= 0)
                {
                    cout << "parabens voce matou 1 demonio(4) e recuperou 35 de mana\n\n";
                    sleep_until(system_clock::now() + seconds(1));
                    mana = mana + 35;
                }




                cu = false;

            } while (vidadl4 >= 1);
            vidadl4 = 125;
        }
        if (vidadl4 <= 0); {
            cout << "Parabens voce consiguiu superar os enigmas e criaturas finalizou a Quarta fase o codigo dessa fase foi:9825\n\n";
        }
    }

//Quinta Fase (Ultima Fase)

    if (code == 1046 ) {

        mana = mana + 50;

        cout << "\n\n\033[91m" << "Vida: " << vida << "\033[0m" << '\n';
        cout << "\033[32m" << "Atq: " << atq << "\033[0m" << '\n';
        cout << "\033[36m" << "Mana: " << mana << "\033[0m" << '\n';
        cout << '\n' << "\033[93m" << "Feitico de cura(25) - Custo: 25" << "\033[0m\n\n";

        cout << "\n\n Fase 5: A Ascensão Final\n\n";

        cout << "\nNa última fase, você chega à entrada do Abismo Final, a porta que o levará de volta ao mundo dos vivos. No entanto, o senhor das trevas aguarda você como um último obstáculo. Prepare-se para uma batalha épica contra o poderoso demônio, usando todas as suas habilidades e poderes adquiridos ao longo da jornada. Sua determinação será testada até o limite, mas se você vencer, poderá retornar triunfante do inferno e restaurar a paz ao mundo.\n\n\n";

        cout << "\n\n\n Voce chegou na estrada do Abismo Final e Avistou o Senhor das Trevas e agora tera que lutar com ele\n\n";

            do {
                if (vida <= 0) {
                    cout << "avancou smoke, foi de americanas, foi de berco, contratado pelo vasco, lol\ntu morreu, mt ruim pprt, otario\n\n";
                    break;
                }
                cout << "\nVoce entrou em combate com o Senhor das Trevas";
                cout << "\nOpcoes de combate\n";
                cout << "\n(1) - Ataque\n";
                cout << "\n(2) - Cura\n\nR:";
                cin >> opcc;
                cout << '\n';

                if (opcc == 2)
                {
                    if (mana > 25 && vida < 110)
                    {
                        cu = true;
                        vida = vida + 25;
                        mana = mana - 25;
                        cout << "Voce recuperou 25 de vida.\n";
                        cout << "Vida atual " << vida << '\n';
                        cout << "Voce esta com " << mana << " de mana\n\n";
                        sleep_until(system_clock::now() + seconds(1));
                    }

                    else
                    {
                        cout << "Voce esta sem mana, ou com a vida muito cheia, lol\n";
                        sleep_until(system_clock::now() + seconds(1));
                    }
                }


                if (opcc == 1)
                {
                    vidaB = vidaB - atq;
                    cout << "Voce Atacou o Senhor das Trevas\n";
                    cout << "Vida restante do Senhor das Trevas: " << vidaB << '\n' << '\n';

                    sleep_until(system_clock::now() + seconds(2));
                }

                if (vidaB > 0 && cu == false)
                {
                    vida = vida - atqB;
                    cout << "\nO Senhor das Trevas te atacou\n";
                    cout << "Sua vida Restante: " << vida << '\n' << '\n';
                    cout << "Vida restante do Senhor das Trevas: " << vidaB << '\n' << '\n';
                }



                if (vidaB <= 0)
                {
                    cout << "parabens voce matou o Senhor das Trevas e recuperou 100 de mana\n\n";
                    sleep_until(system_clock::now() + seconds(1));
                    mana = mana + 100;
                }




                cu = false;

            } while (vidaB >= 1);
            if (vidaB <= 0); {
                cout << "Parabens voce consiguiu superar Todas as Fases e Derrotou o Senhor das Trevas o codigo dessa fase foi:1046\n\n";
            }
    }
       
       
    

}