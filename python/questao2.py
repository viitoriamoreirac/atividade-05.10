def extract_date_components(date):
    if len(date) != 10 or date[2] != '/' or date[5] != '/':
        print("Formato inválido. Utilize o formato DD/MM/AAAA.")
        return None, None, None

    day_str = date[:2]
    month_str = date[3:5]
    year_str = date[6:]

    try:
        day = int(day_str)
        month = int(month_str)
        year = int(year_str)
    except ValueError:
        print("DD, MM e AAAA devem ser numéricos.")
        return None, None, None

    return day, month, year

def main():
    date = input("Digite a data no formato DD/MM/AAAA: ")

    day, month, year = extract_date_components(date)

    if day is not None and month is not None and year is not None:
        print(f"Dia: {day}, Mês: {month}, Ano: {year}")
    else:
        print("Data inválida.")

if __name__ == "__main__":
    main()
