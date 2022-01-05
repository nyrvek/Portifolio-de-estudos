#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int ano, anobissexto, mesdefrvereirobissexto;
    char mes[15];

    printf("Digite o ano: "),scanf("%d", &ano);
    printf("Didite o mes: "), scanf("%s",mes);

    

    if (ano % 4==0){
     anobissexto =366;
     mesdefrvereirobissexto =29;
    } 
    
    else{
        anobissexto=365;
        mesdefrvereirobissexto = 28;
    }
    
    if (strcmp(mes,"JANEIRO")==0){
        printf("DIAS = 31\n");
        printf("DIAS NO ANO = %d\n",anobissexto);
    }
    else if (strcmp(mes,"FEVEREIRO")==0)
    {
      printf("DIAS = %d\n",anobissexto);
      printf("DIAS NO ANO = %d\n",anobissexto);
    }
    else if (strcmp(mes,"MARCO")==0){
        printf("DIAS = 31\n");
        printf("DIAS NO ANO = %d\n",anobissexto);
    }
    
else if (strcmp(mes,"ABRIL") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"MAIO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"JUNHO") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"JULHO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"AGOSTO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"SETEMBRO") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

else if (strcmp(mes,"OUTUBRO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}
else if (strcmp(mes,"NOVEMBRO") == 0){
printf("DIAS = 30\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}
else if (strcmp(mes,"DEZEMBRO") == 0){
printf("DIAS = 31\n");
printf("DIAS NO ANO = %d\n",anobissexto);
}

return 0;	

}