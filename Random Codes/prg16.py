from PyPDF2 import PdfWriter
import os
merger = PdfWriter()
files = os.listdir()
pdfs = ["Python 01.pdf",
        "Python 02.pdf",
        "Python 03.pdf",
        "Python 04.pdf",
        "Python 05.pdf",
        "Python 06.pdf",
        "Python 07.pdf",
        "Python 08.pdf",
        "Python 09.pdf",
        "Python 10.pdf"]
for pdf in pdfs:
    merger.append(pdf)

merger.write("merged-pdf.pdf")
merger.close()
