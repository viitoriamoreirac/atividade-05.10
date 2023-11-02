def print_reversed_string_with_a_replaced(string):
    reversed_string = string[::-1]
    replaced_string = ''.join('*' if char == 'A' else char for char in reversed_string)
    print(replaced_string)

def main():
    phrase1 = input("Digite a primeira frase: ")
    phrase2 = input("Digite a segunda frase: ")

    print("Frase 1 invertida e com 'A' trocado por '*': ", end='')
    print_reversed_string_with_a_replaced(phrase1)

    print("Frase 2 invertida e com 'A' trocado por '*': ", end='')
    print_reversed_string_with_a_replaced(phrase2)

if __name__ == "__main__":
    main()
