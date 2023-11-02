def format_name(fullname):
    # Dividir o nome em partes usando espaços em branco como separadores
    parts = fullname.split()
    
    if len(parts) >= 2:
        # Obter o último nome (sobrenome)
        last_name = parts[-1]
        
        # Juntar o sobrenome e o restante do nome no formato SOBRENOME/Nome
        formatted_name = f"{last_name.upper()}/{' '.join(parts[:-1])}"
        return formatted_name
    else:
        return "Nome completo não possui um sobrenome."

def main():
    fullname = input("Digite o nome completo: ")

    formatted_name = format_name(fullname)

    print("Nome no formato SOBRENOME/Nome:", formatted_name)

if __name__ == "__main__":
    main()
