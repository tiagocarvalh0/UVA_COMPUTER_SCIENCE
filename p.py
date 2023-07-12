import pyexcel as pe
sheet = pe.get_sheet(file_name="example.xls")
sheet.row += [12, 11, 10]
sheet.save_as("new_example.xls")
pe.get_sheet(file_name="new_example.xls")