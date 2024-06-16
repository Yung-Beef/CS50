from fpdf import FPDF
from fpdf import Align

name = input('Name: ')
string = f'{name} took CS50'

pdf = FPDF()
pdf.add_page()
pdf.set_font('helvetica', 'B', 16)
pdf.image("shirtificate.png", x=Align.C, y=Align.C) # picture is not centered

pdf.cell(text=string, align=Align.C, center=True) # text is not on top of image

pdf.output("pdf-with-image.pdf")


