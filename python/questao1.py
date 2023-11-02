def find_first_occurrence(string, char, start_idx):
    length = len(string)

    for i in range(start_idx, length):
        if string[i] == char:
            return i

    return -1  # Caractere não encontrado

def main():
    string = input("Digite a string: ")
    char = input("Digite o caractere a ser buscado: ")
    start_idx = int(input("Digite a posição inicial: "))

    result = find_first_occurrence(string, char, start_idx)

    if result != -1:
        print(f"O caractere '{char}' foi encontrado pela primeira vez na posição {result} da string.")
    else:
        print(f"O caractere '{char}' não foi encontrado na string a partir da posição {start_idx}.")

if __name__ == "__main__":
    main()
