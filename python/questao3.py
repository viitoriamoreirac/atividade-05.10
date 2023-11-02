def remove_spaces(input_string):
    return ''.join(input_string.split())

def main():
    input_string = input("Digite uma string: ")

    result_string = remove_spaces(input_string)

    print("String resultante após remover os espaços:", result_string)

if __name__ == "__main__":
    main()
