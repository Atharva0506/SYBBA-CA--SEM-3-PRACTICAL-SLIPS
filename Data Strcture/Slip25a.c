/* Write a C program to accept an Infix expression and convert it into Prefix form.(Use Static Implementation of Stack) 
Example: - A * B + C as +*ABC
 Infix to Prefix using static stack
*/

 #include<stdio.h>
 #include<string.h>
 #include<math.h>
 #include<stdlib.h>
 #define BLANK ' '
 #define TAB '\t'
 #define MAX 50
 long int pop();
 long int pre_eval();
 char infix[MAX], prefix[MAX];
 long int stack[MAX];
 int top;
 int is_empty();
 int white_space(char symbol);
 void infix_to_prefix();
 int priority(char symbol);
 void push(long int symbol);
 long int pop();
 long int pre_eval();
 int main()
 {
         long int value;
         top = -1;
         printf("Enter infix : ");
         gets(infix);
         infix_to_prefix();
         printf("prefix : %s\n",prefix);
         value=pre_eval();
         printf("Value of expression : %ld\n",value);
         return 0;
 }/*End of main()*/
 void infix_to_prefix()
 {
         int i,j,p,n;
         char next ;
         char symbol;
         char temp;
         n=strlen(infix);
         p=0;
         for(i=n-1; i>=0; i--)
         {
                 symbol=infix[i];
                 if(!white_space(symbol))
                 {
                         switch(symbol)
                         {
                         case ')':
                                 push(symbol);
                                 break;
                         case '(':
                                 while( (next=pop()) != ')')
                                         prefix[p++] = next;
                                 break;
                         case '+':
                         case '-':
                         case '*':
                         case '/':
                         case '%':
                         case '^':
                                 while( !is_empty( ) &&  priority(stack[top])> priority(symbol) )
                                         prefix[p++] = pop();
                                 push(symbol);
                                 break;
                         default: /*if an operand comes*/
                              prefix[p++] = symbol;
                         }
                 }
         }
         while(!is_empty( ))
                 prefix[p++] = pop();
         prefix[p] = '\0'; /*End prefix with'\0' to make it a string*/
         for(i=0,j=p-1;i<j;i++,j--)
         {
                 temp=prefix[i];
                 prefix[i]=prefix[j];
                 prefix[j]=temp;
         }
 }/*End of infix_to_prefix()*/
 /* This function returns the priority of the operator */
 int priority(char symbol )
 {
         switch(symbol)
         {
         case ')':
                 return 0;
         case '+':
         case '-':
                 return 1;
         case '*':
         case '/':
         case '%':
                 return 2;
         case '^':
                 return 3;
         default :
                  return 0;
         }/*End of switch*/
 }/*End of priority()*/
 void push(long int symbol)
 {
         if(top > MAX)
         {
                 printf("Stack overflow\n");
                 exit(1);
         }
         else
         {
                 top=top+1;
                 stack[top] = symbol;
         }
 }/*End of push()*/
 long int pop()
 {
         if(top == -1 )
         {
                 printf("Stack underflow \n");
                 exit(2);
         }
         return (stack[top--]);
 }/*End of pop()*/
 int is_empty()
 {
         if(top==-1)
                 return 1;
         else
                 return 0;
 }
 int white_space(char symbol)
 {
         if(symbol==BLANK || symbol==TAB || symbol=='\0')
                 return 1;
         else
                 return 0;
 }/*End of white_space()*/
 long int pre_eval()
 {
         long int a,b,temp,result;
         int i;
         for(i=strlen(prefix)-1;i>=0;i--)
         {
                 if(prefix[i]<='9' && prefix[i]>='0')
                         push( prefix[i]-48 );
                 else
                 {
                         b=pop();
                         a=pop();
                         switch(prefix[i])
                         {
                         case '+':
                                 temp=b+a; break;
                         case '-':
                                 temp=b-a;break;
                         case '*':
                                 temp=b*a;break;
                         case '/':
                                 temp=b/a;break;
                         case '%':
                                 temp=b%a;break;
                         case '^':
                                 temp=pow(b,a);
                         }
                         push(temp);
                 }
         }
         result=pop();
         return result;
 } 

