#include <bits/stdc++.h>

using namespace std;

double evaluatePrefix(string prefixExp) {

    stack<double> operendStack;

    int size = prefixExp.size() - 1;

    for (int i = size; i >= 0; i--) {

    if (isdigit(prefixExp[i]))

         operendStack.push(prefixExp[i] - '0');

      else {

         double o1 = operendStack.top();

         operendStack.pop();

         double o2 = operendStack.top();

         operendStack.pop();

         if( prefixExp[i] == '+')

            operendStack.push(o1 + o2);

         else if( prefixExp[i] == '-')

            operendStack.push(o1 - o2);

         else if( prefixExp[i] == '*')

            operendStack.push(o1 * o2);

         else if( prefixExp[i] == '/')

            operendStack.push(o1 / o2);

         else{

            cout<<"Invalid Expression";

            return -1;

         }

      }

   }

   return operendStack.top();

}



int main()

{

   string prefixExp = "*+-65122";

   cout<<"The result of evaluation of expression "<<prefixExp<<" is "<<evaluatePrefix(prefixExp);

   return 0;

}