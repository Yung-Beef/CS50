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

pdf.set_y(100)
pdf.set_font('helvetica', 'B', 36)

with pdf.local_context(text_mode="FILL"):
    pdf.set_text_color(r=255, g=255, b=255)
    pdf.cell(text=string, align=Align.C, center=True) # text is not on top of image

pdf.output("shirtificate.pdf")


