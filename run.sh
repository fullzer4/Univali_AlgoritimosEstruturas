#!/bin/bash

compile_and_run() {
    local directory=$1
    local exercise=$2
    local file_path="${directory}/${exercise}.cc"
    local output="${directory}/a.out"

    if [[ -f "$file_path" ]]; then
        echo "Compilando $file_path..."
        g++ -o "$output" "$file_path" 2>/dev/null
        if [[ $? -eq 0 ]]; then
            echo "Executando $output..."
            "$output"
            echo ""  
        else
            echo "Erro ao compilar $file_path."
        fi
    else
        echo "O arquivo $file_path não existe."
    fi
}

echo "Por favor, insira o número da lista:"
read list_number

if [[ -d "./$list_number" ]]; then
    echo "Por favor, insira o número do exercício na lista $list_number:"
    read exercise_number

    compile_and_run "$list_number" "$exercise_number"
else
    echo "A lista número $list_number não existe."
fi
