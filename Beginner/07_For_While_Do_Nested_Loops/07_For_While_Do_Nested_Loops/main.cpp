#include <iostream>
#include <string>

using namespace std;

int main()
{

    /*
    Loops

    - A way to repeat a set of operations
    - Same loops that are used in most other languages

    Guidelines

    - Not used often in C++
     Often a better pattern option

    - C++ Core Guidelines suggests patterns over simple loops

    - *Teaching C++ Core Guidelines*: Search up website for guidelines

    */

    /*
    While loops

    -Format:
      while(expression) {code block}

   - use while if unclear how many times looping OR no clear loop var
      ex: While there is rice in my rice bag, I will throw it at bride and groom

      */

      /*
      int x = 5;
      while (x) //{} are used to contain code within while loop, but not necessary for 1 line loops, will auttomatically add {}
        cout << x-- << endl;
      */

      /*
      Do While loops

      - A while loop that will be performed at least once

      -Format:
          do{
              code bloock to be looped
          } while(expression);

      - Never recomended to use, error prone and nonlogical to read
      - Just good to know

      */

      /* do{
        cout << x-- << endl;
      }
      while(x); // Must end with semicolon
      */

      /*
      For Loops

      - Loop that executes a limited number of times

      - Format:
          for (init; expression; increment){
              code block
          }

      - Need to have semi-colons to seperate init; expression; and increment

      */

      /*  for(int i = 0; i < 10; i++){
            cout << i << endl;

        }
      */

      // Another way to write a for Loop

    int i = 0;
    for (;;) {
        if (i == 5) {
            i++;
            continue;
        }
        cout << i++ << endl;
        if (i > 10)
            break;
    }

    /*
    For Loops Cont.

    - 'break': stops loop

    - 'continue': skips to next interation

    - Acts exact same as previous 'for loop' code

    - Use 'for' when numbers of loops known or obvious variable

    - Example: For each child at the mall, make an ugly face at them.

    */

    /*
    Nested loops

    - Simply a loop within another loop
    - Doesn't matter what kind of loop

    */

    for (int tens = 0; tens < 100; tens += 10) {
        cout << "TENS IS AT: " << tens << endl;
        for (int ones = 0; ones < 10; ones++)
            cout << tens + ones << endl;
    }

    /*
    Final Notes

    - You can also nest 'if' 'else' and switch statements

    -'goto' acts similar to loops BUT:
     its confusing to read!!
     not user friendly!!
     and should be avoided!!!

    */




    string z;
    getline(cin, z);
    return 0;
}

