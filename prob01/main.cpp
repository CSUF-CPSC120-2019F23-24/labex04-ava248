// make sure the average includes decimal digits

#include <iostream>

int main()
{
  // TODO#1: use the "static_cast" operator to cast the character to a short
  // then print both the char and the short

  char my_char1 = 'J';
  short my_short1 = static_cast<int>(my_char1);

  std::cout << "The ASCII value for " << my_char1 << " is " << my_short1 << std::endl;

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#2: add one to the character to see what gets printed out

  char my_char2 = 'C';
  my_char2 = 'C' + 1;
  std::cout << "Char1: " << my_char2 << std::endl;

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#3: again add one to the character to see what gets printed out
  // and add a comment explaining why the value of the character is no
  // longer alphabetic

  char my_char3 = 'z';
  my_char3 = 'z' + 1;
  std::cout << "Char2: " << my_char3 << std::endl;

// The value of the character is no longer alphabetic because the value after the character
// 'z' is the open bracket '{'.

  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#4: print each number, then add one to each number and print it again
  // also add a comment to explain why my_short2 value became negative after
  // adding one, but my_int2 did not
  // note: std::dec and std::hex indicate the format of the output, decimal
  // versus hexadecimal

  short my_short2 = 32767; // maximum value for a short
  int my_int2 = my_short2;

  std::cout << "Short (" << sizeof(my_short2) << " bytes): "
    << std::dec << my_short2 << std::hex << " (0x" << my_short2 << ')';
  my_short2 = my_short2 + 1;
  std::cout << ", after adding 1: " << std::dec << my_short2
    << std::hex << " (0x" << my_short2 << ")\n";

  std::cout << "Int (" << sizeof(my_short2) << " bytes): "
    << std::dec << my_int2 << std::hex << " (0x" << my_int2 << ')';
  my_int2 = my_int2 + 1;
  std::cout << ", after adding 1: " << std::dec << my_int2
    << std::hex << " (0x" << my_int2 << ")\n";

// my_short2 value became negative after adding one because it is the largest value it can hold. an overflow
// but my_int2 did not become negative because it is the smallest value it can hold. an underflow


  std::cout << std::endl; // blank line to separate output from the different exercises

  // TODO#5: print each number, then add one to each number and print it again
  // also add a comment to explain why my_short3 value became negative after
  // adding one, but my_int3 did not

  unsigned short my_short3 = 65535; // maximum value for an unsigned short
  int my_int3 = my_short3;

  std::cout << "Unsigned short (" << sizeof(my_short3) << " bytes): "
    << std::dec << my_short3 << std::hex << " (0x" << my_short3 << ')';
  my_short3 = my_short3 + 1;
  std::cout << ", after adding 1: " << std::dec << my_short3
    << std::hex << " (0x" << my_short3 << ")\n";

  std::cout << "Same value as int (" << sizeof(my_int3) << " bytes): "
    << std::dec << my_int3 << std::hex << " (0x" << my_int3 << ')';
  my_int3 = my_int3 + 1;
  std::cout << ", after adding 1: " << std::dec << my_int3
    << std::hex << " (0x" << my_int3 << ")\n";

//my_short3 is 0 because it is the lowest value for an unsigned short. Thus an underflow.
//my_int3 did not become negative because that is the max value for an unsigned short.Thus an overflow

  // ** not required, but for more practice, feel free to add code below which **
  // ** tests underflow and overflow using other data types **

  return 0;
}
