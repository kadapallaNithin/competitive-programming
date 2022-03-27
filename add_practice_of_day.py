import datetime
week_of_day = ['-','Mon','Tue','Wed','Thu','Fri','Sat','Sun']
today = datetime.date.today()
row = f"|{today}|{week_of_day[today.isoweekday()]}|[]() \| [g4g]()|||\n"
with open('PracticePath.md','a') as f:
    f.write(row)
