# EC327Project
**Clueless Project**

**Sigma Delta Nu:**
  Tara Gill (taragill@bu.edu)
  Suhani Mitra (suhanim@bu.edu)
  Margherita Piana (mpiana@bu.edu)
  Marissa Ruiz (mbruiz@bu.edu)

**Test Cases:**

IMPORTANT: We have created a testcase file to aid the process of understanding the necessary input p3 files and what they should respsectively output. This serves as a model for what we inteded to do with more complex image files.

**Overview:**

Our project is targeted towards people who want to be fashionable, but are not necessarily confident in their ablity to put together outfits that "slay". This project intends to help these users by looking at a user-inputted picture of a clothing article and determines if the outfit is compatible. The user will take pictures of individual articles of clothing and the program will detect whether the colors are aesthetically complementary, letting the user know if so/not.

More technically speaking, this program is meant to prompt the user to imput six P3 ppm files that correspond to an outfit, each file will be a component of the outfit (for example, one file is the hat, one the shirt etc..). The program will then process each of them, reads the rgb values of each pixel and find an average. There is a range for each rgb value that correspnd to a color, so for each image the dominant color will be found. The color compatabilty of each component is then checked. The program will finally inform the user wether the outfit created is compatible or not, if it's not the user will know that it's better to change the outfit. To make this program easily accessible by the user using a desktop app.
 
**How to “build” our project:**
Our project is compatible with unix. If a user has unix, they can compile our code using the following line:

g++ Top.cpp Bottom.cpp Headwear.cpp Jacket.cpp isCompatible.cpp Footwear.cpp ImageProcessing.cpp OutfitSelector.cpp Clothing.cpp

They can create an executable file with such, and run our code. The only other thing to note is that the user must have their images saved in their computer as p3 ppm files. We did intend for our project to allow more complex files to be inputted, however, as per the mentioned challenges we ran into, this is a current limitation we have. There are free resources on the internet that can convert .png, .jpeg, etc. types to .ppm files.

**YouTube Video Link:** 
https://youtu.be/tWz9I_DiXwA

**Additional information:**

 While working on this project we encountered many difficulties in the immage processing part. Initially we tried to read the RGB value from the ppm files, unfortunately we were able to make it work only for P3 ppm files (those files have the information of the image in ascii). However the majority of images ppm files are P6. We then started to look into using open cv to analyze the picture. That didn't work because it was impossible for us to download open cv on mac, therefore we weren't able to use that option. Since we were running out of time, we decided to just make the code work for P3 ppm files, our next step would be implement its function to all ppm files.
 
 Another step we wanted to take was to incporporate texture analysis since patterns are also a big factor in outfit compatibility. For example, most people would not wear strips with polka dots. We wanted to use code we found that analyzes many different patterns in images to tell a user if their clothes are compatible. Texture analysis was more complicated because not only does it require reading in the same ppm data we were struggling with for color analysis, a lot of math like covariance determines patterns. If given more time to work on this project, we would look into pattern/texture analysis.
 
 *The folder in GitHub named "example_win32_directx9" includes the code for our interface (using ImGui).
 
 
 
