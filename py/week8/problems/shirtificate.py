from fpdf import FPDF

name = input("Name: ")

pdf = FPDF()
pdf.add_page()
pdf.set_font('helvetica', 'B', 16)
pdf.image("shirtificate.png")


pdf.output("pdf-with-image.pdf")


