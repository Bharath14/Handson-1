# Program Number: 1a
# Student Name: Ellanti Bharath Sai; 
# Register Number: IMT2018022
# Date:25-02-2021
# Description: This program will create a file sfile and softlink with "softlink" file.
#!/bin/bash

touch sfile
ln -s sfile softlink
ls -l sfile softlink
