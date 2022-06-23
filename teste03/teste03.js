const faturamentos = require("./faturamentos.json");
let menor = faturamentos[0];
let maior = faturamentos[29];
let i, j, k, dias = 0, mediaFat = 0, soma = 0;

for (i = 0; i < 30; i++){

    if (faturamentos[i] == 0){

        continue;
    }

        if (faturamentos[i] > maior){
        
            maior = faturamentos[i];
        }
        else if (faturamentos[i] < menor){
    
            menor = faturamentos[i];
        }
}

for (j = 0; j < 30; j++){

    if (faturamentos[j] == 0){

        continue;
    }

    soma += faturamentos[j];
}

mediaFat = soma / 30;

for(k = 0; k < 30; k++){

    if (faturamentos[k] >= mediaFat){
        
        dias++
    }
}

console.log("\n");
console.log("O maior faturamento do mês foi de: R$" + maior);
console.log("O menor faturamento do mês foi de: R$" + menor);
console.log("\n");
console.log("A média de faturamento é de: R$" + mediaFat);
console.log("Números de dias maiores ou iguais à média de faturamento: " + dias + " dias");
console.log("\n");