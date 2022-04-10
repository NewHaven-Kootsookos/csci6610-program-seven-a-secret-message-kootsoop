# A Secret Message

## Goals

* To read a coded file one character at a time.
* To use unsigned char variables.
* To use bitwise and shift operators to decode the file.
* To write a file containing the decoded message.

## The Story

A rumor is going around the high school that a group of programming students are developing a crazy kind of encryption to talk to each other privately. The school principal intercepted one of the early messages. She wanted to know what it says, so she asked the janitor to bring her the contents of the wastebaskets in the computer lab. Together, they found some handwritten notes that looked like a fragment (below), but they do not understand what any of it means. Your job is to write a short C++ program to decode the message.

	unsigned char a, b, c, d;
	for (;;)
	{
		int n = plain.get(); 
		if (plain.eof())
		{
			break;
		}
		a = n >> 3; 
		b = (n & 0x7); 
		c = (a ^ b) << 3; 
		d = c | b; 
		cout << (unsigned char) d;
	}

## Instructions

Write your program, entirely in main, including calls on banner() and bye(). Use the above code for guidance, but remember, it will not do the decoding task. You will need to use these features and operators:

* Type unsigned char
* Right and left shift
* Bitwise and, or, xor, and a bit mask. (Use a mask of 0x3 to isolate 3 bits.)
* The function int istream.get()
* A cast to type unsigned char for output.

Use your program to decode this file: messCypher.txt 
