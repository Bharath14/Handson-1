# Program Number: 1b
# Student Name: Ellanti Bharath Sai; 
# Register Number: IMT2018022
# Date:25-02-2021
# Description: This program will create a file hfile and hardlink with "hardlink" file.
#!/bin/bash

touch hfile
ln hfile hardlink
ls -l hfile hardlink
