# EC327Project
Clueless Project

Sigma Delta Nu:
  Tara Gill (taragill@bu.edu)
  Suhani Mitra (suhanim@bu.edu)
  Margherita Piana (mpiana@bu.edu)
  Marissa Ruiz (mbruiz@bu.edu)

 This program is meant to promt the user to imput six P3 ppm files that correspomd to an outfit, each file will be a component of the outfit (for example, one file is the hat, one the shirt ecc..). The program will then process each of them, reafs the rgb values of each pixell ans find an average. There is a range for each rgb value that correspnd to a color, so for each image the dominant color will be found. The color compatabilty of each component is then checked. The program will finally inform the user wether the outfit created is compatible or not, if it's not the user will know that it's better to change the outfit. To make this program easilly accessible by the user using a desktop app.
 
o 1 paragraph on how to “build” your project

YouTube Video Link: 

Additional relevant information:
  While working on thos project we encountered many difficulties in the immage processing part. Initially we tried to read the rgb value from the pmm files, unfortunately we were able to make it work only for P3 ppm files (those files have the information of the image in ascii). However the majority of images ppm files are P6. We then started to look into using open cv to analyze the picture. That didn't work because it was impossible for us to download open cv on mac, therefore we weren't able to use that option. Sincw we were running out of time, we decided to just make the code work for P3 ppm files, nut our next step in the future will be implement its function to all ppm files. 
