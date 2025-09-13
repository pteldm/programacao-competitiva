#include<bits/stdc++.h>

using namespace std;

int main()
{   
    //  desligando a sincronização de entrada e saída
    ios::sync_with_stdio(0);
    //  desligando a amarração entre a entrada e a saída
    cin.tie(0);

    // variável que armazena o número de candidatos
    int number_of_aplicants=0;
    cin >> number_of_aplicants;

    //variável que armazena o número de apartamentos
    int number_of_apartments=0;
    cin >> number_of_apartments;

    //variável que armazena a tolerância máxima com o tamanho do apartamento
    long long maximum_diff=0;
    cin >> maximum_diff;

    // estrutura de dados que armazena o tamanho de apartamento desejado por cada cliente
    vector<long long> desired_apartment_size(number_of_aplicants);

    // preenchendo com os dados que armazena o tamanho de apartamento desejado por cada cliente
    for(int i = 0 ; i < number_of_aplicants ; ++i)
    {
        cin >> desired_apartment_size[i];
    }

    // estrutura de dados que armazena os tamanhos de apartamentos disponíveis
    vector<long long> apartment_size(number_of_apartments);

    // preenchendo com os dados dos tamanhos disponíveis de apartamentos
    for(int i = 0 ; i < number_of_apartments ; ++i)
    {
        cin >> apartment_size[i];
    }

    // ordenando as duas estruturas de dados
    sort(desired_apartment_size.begin(), desired_apartment_size.end());
    sort(apartment_size.begin(), apartment_size.end());

    //  variável que armazena a quantidade de pessoas que receberão apartamentos
    int receberam_ap = 0;
    //  índice do aplicante
    int applicant_idx = 0;
    //  índice do apartamento
    int apartment_idx = 0;

    // enquanto o valor de cada índice for menor do que o valor máximo correspondente às quantidades que eles representam o laço continua
    while(applicant_idx < number_of_aplicants && apartment_idx < number_of_apartments)
    {
        //  apartamento desejado
        //  acesso ao vetor dos apartamentos desejados no índice do primeiro cliente
        long long desired = desired_apartment_size[applicant_idx];  

        // apartamento disponível
        //  acesso ao vetor dos apartamentos disponíveis no índice do primeiro apartamento disponível
        long long available = apartment_size[apartment_idx];

        // se o apartamento disponível for maior que o limite inferior e menor que o limite superior
        // o cliente recebe o apartamento e os índices do cliente e do apartamento são incrementados
        if(available >= desired - maximum_diff && available <= desired + maximum_diff) 
        {
            receberam_ap++;
            applicant_idx++;
            apartment_idx++;
        } 
        else    
        {   
            //  caso contrário
            //  se o apartamento disponível for menor que o limite inferior,
            //  o índice do apartamento é incrementado 
            //  pois o próximo é garantidamente maior
            //  devido aos arrays estarem ordenados na ordem crescente 
            if(available < desired - maximum_diff) 
            {
                apartment_idx++;
            } 
            else
            { 
                //  caso contrário, o índice do cliente é incrementado
                //  para mudar o apartamento desejado que é garantidamente maior
                //  e pode passar na condição principal e o cliente receber o apartamento
                applicant_idx++;
            }
        }    
    }

    //  imprimindo o número de clientes que receberam o apartamento
    cout << receberam_ap << "\n";

    return 0;
}