from PIL import Image

image_1 = Image.open(r"D:\Pillow")
im_1 = image_1.convert('RGB')
im_1.save(r'"D:\Pillow"')
