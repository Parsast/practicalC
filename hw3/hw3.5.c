#include <stdio.h>
#include <string.h>

#define strSize 100
#define lineSize 9*100
int main(){
    FILE *fileHandler;
    fileHandler = fopen("stateoutflow0708.txt", "r");
    if(fileHandler == NULL){
        printf("File not found\n");
        return 1;
    }
    char line[lineSize];
    char State_Code_Origin[strSize];
    char State_Code_Dest[strSize]; 
    char County_Code_Origin[strSize];
    char County_Code_Dest[strSize];
    char StateAbr[strSize];
    char StateName[strSize];
    int Return_Num;
    int Exmpt_Num;
    int Aggr_AGI;
    int total = 0;

    fgets(line, 100*9, fileHandler);
    printf("STATE    TOTAL \n");
    printf("--------------\n");

    while (fgets(line, 100*9, fileHandler)!= NULL){
        sscanf(line, "%s    %s  %s  %s  %s  %s  %d  %d  %d",
         State_Code_Origin, State_Code_Dest, County_Code_Origin, County_Code_Dest, StateAbr, StateName, &Return_Num, &Exmpt_Num, &Aggr_AGI);
        // printf("%s\n", State_Code_Origin);
        if (strcmp(State_Code_Origin, "\"25\"") == 0){

            printf("%s\t%d \n",StateName, Aggr_AGI);
        
        total += Aggr_AGI;
        }
    }
   
    printf("--------------\n");
    printf("Total:\t%d\n",total);
    fclose(fileHandler);
    return 0;
}