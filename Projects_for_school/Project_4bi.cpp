//Davi Almeida Chagas 1ºC

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <locale.h>
#include <time.h>
#include <iostream>
#include <windows.h>
#include <math.h>
#include <ctype.h>
#include <string.h>
#include <cstdio>
#define PATHE "C:\\Projeto_4\\"
using namespace std;

  char Linha[100],q,hc;
  int i,qnt,esc,limite, grande,valor,oko,e,cont,j,esq,dir,meio,ok,temp,tam;
   int  ko=0,letra,LETRA,x,o,u,k,l,y,pi,t,choice,olk,chave,c,a,Letra,lim,ip,limx,limy,tamkey,spt,tamcrip,r,ta,h,g,tamcrito,z,p;
  int random[1000];
  int leitura[1000];
  int ahx=0;
int ahy=0;
char mensa[100],alfa[53],sub[53],monsa[7][7],cripto[100],descripto[100],key[11],yek[11];
	char olfa[81][81];
	char auxi[100];
  int busca[1000];
  int ordem[1000];
  char nome1[30];
  char nome[30];
  int num[1000];
     FILE *arq;
  char *nome_do_arquivo;
  char desti[61];
  char desto[61];
    int existe; 
  void gotoxy(int x, int y){
     SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),(COORD){x-1,y-1});
}
int main(void){
	
void cri_arq(void);
void ler_arq(void);
void buscas(void);
void ordenacoes(void);
void crip(void);
void rem_arq(void);
void ren_arq(void);	

setlocale(LC_ALL, "Portuguese");
gotoxy(1,1);printf("Projeto: 4 Bimestre");
gotoxy(1,3);printf("|Criar arquivo     ( )|                               |(W) Para cima   |");
gotoxy(1,4);printf("|Ler arquivo       ( )|                               |(S) Para baixo  |");
gotoxy(1,5);printf("|Buscas            ( )|                                                 ");
gotoxy(1,6);printf("|Ordenações        ( )|                                                 ");
gotoxy(1,7);printf("|Criptografias     ( )|                                                 ");
gotoxy(1,8);printf("|Remover arquivo   ( )|                                                 ");
gotoxy(1,9);printf("|Renomear arquivo  ( )|                                                 ");
gotoxy(1,10);printf("|Sair              ( )|                                                 ");
gotoxy(1,11);printf("Para escolher o item desejado, clique em uma tecla diferente de 'W' ou 'S'");
int x=3;
gotoxy(21,x);printf("X");
gotoxy(1,12);q=getche();
gotoxy(1,12);printf("     ");


while((q=='w')||(q=='s')||(q=='W')||(q=='S')){ 

gotoxy(1,3);printf("|Criar arquivo     ( )|                               |(W) Para cima   |");
gotoxy(1,4);printf("|Ler arquivo       ( )|                               |(S) Para baixo  |");
gotoxy(1,5);printf("|Buscas            ( )|                                                 ");
gotoxy(1,6);printf("|Ordenações        ( )|                                                 ");
gotoxy(1,7);printf("|Criptografias     ( )|                                                 ");
gotoxy(1,8);printf("|Remover arquivo   ( )|                                                 ");
gotoxy(1,9);printf("|Renomear arquivo  ( )|                                                 ");
gotoxy(1,10);printf("|Sair              ( )|                                                 ");
gotoxy(1,11);printf("Para escolher o item desejado, clique em uma tecla diferente de 'W' ou 'S'");

if((q=='w')||(q=='W')){
	x--;
	if(x<3){x=10;}
	gotoxy(21,x);printf("X");
	}

if((q=='s')||(q=='S')){
	x++;
	if(x>10){x=3;}
	gotoxy(21,x);printf("X");}
	
gotoxy(1,12);q=getche();
gotoxy(1,12);printf("     ");
}

if(x==3){
  	cri_arq();}
if(x==4){
  	ler_arq();}
if(x==5){
  	 buscas();}
if(x==6){
  ordenacoes();}
if(x==7){
    crip(); }
if(x==8){
      rem_arq();}
if(x==9){
      ren_arq();}
if(x==10){
      exit(0);}
  }
				        
void cri_arq(void){
	
void cri_num(void);
void cri_carac(void);
 printf("\n");
 printf("Selecionado: Criar arquivo");
 
gotoxy(1,15);printf("|Inteiros         (0)|");
gotoxy(1,16);printf("|Caracteres       (1)|");

int oko=0;
while(oko==0){
gotoxy(1,18);printf("Opção escolhida: ( )                                                                                                                         ");
gotoxy(19,18);scanf("%d",&esc);
if((esc==0)||(esc==1)){
oko=1;}}
 
 
 if(esc==0){
 	cri_num();}
if(esc==1){
	cri_carac();}

 }
 
 
void ler_arq(void){
	
void ler_num(void);
void ler_carac(void);
	 printf("\n");
 printf("Selecionado: Ler arquivo");
 
gotoxy(1,15);printf("|Inteiros         (0)|");
gotoxy(1,16);printf("|Caracteres       (1)|");


int oko=0;
while(oko==0){
gotoxy(1,18);printf("Opção escolhida: ( )                                                                                                                         ");
gotoxy(19,18);scanf("%d",&esc);
if((esc==0)||(esc==1)){
oko=1;}}
 
 
  if(esc==0){
 	ler_num();}
if(esc==1){
	ler_carac();}
 
}

void buscas(void){
	
void linear(void);
void binaria(void);
 printf("\n");
 printf("Selecionado: Buscas");
 
gotoxy(1,15);printf("|Linear         (0)|");
gotoxy(1,16);printf("|Binária        (1)|");


int oko=0;
while(oko==0){
gotoxy(1,18);printf("Opção escolhida: ( )                                                                                                                         ");
gotoxy(19,18);scanf("%d",&esc);
if((esc==0)||(esc==1)){
oko=1;}}
 
 
  if(esc==0){
 	linear();}
if(esc==1){
	binaria();}
 
}


void ordenacoes(void){
	
void permu(void);
void selc_dir(void);
void inser_dir(void);
void bolha(void);
void inser_bin(void);
	 printf("\n");
 printf("Selecionado: Ordenações");
 
 
gotoxy(1,15);printf("|Permutação               (0)|");
gotoxy(1,16);printf("|Seleção Direta           (1)|");
gotoxy(1,17);printf("|Inserção Direta          (2)|");
gotoxy(1,18);printf("|Bolha                    (3)|");
gotoxy(1,19);printf("|Inserção Binária         (4)|");


int oko=0;
while(oko==0){
gotoxy(1,21);printf("Opção escolhida: ( )                                                                                                                         ");
gotoxy(19,21);scanf("%d",&esc);
if((esc==0)||(esc==1)||(esc==2)||(esc==3)||(esc==4)){
oko=1;}}
 
     if(esc==0){
 	permu();}
      if(esc==1){
	selc_dir();}
	  if(esc==2){
 	inser_dir();}
      if(esc==3){
	bolha();}
	  if(esc==4){
 	inser_bin();}

}


void crip(void){
	
void simples(void);
void cesar(void);
void polialfa(void);
void trans_simples(void);
void trans_rota(void);
void rail_fence(void);
	 printf("\n");
 printf("Selecionado: Criptografias");
 
gotoxy(1,15);printf("|Simples                  (0)|");
gotoxy(1,16);printf("|Cesar                    (1)|");
gotoxy(1,17);printf("|Polialfa                 (2)|");
gotoxy(1,18);printf("|transposição Simples     (3)|");
gotoxy(1,19);printf("|Transposição por Rota    (4)|");
gotoxy(1,20);printf("|Rail Fence               (5)|");

int oko=0;
while(oko==0){
gotoxy(1,22);printf("Opção escolhida: ( )                                                                                                                         ");
gotoxy(19,22);scanf("%d",&esc);
if((esc==0)||(esc==1)||(esc==2)||(esc==3)||(esc==4)||(esc==5)){
oko=1;}}
 
     if(esc==0){
 	simples();}
      if(esc==1){
	cesar();}
	  if(esc==2){
 	polialfa();}
      if(esc==3){
	trans_simples();}
	  if(esc==4){
 	trans_rota();}
 	  if(esc==5){
 rail_fence();}
}


void rem_arq(void){
	 printf("\n");
 printf("Selecionado: Remover arquivo");
 printf("\n");
 
 	nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para excluir.");
                getche();		
                exit(0);		   }
			else{
	    printf("\nHá conteudo no arquivo em que se deseja excluir:");
	        printf("\n\n");
				while((hc=getc(arq)) != EOF) {
			printf("%c",hc);}
					getch();}
					
 printf("\n\nDeseja mesmo excluir arquivo? Não(0)  Sim(1)\n\n");
 int eke=0;
 while(eke==0){
 	scanf("%d",&esc);
 	if((esc==1)||(esc==0)){
 		eke=1; }}
 		if(esc==0){
 			printf("\nArquivo não será excluído!\n");
 			exit(0);
		 }
		 
		 if(esc==1){
if (remove(nome_do_arquivo) != 0){
		perror("Falha ao remover arquivo!");}
	else{
	
		cout << "Arquivo removido com sucesso!";}
	

}
		 }

void ren_arq(void){
	 printf("\n");
 printf("Selecionado: Renomear arquivo");
 
 		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        printf("%s",desti); 
        getche();
 
		
		printf("\n\nEntre com o nome do novo arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome);
	
        strcat(desto,PATHE); 
        strcat(desto,nome);
        printf("%s",desto); 
        getche();
	    
	if(rename(desti,desto) == 0) 
	{
     printf("Arquivo renomeado com sucesso!\n");
    }
	else
	{
     printf("\n\nNão foi possível renomear o arquivo");
    }
 
}	  




void simples(void){
	 printf("\n");
 printf("Selecionado: Criptografia Simples");
 printf("\n\n");
	printf("------------------------------------------");
	printf("\n| Criptografar(1)   Descriptografar(0)   |");
	printf("\n------------------------------------------");
	while(ok==0){
	printf("\n Deseja qual opção? ");
	scanf("%d", &pi);
	

			nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
			        printf("\n\n");
				while((hc=getc(arq)) != EOF) {
			printf("%c",hc);}
					fclose(arq);
					getch();
					exit(0);}
fprintf(arq,"Selecionado: Criptografia Simples\n\n");

	if(pi==0){
		
printf("\n ESCOLHA: DESCRIPTOGRAFAR");
fprintf(arq,"ESCOLHA: DESCRIPTOGRAFAR");
fprintf(arq, "\n\n");
void alfabe(void);	
int i=1;
int t;
alfabe();
printf("\n");
printf("Digite uma mensagem:\n");
fprintf(arq,"Digite uma mensagem:\n" );
while(((mensa[i]=getche()) != 13) && i<=100){
	putc(mensa[i],arq); 
	i++;
}
tam=i; 

i=1;
while(i<=tam)
{
	t=1;
	while(t<=52){
		if(mensa[i]==sub[t]){
			descripto[i]=alfa[t];}
t++;}
i++;
}
	printf("\nMensagem descriptografada\n\n");
	fprintf(arq,"\n\nMensagem descriptografada:" );
	fprintf(arq, "\n");
	printf("\n");
	for(i=1;i<=52;i++){
		printf("%c",descripto[i]);
		fprintf(arq, "%c",descripto[i]);
	}
	fclose(arq);
	exit(0);
	}
	

	if(pi==1){
		
printf("\n ESCOLHA: CRIPTOGRAFAR");
fprintf(arq,"ESCOLHA: CRIPTOGRAFAR");
fprintf(arq, "\n\n");
void alfabe(void);	
int i=1;
int t;
alfabe();
printf("\n");
printf("Digite uma mensagem\n");
fprintf(arq,"Digite uma mensagem:\n" );
while(((mensa[i]=getche()) != 13) && i<=100){
	putc(mensa[i],arq);
	i++;
}
tam=i; 

i=1;
while(i<=tam)
{
	t=1;
	while(t<=52){
		if(mensa[i]==sub[t]){
			descripto[i]=alfa[t];}
t++;}
i++;
}
	printf("Mensagem criptografada\n\n");
	fprintf(arq,"\n\nMensagem criptografada:" );
	fprintf(arq, "\n");
	printf("\n");
	for(i=1;i<=52;i++){
		printf("%c",descripto[i]);
		fprintf(arq, "%c", descripto[i]);
	}
	fclose(arq);
	exit(0);
}
	
if((pi!=1)||(pi!=0)){
		ok=0;
}
	ko=1;
ok=1;}

}



void cesar(void){
	void alfabe(void);
	 printf("\n");
 printf("Selecionado: Criptografia de César");
printf("\n\n");
	printf("------------------------------------------");
	printf("\n| Criptografar(1)   Descriptografar(0)   |");
	printf("\n------------------------------------------");
	alfabe();
	while(ok==0){
	printf("\n Deseja qual opção? ");
	scanf("%d", &pi);
	
	
				nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
	        printf("\n\n");
				while((hc=getc(arq)) != EOF) {
			printf("%c",hc);}
					fclose(arq);
					getch();
					exit(0);}
	fprintf(arq,"Selecionado: Criptografia de César\n\n");

	
if(pi==0){
		
	printf("\n ESCOLHA: DESCRIPTOGRAFAR");
fprintf(arq, "ESCOLHA: DESCRIPTOGRAFAR");
fprintf(arq, "\n\n");

int descripto[81];

i=1;
printf("\nDigite a mensagem que deseja:\n");
fprintf(arq, "Digite a mensagem que deseja: ");
while(((mensa[i]=getche()) != 13 ) && (i<81)){
	putc(mensa[i],arq);
    i++;  	
}
	tam=i-1;
	
 i=1;
	while(i==1)
	{
	fprintf(arq,"\n\n");
	printf("\n\nEntre com um valor entre 0 e 53: ");
	scanf("%d",&chave);
	if((chave >=0) && ( chave <=53))
			i=0;
}
fprintf(arq, "Entre com um valor entre 0 e 53: %d",chave);

for(i=1;i<=tam;i++){
  for(t=0;t<=53;t++){
    if(mensa[i]==alfa[t]){
	c=t-chave; 
	if(c>=0){
	    descripto[i]=alfa[c];}else{
								c=c+53;} 
								descripto[i]=alfa[c];	
		     			}
	         }
	}
	
  printf("Mensagem descriptografada\n\n");	
  fprintf(arq, "\n\nMensagem descriptografada: ");
  for(i=1;i<=tam;i++){
	 printf("%c",descripto[i]);
	 fprintf(arq, "%c", descripto[i]);
	 }
	 	 fclose(arq);
	 	 exit(0);
}

	
if(pi==1){
		
printf("\n ESCOLHA: CRIPTOGRAFAR");
fprintf(arq, "ESCOLHA: CRIPTOGRAFAR");		
i=1;		
		printf("\nDigite a mensagem que deseja:\n");
		fprintf(arq, "\n\nDigite a mensagem que deseja: ");
while(((mensa[i]=getche()) != 13 ) && (i<81)){
	putc(mensa[i],arq);
    i++;  	
}
	tam=i-1;
	
i=1;
	while(i==1){
	printf("\n\nEntre com um valor entre 0 e 53: ");
	scanf("%d",&chave);
	if((chave >=0) && ( chave <=53))
		i=0;}

fprintf(arq, "\n\nEntre com um valor entre 0 e 53: %d",chave);		
		
int cripto[81];
for(i=1;i<=tam;i++){
	for(t=0;t<=53;t++){
		if(mensa[i]==alfa[t]){
			c=chave+t;
			if(c<=53){
				cripto[i]=alfa[c];
			}else{
				c=c-53;
				cripto[i]=alfa[c];}}}}

printf("Mensagem criptografada por cifra de Cesar\n");
fprintf(arq,"\n\nMensagem criptografada por cifra de Cesar: ");

for(i=1;i<=tam;i++){
printf("%c",cripto[i]);
fprintf(arq, "%c",cripto[i]);
}
fclose(arq);
exit(0);
}
		
		
if((pi!=1)||(pi!=0)){
		ok=0;
}
	ko=1;
ok=1;}}




void polialfa(void){
void alfa_poli(void);
	 printf("\n");
 printf("Selecionado: Criptografia Polialfa");
	printf("\n\n");
	printf("------------------------------------------");
	printf("\n| Criptografar(1)   Descriptografar(0)   |");
	printf("\n------------------------------------------");
	while(ok==0){
	printf("\n Deseja qual opção? ");
	scanf("%d", &pi);
	
				nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
	        printf("\n\n");
				while((hc=getc(arq)) != EOF) {
			printf("%c",hc);}
					fclose(arq);
					getch();
					exit(0);}
	
	 fprintf(arq,"Selecionado: Criptografia Poli-Alfa\n\n");

	if(pi==0){
		
		printf("\n ESCOLHA: DESCRIPTOGRAFAR");
		printf("\n\n");
		fprintf(arq, "ESCOLHA: DESCRIPTOGRAFAR");
        fprintf(arq, "\n\n");
			alfa_poli();
		
		for(i=1;i<=tam;i++){
     		for(j=2;j<=tamkey+1;j++){
     			if(monsa[2][i]==olfa[j][1]){
     			   	  for(k=1;k<=52;k++){
     			   	  		if(monsa[1][i]==olfa[j][k]){
     			   	  		    descripto[i]=olfa[1][k];
     			   	  		    k=53;
     			   	  		    j=tamkey+2;}}}}}
    
	printf("\n\nDescriptografia da mensagem:\n");
	  fprintf(arq, "\n\nMensagem descriptografada: ");
	for(i=1;i<=tam;i++){
		printf("%c", descripto[i]);
		fprintf(arq, "%c", descripto[i]);}
			fclose(arq);
			exit(0);
	}
	if(pi==1){
		
		printf("\n ESCOLHA: CRIPTOGRAFAR");
		printf("\n\n");
		fprintf(arq, "ESCOLHA: CRIPTOGRAFAR");
        fprintf(arq, "\n\n");
		alfa_poli();
		    for(i=1;i<=tam;i++){
     		for(j=1;j<=52;j++){
     			if(monsa[1][i]==olfa[1][j]){
     			   	  for(k=2;k<=tamkey+1;k++){
     			   	  		if(monsa[2][i]==olfa[k][1]){
     			   	  		    cripto[i]=olfa[k][j];
     			   	  		    k=tamkey+2;
     			   	  		    j=53;}}}}}


	printf("\n\nMensagem criptografada:\n");
	fprintf(arq, "Mensagem criptografada: ");
	for(i=1;i<=tam;i++){
		printf("%c", cripto[i]);
		fprintf(arq, "%c", cripto[i]);}
		fclose(arq);
		exit(0);
}
	
if((pi!=1)||(pi!=0)){
		ok=0;
}
	ko=1;
ok=1;}}




void trans_simples(void){
	 printf("\n");
 printf("Selecionado: Criptografia de Transposição Simples");
	printf("\n\n");
	printf("------------------------------------------");
	printf("\n| Criptografar(1)   Descriptografar(0)   |");
	printf("\n------------------------------------------");
	
	printf("\n Deseja qual opção? ");
	scanf("%d", &pi);
	
	nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
	        printf("\n\n");
				while((hc=getc(arq)) != EOF) {
			printf("%c",hc);}
					fclose(arq);
					getch();
					exit(0);}
	
	 fprintf(arq,"Selecionado: Criptografia Transposição Simples\n\n");
	
	
	if(pi==0){
		
		printf("\n ESCOLHA: DESCRIPTOGRAFAR"); 
		printf("\n");
		fprintf(arq, "ESCOLHA: DESCRIPTOGRAFAR");
        fprintf(arq, "\n\n");
		printf("Digite uma chave, com até 10 caracteres e sem letras repetidos:");
		printf("\n");
		i=1;
while(((key[i]=getche()) != 13 ) && (i<11)){
	  key[i]=toupper(key[i]);	
    	for(l=1;l<=i-1;l++)
		{
		    if(key[i]==key[l]){
			 printf("\nLetra repetida. Tecle para voltar");
			    getche();
				j=82;
			    i=i-1;}}
         i++; }

tamkey=i-1; 
printf("\n\n Chave digitada:");
fprintf(arq,"\n\nChave digitada: ");
for(i=1;i<=tamkey;i++){
	yek[i]=key[i];
	printf("%c",key[i]);
	fprintf(arq,"%c",key[i]);
}
printf("\n");
printf("\n Chave ordenada:");
fprintf(arq,"\n");
fprintf(arq,"Chave ordenada: ");
for(i=1;i<=tamkey;i++){
	for(l=tamkey;l>=i;l--){
		if(yek[i]>yek[l]){
			spt=yek[i];
			yek[i]=yek[l];
			yek[l]=spt;}}}
for(i=1;i<=tamkey;i++){
	printf("%c",yek[i]);
	fprintf(arq,"%c",yek[i]);
}			

printf("\n\n");
printf("Digite a mensagem para ser descriptografada: Até 80 caracteres");
fprintf(arq,"\n\n");
fprintf(arq,"Digite a mensagem para ser descriptografada: Até 80 caracteres: ");
printf("\n");
printf("Aviso: Para o funcionamento correto, utilize '_' em momentos necessários:\n");
printf("\n");
		i=1;
while(((mensa[i]=getche()) != 13 ) && (i<81)){
	putc(mensa[i],arq);
    i++;  	
}
tam=i-1;
	
	for(y=1;y<=tamkey;y++){
	monsa[1][y]=key[y];}

    if(tam%tamkey==0)
        ta=(tam+(tamkey*2))/tamkey;
    else
        ta=(((tamkey-(tam%tamkey))+tam)+(tamkey*2))/tamkey;

i=1;
h=1;	

	while((h<=tamkey)&&(i<=tam)){
	for(y=1;y<=tamkey;y++){
if(yek[h]==monsa[1][y]){
	for(x=2;x<=ta;x++){
		monsa[x][y]=mensa[i];
		i++;
		if(monsa[x][y]=='_'){
		h=h+1;
		monsa[x][y]=' ';
		break;}
}}}}

	for(x=1;x<=ta;x++){
		printf("\n");
		for(y=1;y<=tamkey;y++){
			printf("%c",monsa[x][y]);
		}
	}
	printf("\n");
	printf("Descriptografia:");
	fprintf(arq,"\n\nDescriptografia: ");
	printf("\n");
	
i=1;
while(i<tam){
	for(x=2;x<=ta;x++){
		for(y=1;y<=tamkey;y++){
			descripto[i]=monsa[x][y];
			i++;
		}
	}
	
}
	

for(i=1;i<=tam;i++){
	printf("%c",descripto[i]);
	fprintf(arq,"%c",descripto[i]);
}	
fclose(arq);
exit(0);
}


	if(pi==1){
		
		printf("\n ESCOLHA: CRIPTOGRAFAR");
				printf("\n");
		fprintf(arq, "ESCOLHA: CRIPTOGRAFAR");
        fprintf(arq, "\n\n");
		printf("Digite uma chave, com até 10 caracteres e sem letras repetidos:");
		printf("\n");
		i=1;
while(((key[i]=getche()) != 13 ) && (i<11)){
	  key[i]=toupper(key[i]);	
    	for(l=1;l<=i-1;l++)
		{
		    if(key[i]==key[l]){
			 printf("\nLetra repetida. Tecle para voltar");
			    getche();
				j=82;
			    i=i-1;}}
         i++; }
tamkey=i-1; 
printf("\n\n Chave digitada:" );
fprintf(arq,"\n\nChave digitada: ");
for(i=1;i<=tamkey;i++){
	yek[i]=key[i];
	printf("%c",key[i]);
	fprintf(arq,"%c",key[i]);
}
printf("\n");
printf("\n Chave ordenada: ");
fprintf(arq,"\nChave ordenada: ");
for(i=1;i<=tamkey;i++){
	for(l=tamkey;l>=i;l--){
		if(yek[i]>yek[l]){
			spt=yek[i];
			yek[i]=yek[l];
			yek[l]=spt;}}}
for(i=1;i<=tamkey;i++){
	printf("%c",yek[i]);
	fprintf(arq,"%c",yek[i]);
}			

printf("\n\n");
printf("Digite a mensagem para ser criptografada: Até 80 caracteres: ");
fprintf(arq,"\n\n");
fprintf(arq,"Digite a mensagem para ser descriptografada: Até 80 caracteres: ");
		i=1;
		printf("\n");
while(((mensa[i]=getche()) != 13 ) && (i<81)){
	putc(mensa[i],arq);
    i++;  	
}
tam=i-1;

for(y=1;y<=tamkey;y++){
	monsa[1][y]=key[y];}
	
	i=1;
	x=2;	
	while(i<=tam){
	 	for(y=1;y<=tamkey;y++){
	 		monsa[x][y]=mensa[i];
	 		i++;
	 		if(i>tam){
	 		   y=tamkey+1;}}
x++;}
		  ta=x-1;
		 printf("\n\n");
		printf("\nMatriz da mensagem");
	  for(x=1;x<=ta;x++){
	     printf("\n"); 
	     for(y=1;y<=tamkey;y++){
	      printf("%c",monsa[x][y]);}}
		 
		 r=1; 
	  
	  for(x=1;x<=tamkey;x++){
	  	for(y=1;y<=tamkey;y++){
	  		if(yek[x]==monsa[1][y]){
	  			for(t=2;t<=ta;t++){
	  				cripto[r]=monsa[t][y];
	  				r++;}
				  cripto[r]='_'; 
				  r++;}}} 	  
			 
     tamcrip=r-1;	
printf("\n\n");
 	  printf("\nCriptografia:\n");
 	  fprintf(arq,"\n\nCriptografia: ");
 	  for(r=1;r<=tamcrip;r++){
          printf("%c", cripto[r]);
          fprintf(arq,"%c",cripto[r]);}
          if((pi!=1)||(pi!=0)){
		ok=0;
}
fclose(arq);
}exit(0);

}



void trans_rota(void){
	void trans_rota_hori(void);
	void trans_rota_verti(void);
	 printf("\n");
 printf("Selecionado: Criptografia Transposição por Rota");
 printf("\n\n");
	printf("------------------------------------------");
	printf("\n| Horizontal(1)           Vertical(0)    |");
	printf("\n------------------------------------------");
	while(ok==0){
	printf("\n Deseja qual opção? ");
	scanf("%d", &pi);
	
	if(pi==0){
	
		trans_rota_verti();}
	
	if(pi==1){
		
		trans_rota_hori();}
	
if((pi!=1)||(pi!=0)){
		ok=0;
}
	ko=1;
ok=1;}
}



void rail_fence(void){
	 printf("\n");
 printf("Selecionado: Criptografia Rail Fence");
 printf("\n\n");
	printf("--------------------------------------------------");
	printf("\n| Criptografar(1)           Descriptografar(0)    |");
	printf("\n---------------------------------------------------");
	while(ok==0){
	printf("\n Deseja qual opção? ");
	scanf("%d", &pi);


	nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
	        printf("\n\n");
				while((hc=getc(arq)) != EOF) {
			printf("%c",hc);}
					fclose(arq);
					getch();
					exit(0);}
	
	 fprintf(arq,"Selecionado: Criptografia Rail fence\n\n");

	if(pi==1){
	
		printf("\n ESCOLHA: CRIPTOGRAFAR");
		printf("\n");
		fprintf(arq, "ESCOLHA: CRIPTOGRAFAR");
        fprintf(arq, "\n\n");
  		printf("Digite a mensagem a ser criptografada: Até 100 caracteres");
  		printf("\n");
  		fprintf(arq,"Digite a mensagem a ser criptografada: Até 100 caracteres: ");
  		i=1;
  		while(((mensa[i]=getche())!=13)&&(i<=100)){
  			putc(mensa[i],arq);
  			i++;
		  }
  		tam=i-1;
  		
  		for(p=1;p<=3;p++){
  			for(y=1;y<=tam;y++){
  				monsa[p][y]=' ';}}
  		
  		i=1;
  		p=1;
  		y=1;
  		while(y<=tam){
  			while(p<=2){
  				monsa[p][y]=mensa[i];
  				i++;
  				p++;
  				y++;}
  			while(p>=2){
  				monsa[p][y]=mensa[i];
  				i++;
  				p--;
  				y++;}}
  			
  				
  			for(p=1;p<=3;p++){
  			printf("\n");
  			for(y=1;y<=tam;y++){
  				if(monsa[p][y]==' '){
  					monsa[p][y]='.';}}}
				  fprintf(arq,"\n\n");
  			for(p=1;p<=3;p++){
  			printf("\n");
  			fprintf(arq,"\n");
  			for(y=1;y<=tam;y++){
  				printf("%c ",monsa[p][y]);
				  fprintf(arq,"%c ",monsa[p][y]);
				  }}
  		
 		p=1;
  		i=1;
  		while(p<=3){
	for(y=1;y<=tam;y++){
		if(monsa[p][y]!='.'){
			cripto[i]=monsa[p][y];
			i++;}}
			p=p+1;
			i++;
			cripto[i]=' ';}
		 
  	int tamcrip=i;
  	
  	printf("\n");
  	printf("Mensagem criptografada por Rail Fence");
  	printf("\n");
  	fprintf(arq,"\n");
  	fprintf(arq,"\nMensagem criptografada por Rail Fence: ");
  	for(i=1;i<=tamcrip;i++){
  		printf("%c",cripto[i]);
  		fprintf(arq,"%c",cripto[i]);
	  }
	  fclose(arq);
		exit(0);
		}
	if(pi==0){
		
		printf("\n ESCOLHA: DESCRIPTOGRAFAR");
		printf("\n");
		fprintf(arq, "ESCOLHA: DESCRIPTOGRAFAR");
        fprintf(arq, "\n\n");
  		printf("Digite a mensagem a ser descriptografada: Até 100 caracteres");
  		printf("\n");
  		fprintf(arq,"Digite a mensagem a ser descriptografada: Até 100 caracteres: ");
  		i=1;
  		while(((mensa[i]=getche())!=13)&&(i<=100)){
  			putc(mensa[i],arq);
  			i++;}
  		tam=i-1;
  		
  		  		for(p=1;p<=3;p++){
  			for(y=1;y<=tam;y++){
  				monsa[p][y]=' ';}}
  		  		
i=1;
y=1;	
p=1;  	
while(y<=tam){
	monsa[p][y]=mensa[i];
	y=y+4;
	i++;}

int tamdes=i+1;

i=tamdes;
y=2;	
p=2;  	
while(y<=tam){
	monsa[p][y]=mensa[i];
	y=y+2;
	i++;}
	
tamdes=i;

i=tamdes;
y=3;	
p=3;  	
while(y<=tam){
	monsa[p][y]=mensa[i];
	y=y+4;
	i++;}
	
tamdes=i;

  		
  			for(p=1;p<=3;p++){
  			printf("\n");
  			for(y=1;y<=tam;y++){
  				if(monsa[p][y]==' '){
  					monsa[p][y]='.';}}}
fprintf(arq,"\n\n");
for(p=1;p<=3;p++){
  	printf("\n");
  	fprintf(arq,"\n");
  	 	for(y=1;y<=tam;y++){
  				printf("%c ",monsa[p][y]);
				  fprintf(arq,"%c ",monsa[p][y]);
				  }}
		  				
   	i=1;
  	p=1;
  	y=1;
  	while(y<=tam){
  		while(p<=2){
  			if(monsa[p][y]=='.'){
  				p=p+1;}
  				cripto[i]=monsa[p][y];
  				i++;
  				p++;
  				y++;}
  		while(p>=2){
  				if(monsa[p][y]=='.'){
  				p=p+1;}
  				cripto[i]=monsa[p][y];
  				i++;
  				p--;
  				y++;}}
				   			
				  printf("\n");
				 printf("Mensagem descriptografada:"); 
				 fprintf(arq,"\nMensagem descriptografada: ");
				  printf("\n");
				  
	for(i=1;i<=tamdes;i++){
		printf("%c",cripto[i]);
		fprintf(arq,"%c",cripto[i]);
		}		
		
 fclose(arq);
		exit(0);
	}


if((pi!=1)||(pi!=0)){
		ok=0;
}
	ko=1;
ok=1;}

}



void permu(void){
	printf("\n");
	printf("Selecionado: Ordenação por permutação");

		nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
			i=0;
			printf("\n");
        while(fscanf(arq,"%d",&valor)!=EOF){
                leitura[i]=valor;
		    printf("%d ",leitura[i]);
		        i++;}
			 getch();
			fclose(arq);
					exit(0);}
		fprintf(arq,"Selecionado: Ordenação por permutação\n\n");
	                                                                                                                                                                                                                                                                                                                                                                                                                        

		oko=0;
		while(oko==0){
	   gotoxy(1,31);printf("Deseja quantos números?                                                                                                               ");
	   gotoxy(25,31);scanf("%d",&limite);
		if(limite>0){
			oko=1;	}}
	
		oko=0;
		while(oko==0){
	    printf("\n");
	   gotoxy(1,33);printf("O quão grande podem ser os números?                                                                                                   ");
	   gotoxy(38,33);scanf("%d",&grande);
	    if(grande>0){
	    	oko=1;
		}}
	    
	    i=0;
	    printf("\n");
	    while(i<limite){
	    	ordem[i]=rand()%grande;
	    	printf("%d ", ordem[i]);
	    	fprintf(arq, "%d ",ordem[i]);
	    	i++;}
	    	
	    	
	    printf("\n\n");
	    fprintf(arq,"\n\n\n\n");
	    for(i=0;i<limite;i++){
	    	for(j=limite-1;j>=i;j--){
	    		if(ordem[i]>ordem[j]){
	    			temp=ordem[i];
	    			ordem[i]=ordem[j];
	    			ordem[j]=temp;		}}
		}	
	    		
			i=0;		
	    	while(i<limite){
	    		printf("%d ", ordem[i]);
	    	fprintf(arq, "%d ",ordem[i]);
	    	i++;
			}
		fclose(arq);
}



void selc_dir(void){
	printf("\n");
	printf("Selecionado: Ordenação por seleção direta");
	
		nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
			i=0;
			printf("\n");
        while(fscanf(arq,"%d",&valor)!=EOF){
                leitura[i]=valor;
		    printf("%d ",leitura[i]);
		        i++;}
			 getch();
			fclose(arq);
					exit(0);}
					
	fprintf(arq,"Selecionado: Ordenação por seleção direta\n");
	                                                                                                                                                                                                                                                                                                                                                                                                                        

		oko=0;
		while(oko==0){
	   gotoxy(1,31);printf("Deseja quantos números?                                                                                                               ");
	   gotoxy(25,31);scanf("%d",&limite);
		if(limite>0){
			oko=1;	}}
	
		oko=0;
		while(oko==0){
	    printf("\n");
	   gotoxy(1,33);printf("O quão grande podem ser os números?                                                                                                   ");
	   gotoxy(38,33);scanf("%d",&grande);
	    if(grande>0){
	    	oko=1;
		}}
	    
	    i=0;
	    printf("\n");
	    fprintf(arq,"\n");
	    while(i<limite){
	    	ordem[i]=rand()%grande;
	    	printf("%d ", ordem[i]);
	    	fprintf(arq, "%d ",ordem[i]);
	    	i++;}
	    	
	    	fprintf(arq,"\n\n");
	    	printf("\n\n");
	for(i=1;i<=limite-1;i++){
	k=i;
	x=ordem[i];
	for(j=i+1;j<=limite;j++){
		if(ordem[j]<x){
			k=j;
			x=ordem[k];}}
			ordem[k]=ordem[i];
			ordem[i]=x;}
		for(i=1;i<=limite;i++){
			printf("%d ",ordem[i]);
			fprintf(arq,"%d ",ordem[i]);
			}
	
	fclose(arq);
	
}



void inser_dir(void){
	printf("\n");
	printf("Selecionado: Ordenação por inserção direta");

		nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
			i=0;
			printf("\n");
        while(fscanf(arq,"%d",&valor)!=EOF){
                leitura[i]=valor;
		    printf("%d ",leitura[i]);
		        i++;}
			 getch();
			fclose(arq);
					exit(0);}
					
	fprintf(arq,"Selecionado: Ordenação por inserção direta\n");
	                                                                                                                                                                                                                                                                                                                                                                                                                        
		oko=0;
		while(oko==0){
	   gotoxy(1,31);printf("Deseja quantos números?                                                                                                               ");
	   gotoxy(25,31);scanf("%d",&limite);
		if(limite>0){
			oko=1;	}}
	
		oko=0;
		while(oko==0){
	    printf("\n");
	   gotoxy(1,33);printf("O quão grande podem ser os números?                                                                                                   ");
	   gotoxy(38,33);scanf("%d",&grande);
	    if(grande>0){
	    	oko=1;
		}}
	    
	    i=0;
	    printf("\n");
	    fprintf(arq,"\n");
	    while(i<limite){
	    	ordem[i]=rand()%grande;
	    	printf("%d ", ordem[i]);
	    	fprintf(arq, "%d ",ordem[i]);
	    	i++;}
	    	
	    	fprintf(arq,"\n\n");
	    	printf("\n\n");


	  for(i=1;i<=limite-1;i++){
	  	k=i;
	  	x=ordem[i];
	  	for(j=i+1;j<=limite;j++){  
	  	   if(ordem[j]<x)
			 {
			 	k=j;
			 	x=ordem[k];
			 }  
	  		
		}
		ordem[k]=ordem[i];
		ordem[i]=x;
	  }
	
	for(i=1;i<=limite;i++){
      	   printf("%d ",ordem[i]);
      	   fprintf(arq,"%d ",ordem[i]);

	  }
		fclose(arq);

}


void bolha(void){
	printf("\n");
	printf("Selecionado: Ordenação por bolha");
			nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
			i=0;
			printf("\n");
        while(fscanf(arq,"%d",&valor)!=EOF){
                leitura[i]=valor;
		    printf("%d ",leitura[i]);
		        i++;}
			 getch();
			fclose(arq);
					exit(0);}
					
	fprintf(arq,"Selecionado: Ordenação por bolha\n");
	                                                                                                                                                                                                                                                                                                                                                                                                                        
		oko=0;
		while(oko==0){
	   gotoxy(1,31);printf("Deseja quantos números?                                                                                                               ");
	   gotoxy(25,31);scanf("%d",&limite);
		if(limite>0){
			oko=1;	}}
	
		oko=0;
		while(oko==0){
	    printf("\n");
	   gotoxy(1,33);printf("O quão grande podem ser os números?                                                                                                   ");
	   gotoxy(38,33);scanf("%d",&grande);
	    if(grande>0){
	    	oko=1;
		}}
	    
	    i=0;
	    printf("\n");
	    fprintf(arq,"\n");
	    while(i<limite){
	    	ordem[i]=rand()%grande;
	    	printf("%d ", ordem[i]);
	    	fprintf(arq, "%d ",ordem[i]);
	    	i++;}
	    	
	    	fprintf(arq,"\n\n");
	    	printf("\n\n");
	    	
	 int ind2,troquei;
        ind2 =limite;
        troquei=0;
do{
 troquei =0;
for(i=1;i<=ind2-1;i++){
if (ordem[i] > ordem[i+1]){
                        temp = ordem[i];
                        ordem[i] = ordem[i +1];
                         ordem[i+1] = temp;
                        troquei =1;}}
ind2 = ind2 - 1;}
 while (troquei==1);
 
        for(i=0;i<=limite;i++){
        	printf("%d ",ordem[i]);
			fprintf(arq,"%d ",ordem[i]);
			}
	fclose(arq);
}


void inser_bin(void){
	printf("\n");
	printf("Selecionado: Ordenação por inserção binária");
			nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
			i=0;
			printf("\n");
        while(fscanf(arq,"%d",&valor)!=EOF){
                leitura[i]=valor;
		    printf("%d ",leitura[i]);
		        i++;}
			 getch();
			fclose(arq);
					exit(0);}
					
	fprintf(arq,"Selecionado: Ordenação por inserção binária\n");
	                                                                                                                                                                                                                                                                                                                                                                                                                        

		oko=0;
		while(oko==0){
	   gotoxy(1,31);printf("Deseja quantos números?                                                                                                               ");
	   gotoxy(25,31);scanf("%d",&limite);
		if(limite>0){
			oko=1;	}}
	
		oko=0;
		while(oko==0){
	    printf("\n");
	   gotoxy(1,33);printf("O quão grande podem ser os números?                                                                                                   ");
	   gotoxy(38,33);scanf("%d",&grande);
	    if(grande>0){
	    	oko=1;
		}}
	    
	    i=0;
	    printf("\n");
	    fprintf(arq,"\n");
	    while(i<limite){
	    	ordem[i]=rand()%grande;
	    	printf("%d ", ordem[i]);
	    	fprintf(arq, "%d ",ordem[i]);
	    	i++;}
	    	
	    	fprintf(arq,"\n\n");
	    	printf("\n\n");
	
	int r,l,pos;
	
for(i=1;i<limite;i++){
	   	    temp=ordem[i];
	        l=0;
	        r=i;
	        while(l < r){     
	            pos = (l + r) / 2;
	            if(ordem[pos] <= temp) 
	                 l = pos + 1;
	            else
	                 r = pos;
	        }
           for(j=i;j>=r+1;j--){
               ordem[j]=ordem[j-1];

	       
	       ordem[r]=temp;
      }}
      printf("\n");
    for(i=0;i<limite;i++){
      	   printf("%d ",ordem[i]);
      	   	    	fprintf(arq, "%d ",ordem[i]);
	  }
	  fclose(arq);
}


void cri_num(void){
	printf("\n");
	printf("Selecionado: Criar arquivo numérico");
	
	nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possível criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	            	printf("\nJá há conteudo no arquivo em que se deseja criar:");
						i=0;
						printf("\n");
                while(fscanf(arq,"%d",&valor)!=EOF){
                   leitura[i]=valor;
		        	printf("%d ",leitura[i]);
		                	i++;}
						getch();
						fclose(arq);
					exit(0);}
				

		printf("\n DIGITE, Enter para sair, Espaço para pular de posição\n\n");
	arq=fopen(nome_do_arquivo,"w");
			i=0; 
			while((num[i]=getche()) != 13){
			putc(num[i],arq);
			if(num[i]==' '){
				i++;	}
			}
			fclose(arq);
	}
	

void cri_carac(void){
	printf("\n");
	printf("Selecionado: Criar arquivo com caracteres");
	
		nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possível criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	            	printf("\nJá há conteudo no arquivo em que se deseja criar:");
	            	printf("\n");
					while((hc=getc(arq)) != EOF) 
			      	printf("%c",hc);
					fclose(arq);
						getch();
					exit(0);}
				

		printf("\n DIGITE, enter para sair \n\n");
	arq=fopen(nome_do_arquivo,"w");
	
		while((hc=getche()) != 13) 
				putc(hc,arq); 
			fclose(arq);

				}
    


void ler_num(void){
	printf("\n");
	printf("Selecionado: Ler arquivo numérico");
	
			nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	printf("\n\n");
		if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();	
                exit(0);
				}
                else{
            printf("\n");
            i=0;
				while(fscanf(arq,"%d ",&valor) != EOF){
				leitura[i]=valor;
			  	printf("%d ",valor);
			  	i++;}
		fclose(arq);
		getch();}
		exit(0);
}


void ler_carac(void){
	printf("\n");
	printf("Selecionado: Ler arquivo com caracteres");
	
			nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	printf("\n\n");
	if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();	
                exit(0);
				}
                else{
            printf("\n");
				while((hc=getc(arq)) != EOF) {
			printf("%c",hc);}
					fclose(arq);
					getch();
					exit(0);}
			
}

void linear(void){
	printf("\n");
	printf("Selecionado: Busca Linear");
	
		nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
			i=0;
			printf("\n");
        while(fscanf(arq,"%d",&valor)!=EOF){
                leitura[i]=valor;
		    printf("%d ",leitura[i]);
		        i++;}
			 getch();
			fclose(arq);
					exit(0);}
						                                                                                                                                                                                                                                                                                                                                                                                                                        

		oko=0;
		while(oko==0){
	   gotoxy(1,26);printf("Deseja quantos números?                                                                                                               ");
	   gotoxy(25,26);scanf("%d",&limite);
		if(limite>0){
			oko=1;	}}
	
		oko=0;
		while(oko==0){
	    printf("\n");
	   gotoxy(1,28);printf("O quão grande podem ser os números?                                                                                                   ");
	   gotoxy(38,28);scanf("%d",&grande);
	    if(grande>0){
	    	oko=1;
		}}
	    
	    i=0;
	    printf("\n");
	    while(i<limite){
	    	busca[i]=rand()%grande;
	    	printf("%d ", busca[i]);
	    	fprintf(arq, "%d ",busca[i]);
	    	i++;}
		
	
	fclose(arq);
	
	if((arq=fopen("C:\\Projeto_4\\dados_busca_lin.dat","r")) == NULL){
                getche();	}

arq=fopen("C:\\Projeto_4\\dados_busca_lin.dat","w");


printf("\n\nDigite o valor em que deseja procurar: ");
scanf("%d", &e);
fprintf(arq,"Digite o valor em que deseja procurar: %d",e);
fprintf(arq, "\n");
printf("\n");
cont=0;
for(i=0;i<limite;i++){
	if(busca[i]==e){
	cont=cont+1;
	printf("\n\nValor encontrado na posicao: %d",i);
	fprintf(arq,"\nValor encontrado na posicao: %d",i);}}
	fprintf(arq, "\n");
	printf("\n\n\nQuantidade de elementos encontrados: %d",cont);
		fprintf(arq,"\nQuantidade de elementos encontrados: %d",cont);
if(cont==0){
	printf("\nNão há algum elemento procurado neste vetor");
	fprintf(arq, "\n\nNão há algum elemento procurado neste vetor");
}

fclose(arq);
}



void binaria(void){
	printf("\n");
	printf("Selecionado: Busca binária");
	

		nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
			i=0;
			printf("\n");
        while(fscanf(arq,"%d",&valor)!=EOF){
                leitura[i]=valor;
		    printf("%d ",leitura[i]);
		        i++;}
			 getch();
			fclose(arq);
					exit(0);}

                                                                                                                                                                                                                                                                                                                                                                                                    
		printf("\n\n");
		oko=0;
		while(oko==0){
	   gotoxy(1,26);printf("Deseja quantos números?                                                                                                               ");
	   gotoxy(25,26);scanf("%d",&limite);
		if(limite>0){
			oko=1;	}}
	
		oko=0;
		while(oko==0){
	    printf("\n");
	   gotoxy(1,28);printf("O quão grande podem ser os números?                                                                                                   ");
	   gotoxy(38,28);scanf("%d",&grande);
	    if((grande>0)&&(grande>limite)){
	    	oko=1;
		}}
	
	    
srand(time(NULL));
for(i=0;i<=limite;i++){
	busca[i]=rand()%grande;
	for(j=i-1;j>=0;j--){
		if(busca[i]==busca[j]){
			i=i-1;
			j=-1;}}
}
	  
	for(i=0;i<=limite;i++){
	 for(j=limite;j>=i;j--){
	if(busca[i]>busca[j]){
	  	temp=busca[i];
		busca[i]=busca[j];
		busca[j]=temp;}}}
	
	printf("\n");
for(i=0;i<=limite;i++){
	printf("%d ", busca[i]);
	    fprintf(arq, "%d ",busca[i]);
		}
		
		fclose(arq);
		
	if((arq=fopen("C:\\Projeto_4\\dados_busca_bin.dat","r")) == NULL){
                getche();	}

arq=fopen("C:\\Projeto_4\\dados_busca_bin.dat","w");


printf("\n\nDigite o valor em que deseja procurar: ");
scanf("%d", &e);
fprintf(arq,"Digite o valor em que deseja procurar: %d",e);
fprintf(arq, "\n");
printf("\n");

esq=0;
dir=limite;

ok=0;
while(ok==0){
	if(esq>dir){
		printf("\nNão há o elemento desejado no vetor");
		fprintf(arq, "\nNão há o elemento desejado no vetor");
		break;
	}
meio=(esq+dir)/2;
if(busca[meio]==e){
printf("\nvalor %d encontrado na posicao %d\n\n",e,meio);
fprintf(arq,"\nvalor %d encontrado na posicao %d\n\n",e,meio );
ok=1; 
break;}
if(busca[meio]<e){
esq=meio+1;
ok=0;}else{
dir=meio-1;
ok=0;}}	
	
fclose(arq);

}



void alfabe(void){
int i,p;

i=1;
p=27;
LETRA=65;
letra=97;
alfa[0]=' ';
while(i<=26){
	alfa[i]=LETRA;
	alfa[p]=letra;
	i++;
	p++;
	LETRA++;
	letra++;}
	
i=1;
p=27;
letra=122;
LETRA=90;
while(i<=26){
	sub[i]=letra;
	sub[p]=LETRA;
	i++;
	p++;
	letra--;
	LETRA--;
}
}



void alfa_poli(){
    char lotra,letra1;

  	printf("\nEntre com a palavra chave com até 20 caracteres:");
  	fprintf(arq, "\nEntre com a palavra chave com até 20 caracteres: ");
	i=1;
	while(((key[i]=getche())!=13) && (i<=20))
	{
		putc(key[i],arq);
		i++;
	}
    tamkey=i-1;
    
	for(i=1;i<=20;i++)
	{
	    for(j=1;j<=52;j++)
		    olfa[i][j]=' ';
	}
	
	letra=65;
	i=1; 
	while(i<=26){
      		olfa[1][i]=letra;
	     	i++;
		    letra++;}
	i=27;
	letra=97;
	while(i<=52){
      		olfa[1][i]=letra;
	     	i++;
		    letra++;}

    j=2;
	for(i=1;i<=tamkey;i++){
		    olfa[j][1]=key[i];
		    j++;}

  for(i=2;i<=tamkey+1;i++){
  	  letra=olfa[i][1]+1; 
  	  
  	  for(j=2;j<=26;j++){ 
		  olfa[i][j]=letra;
  	  	
  	     if(letra=='Z') 
  	      	      letra=65;
  	       else
  	      	 if(letra=='z')
  	      	      letra=97;
  	              else	
  	                  letra++;}
	  
	  letra=olfa[i][26];
	  if(letra>=65 && letra <=90)
	     letra=97;
	  else
	     letra=65;
	  
	  for(j=27;j<=52;j++)
	  {
	  	           olfa[i][j]=letra;
  	               if(letra=='Z') 
  	      	          letra=65;
  	      	       else
  	      	          if(letra=='z')
  	      	             letra=97;
  	              else	
  	                  letra++;}}  
	
	for(i=1;i<=tamkey+1;i++){
        printf("\n");
		fprintf(arq, "\n");
	    for(j=1;j<=52;j++){
		    printf("%c",olfa[i][j]);
			fprintf(arq, "%c",olfa[i][j]);
			}}

printf("\n");
fprintf(arq, "\n");
   i=1;
   printf("\n\nDigite a mensagem: até 80 caracteres:\n\n"); 
   fprintf(arq, "\n\nDigite a mensagem: ");
   while(((monsa[1][i]=getche())!=13) && (i<=80)){
   	putc(monsa[1][i],arq);
    i++;}
   tam=i-1;
   
   i=1;
   j=1;
   while(i<=tam){
     monsa[2][i]=key[j];
     j++;
     if(j>tamkey)
        j=1;
     i++;
   }  

    printf("\n\nCorrespondência entre mensagem e chave:\n");
    for(i=1;i<=2;i++){
       printf("\n");
	   fprintf(arq,"\n");		
       for(j=1;j<=tam;j++) 
          printf("%c",monsa[i][j]);

		  }}
		  
		 		  

void trans_rota_hori(void){
	printf("\n\n");
 printf("Selecionado: Criptografia Transposição por Rota Horizontal");
	printf("\n\n");
	printf("\n\n");
	printf("--------------------------------------------");
	printf("\n| Criptografar(1)   Descriptografar(0)    |");
	printf("\n-------------------------------------------");
	while(ok==0){
	printf("\n Deseja qual opção? ");
	scanf("%d", &pi);
 
 
 
 		nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
			        printf("\n\n");
				while((hc=getc(arq)) != EOF) {
			printf("%c",hc);}
					fclose(arq);
					getch();
					exit(0);}
	
	 fprintf(arq,"Selecionado: Criptografia Transposição por Rota Horizontal\n\n");
 

if(pi==0){
	
	printf("\n ESCOLHA: DESCRIPTOGRAFAR");
printf("\n");			
fprintf(arq,"\n\nESCOLHA: DESCRIPTOGRAFAR\n");
printf("Digite os valores desejados para X e Y, baseando em quantos caracteres serão escritos:\n");
printf("Aviso: Máximo [10][10]\n");
while(ahx==0){
gotoxy(1,48);printf("X:|  |  Y:|  |");
gotoxy(4,48);scanf("%d",&o);
if((o>10)||(o<0)){
ahx=0;}else{ahx=1;}}
while(ahy==0){
gotoxy(12,48);scanf("%d",&u);
if((u>10)||(u<0)){
ahy=0;}else{ahy=1;}}
tam=o*u;
lim=tam-1;
printf("Limite definido: %d caracteres\n",tam);
fprintf(arq,"\nLimite definido: %d caracteres\n",tam);
i=1;

fprintf(arq,"\n\nMensagem escrita: ");
while((mensa[i]=getche()) && (i<tam)){
	gotoxy(1,50);printf("Limite de caracteres:    \n");
	gotoxy(22,50);printf("%d",lim);
	for(a=1;a<=tam;a++){ 
	gotoxy(a,51);printf("%c",mensa[a]);
	}
	putc(mensa[i],arq);
	i++;
	lim--;}

	
	i=1;
for(y=1;y<=u;y++){
	for(x=1;x<=o;x++){
		monsa[x][y]=mensa[i];
		i++;
	}
}

printf("\n");
fprintf(arq, "\n\n");
for(x=1;x<=o;x++){
	printf("\n");
	fprintf(arq,"\n");
	for(y=1;y<=u;y++){
		printf("%c",monsa[x][y]);
		fprintf(arq,"%c",monsa[x][y]);
		}}
		
printf("\nDescriptografia horizontal:");
fprintf(arq,"\n\nDescriptografia horizontal: ");
i=1;
y=1;
x=1;
while(i<=tam+o){
	while(y<=u){
	cripto[i]=monsa[x][y];
			if(cripto[i]==' '){
			cripto[i]=cripto[i+1];
		}
	i++;
	y++;}
	x=x+1;
	while(y>=1){
		cripto[i]=monsa[x][y];
		if(cripto[i]==' '){
			cripto[i]=cripto[i+1];
		}
		i++;
		y--;}
		x=x+1;}
		
		z=1;
		tamcrito=i;
		i=tamcrito;
		while(z<=tamcrito){
			descripto[z]=cripto[i];
			z++;
			i--;}


printf("\n\n");
for(i=1;i<=tamcrito;i++){
	printf("%c",descripto[i]);
	fprintf(arq,"%c",descripto[i]);
	}
	fclose(arq);
	exit(0);
	}

if(pi==1){
	
printf("\n ESCOLHA: CRIPTOGRAFAR");
printf("\n");			
fprintf(arq,"\n\nESCOLHA: CRIPTOGRAFAR\n");
printf("Digite os valores desejados para X e Y, baseando em quantos caracteres serão escritos:\n");
printf("Aviso: Máximo [10][10]\n");
while(ahx==0){
gotoxy(1,48);printf("X:|  |  Y:|  |");
gotoxy(4,48);scanf("%d",&o);
if((o>10)||(o<0)){
ahx=0;}else{ahx=1;}}
while(ahy==0){
gotoxy(12,48);scanf("%d",&u);
if((u>10)||(u<0)){
ahy=0;}else{ahy=1;}}

tam=o*u;
lim=tam-1;
printf("Limite definido: %d caracteres\n",tam);
fprintf(arq,"\nLimite definido: %d caracteres\n",tam);
i=1;
fprintf(arq,"\n\nMensagem escrita: ");
while((mensa[i]=getche()) && (i<tam)){
	gotoxy(1,50);printf("Limite de caracteres:    \n");
	gotoxy(22,50);printf("%d",lim);
	for(a=1;a<=tam;a++){ 
	gotoxy(a,51);printf("%c",mensa[a]);
	}
		putc(mensa[i],arq);
	i++;
	lim--;}

i=1;
for(y=1;y<=u;y++){
	for(x=1;x<=o;x++){
		monsa[x][y]=mensa[i];
		i++;
	}
}

printf("\n");
fprintf(arq, "\n\n");
for(x=1;x<=o;x++){
	printf("\n");
	fprintf(arq,"\n");
	for(y=1;y<=u;y++){
		printf("%c",monsa[x][y]);
				fprintf(arq,"%c",monsa[x][y]);
}}
		
printf("\nCriptografia horizontal:");
fprintf(arq,"\n\nCriptografia horizontal: ");

i=1;
y=1;
x=1;
while(i<=tam+o){
	while(y<=o){
	cripto[i]=monsa[x][y];
			if(cripto[i]==' '){
			cripto[i]=cripto[i+1];
		}
	i++;
	y++;}
	x=x+1;
	while(y>=1){
		cripto[i]=monsa[x][y];
		if(cripto[i]==' '){
			cripto[i]=cripto[i+1];
		}
		i++;
		y--;}
		x=x+1;}
int tamcrito=i;

printf("\n\n");
for(i=1;i<=tamcrito;i++){
	printf("%c",cripto[i]);
		fprintf(arq,"%c",cripto[i]);
	}
	
	

fclose(arq);
}
exit(0);

if((ip!=1)||(ip!=0)){
		ok=0;
}
	ko=1;
ok=1;}}


void trans_rota_verti(void){
	int limx;
	printf("\n\n");
 printf("Selecionado: Criptografia Transposição por Rota Vertical");
	printf("\n\n");
	printf("\n\n");
	printf("--------------------------------------------");
	printf("\n| Criptografar(1)   Descriptografar(0)    |");
	printf("\n-------------------------------------------");
	printf("\n Deseja qual opção? ");
	scanf("%d", &pi);
	
	
		nome_do_arquivo='\0'; 
		
		printf("\n\nEntre com o nome do arquivo, o ponto e a extensao: ");
	    scanf("%s",&nome1);
	
        strcat(desti,PATHE); 
        strcat(desti,nome1);
        nome_do_arquivo=desti;
        printf("%s",desti); 
        getche();
	
			
			if((arq=fopen(nome_do_arquivo,"r")) == NULL){
		
				printf("\nNão há arquivo para abrir.");
                getche();		
                
				if((arq=fopen(nome_do_arquivo,"w")) == NULL){
		
				printf("\nNão foi possívcel criar o arquivo");
				getche();
				exit(0);
			 } 
		   }
			else{
	    printf("\nJá há conteudo no arquivo em que se deseja criar:");
			        printf("\n\n");
				while((hc=getc(arq)) != EOF) {
			printf("%c",hc);}
					fclose(arq);
					getch();
					exit(0);}
	
	 fprintf(arq,"Selecionado: Criptografia Transposição por Rota Vertical\n\n");
	
if(pi==0){
	
printf("\n ESCOLHA: DESCRIPTOGRAFAR");
printf("\n");			
fprintf(arq,"\n\nESCOLHA: DESCRIPTOGRAFAR\n");
printf("Digite os valores desejados para X e Y, baseando em quantos caracteres serão escritos:\n");
printf("Aviso: Máximo [10][10]\n");
while(ahx==0){
gotoxy(1,48);printf("X:|  |  Y:|  |");
gotoxy(4,48);scanf("%d",&o);
if((o>10)||(o<0)){
ahx=0;}else{ahx=1;}}
while(ahy==0){
gotoxy(12,48);scanf("%d",&u);
if((u>10)||(u<0)){
ahy=0;}else{ahy=1;}}

tam=o*u;
lim=tam-1;
printf("Limite definido: %d caracteres\n",tam);
fprintf(arq,"\nLimite definido: %d caracteres\n",tam);
i=1;

fprintf(arq,"\n\nMensagem escrita: ");
while((mensa[i]=getche()) && (i<tam)){
	gotoxy(1,50);printf("Limite de caracteres:    \n");
	gotoxy(22,50);printf("%d",lim);
	for(a=1;a<=tam;a++){ 
	gotoxy(a,51);printf("%c",mensa[a]);
	}
putc(mensa[i],arq);
	i++;
	lim--;}
	printf("\n Descriptografia vertical:");
	fprintf(arq,"\nDescriptografia vertical:");
	
	i=1;
for(x=1;x<=o;x++){
	for(y=1;y<=u;y++){
		monsa[x][y]=mensa[i];
		i++;
	}
}

i=1;
y=1;
x=1;
while(i<=tam+o){
	while(x<=o){
	cripto[i]=monsa[x][y];
			if(cripto[i]==' '){
			cripto[i]=cripto[i+1];
		}
	i++;
	x++;}
	y=y+1;
	while(x>=1){
		cripto[i]=monsa[x][y];
		if(cripto[i]==' '){
			cripto[i]=cripto[i+1];
		}
		i++;
		x--;}
		y=y+1;}
		tamcrito=i-1;
		z=1;
		i=tamcrito;
		tamcrito=i;
		
		while(z<=tamcrito){
			descripto[z]=cripto[i];
			z++;
			i--;}
			fprintf(arq, "\n\n");
			for(x=1;x<=o;x++){
				printf("\n");
				fprintf(arq,"\n");
				for(y=1;y<=u;y++){
			printf("%c",monsa[x][y]);
					fprintf(arq,"%c",monsa[x][y]);
}}

printf("\n\n");
fprintf(arq,"\n\n");
for(i=1;i<=tamcrito;i++){
	printf("%c",descripto[i]);
		fprintf(arq,"%c",descripto[i]);
}
fclose(arq);
exit(0);}


if(pi==1){
			printf("\n ESCOLHA: CRIPTOGRAFAR");
printf("\n");			
fprintf(arq,"\n\nESCOLHA: CRIPTOGRAFAR\n");
printf("Digite os valores desejados para X e Y, baseando em quantos caracteres serão escritos:\n");
printf("Aviso: Máximo [10][10]\n");
while(ahx==0){
gotoxy(1,48);printf("X:|  |  Y:|  |");
gotoxy(4,48);scanf("%d",&o);
if((o>10)||(o<0)){
ahx=0;}else{ahx=1;}}
while(ahy==0){
gotoxy(12,48);scanf("%d",&u);
if((u>10)||(u<0)){
ahy=0;}else{ahy=1;}}

tam=o*u;
lim=tam-1;
printf("Limite definido: %d caracteres\n",tam);
fprintf(arq,"\nLimite definido: %d caracteres\n",tam);
i=1;

fprintf(arq,"\n\nMensagem escrita: ");
while((mensa[i]=getche()) && (i<tam)){
	gotoxy(1,50);printf("Limite de caracteres:    \n");
	gotoxy(22,50);printf("%d",lim);
	for(a=1;a<=tam;a++){ 
	gotoxy(a,51);printf("%c",mensa[a]);
	}
		putc(mensa[i],arq);
	i++;
	lim--;}


i=1;
for(x=1;x<=o;x++){
	for(y=1;y<=u;y++){
		monsa[x][y]=mensa[i];
		i++;
	}
}

printf("\n");
fprintf(arq,"\n\n");
for(x=1;x<=o;x++){
	printf("\n");
	fprintf(arq,"\n");
	for(y=1;y<=u;y++){
		printf("%c",monsa[x][y]);}
		fprintf(arq,"%c",monsa[x][y]);}
		
printf("\nCriptografia vertical:");
fprintf(arq,"\n\nCriptografia vertical: ");
i=1;
y=1;
x=1;
while(i<=tam+o){
	while(x<=o){
	cripto[i]=monsa[x][y];
			if(cripto[i]==' '){
			cripto[i]=cripto[i+1];
		}
	i++;
	x++;}
	y=y+1;
	while(x>=1){
		cripto[i]=monsa[x][y];
		if(cripto[i]==' '){
			cripto[i]=cripto[i+1];
		}
		i++;
		x--;}
		y=y+1;}
int tamcrito=i-1;
printf("\n\n");
fprintf(arq,"\n\n");
for(i=1;i<=tamcrito;i++){
	printf("%c",cripto[i]);
	fprintf(arq,"%c",cripto[i]);
}}
fclose(arq);
exit(0);

}
