from fpdf import FPDF
from fpdf import Align

name = input('Name: ')
string = f'{name} took CS50'

pdf = FPDF()
pdf.add_page()
pdf.set_font('helvetica', 'B', 48)
pdf.image("shirtificate.png", x=Align.C, y=50)

pdf.set_y(25)

pdf.cell(text='CS50 Shirtificate', align=Align.C, center=True)

# pdf.cell(text=string, align=Align.C, center=True) # text is not on top of image

pdf.output("pdf-with-image.pdf")


