# DATA-COMPRESSION-TOOL

*COMPANY*: CODTECH IT SOLUTIONS

*NAME*: PRIYANKA PRIYADARSHINI SWAIN

*INTERN ID*: CT04DZ418

*DOMAIN*: C PROGRAMMING

*DURATION*: 4 WEEKS

*MENTOR*: NEELA SANTOSH

*TASK DESCRIPTION*:

Task 4: Data Compression Tool – Detailed Description
As part of learning about file systems and data optimization techniques, I developed a Data Compression Tool using the Run-Length Encoding (RLE) algorithm in the C programming language. This task enhanced my understanding of how simple compression techniques work at the character level to reduce file size. It also provided hands-on experience with string processing, file handling, and algorithm implementation.

What I Did
The main objective of this task was to create a tool that can:
Compress data from a text file using Run-Length Encoding (RLE)
Decompress the encoded data back to its original form
Run-Length Encoding is a basic compression technique that replaces sequences of repeated characters with a single character followed by its count. For example, the string aaabbbbcc becomes a3b4c2.
To implement this, I designed two separate functions:
1. compressFile() – Reads the input file character by character, counts repeating characters, and writes the compressed output to another file.
2. decompressFile() – Reads the compressed file, interprets each character and its numeric count, and reconstructs the original string.
I added a menu-driven interface to allow users to choose whether they want to compress, decompress, or exit. This made the program interactive and user-friendly. The tool used basic file handling functions like fopen(), fgetc(), fprintf(), and fputc(), and relied on loops and conditionals for parsing and formatting the data.
I also included edge-case handling — such as when files are empty, missing, or contain mixed content — to ensure the tool is robust and reliable.

Tools and Platforms Used
To complete this project efficiently, I used a variety of development tools and learning platforms:
Visual Studio Code (VS Code): My main code editor, where I wrote, debugged, and executed the program. It offered an integrated terminal, syntax support for C, and a clean UI.
Google Search: I used Google to understand RLE logic, check file I/O syntax, and explore compression-related concepts.
YouTube: Video tutorials helped me visualize how RLE works, especially the logic of character grouping and looping structures.
DeepSeek: I used DeepSeek AI to get coding suggestions and explore alternative ways to handle string manipulation and edge-case handling.
Using a combination of these resources made my coding process more efficient and helped me troubleshoot issues effectively.

Programming Preferences
I used the C language for this task to maintain low-level control over file handling and memory usage. It allowed me to manually manage the file read/write process, which is essential for understanding how real-world compression tools operate.
I preferred using a command-line-based interface to simulate a practical tool-like experience where users can enter file names and perform tasks directly from the terminal.

Applicability of the Task
This task has several real-world applications and benefits:
File compression utilities to reduce data size and save storage
Text data transmission where bandwidth is limited
Logging systems that store repetitive data efficiently
Embedded systems that require minimal storage usage
Preprocessing step in larger data pipelines before applying complex compression algorithms like Huffman or LZW

Moreover, this task laid the foundation for understanding lossless compression techniques, which are essential in data communication, software engineering, mobile computing, and cloud storage systems.
Overall, this project deepened my algorithmic thinking and taught me how to create utility-based programs with practical relevance and industry-level logic.

*OUTPUT*

<img width="1919" height="1017" alt="Image" src="https://github.com/user-attachments/assets/ae231312-c103-4182-b677-d52edeb1a64a" />
