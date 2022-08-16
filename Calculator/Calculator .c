#include<stdio.h>
#include<stdlib.h>

main()

{
    
		char choice;
		front();
		
        printf("\n");      

    while(1)
    {
	
		printf("\n\n\t\t\t\t\t >> Make a choice : ");
		scanf("%s",&choice);
    

        switch(choice)
        {
	        case 'a': add();
	            
	                break;
	
	        case 'b': sub();
	            
	                break;
	
	        case 'c': mul();
	            
	                break;
	
	        case 'd': division();
	            
	                break;
	                
	        case 'g': square();
	            
	                break;         
	
	        case 'h': squareroot();
	            
	                break;
	
	        case 'e': percentage();
	            
	                break;
	
	        case 'f':logarithm();
	              
	                break;
	       
		   case 'i': trigonometry();
	              
	                break;
	        
		   case 'j':equation();
	              
	                break;        
	                
	       case  'E': printf("\n\n\n\n\t\t\t\t\t                                       ~Thank You~\n\n\n\n\n\n\n\n\n");
		   				 exit(0);
	        
	        		break;
					        
	        case 'C' : system("cls");
	                calculator_operations();
	  
	                break;
	                
	      default:
	       			 printf("\n\t\t\t\t\t                     =>  Invalid input.");
	        		 printf(" Please enter correct input.");
                
    

        }
    }   
}


void front()
{
	int n;	
	printf("\n\n\n\n\t\t\t\t\t......................................................................................\n");
    printf("\t\t\t\t\t:										     :\n");
    printf("\t\t\t\t\t:										     :\n");
	printf("\t\t\t\t\t:                  DAFFODIL INTERNATIONAL UNIVERSITY , PERMANENT CAMPUS              :\n");
	printf("\t\t\t\t\t:										     :\n");
	printf("\t\t\t\t\t:										     :\n");
	printf("\t\t\t\t\t:										     :\n");
	printf("\t\t\t\t\t:                           .................................	                     :\n");
	printf("\t\t\t\t\t:                           : Project : C A L C U L A T O R :	                     :\n");
	printf("\t\t\t\t\t:                           :...............................:	                     :\n");
	printf("\t\t\t\t\t:										     :\n");
	printf("\t\t\t\t\t:										     :\n");
	printf("\t\t\t\t\t:      Submitted to :                                                                : \n");
	printf("\t\t\t\t\t:                          Dr.Shaek Rashed Haider Noori	                             : \n");
	printf("\t\t\t\t\t:                    (Associate Professor and Associate Head)                        : \n");
	printf("\t\t\t\t\t:										     :\n");
	printf("\t\t\t\t\t:										     :\n");
	printf("\t\t\t\t\t:      Submitted by :                                                                :\n");
	printf("\t\t\t\t\t:                     Md. Iftekharul Islam Ridoy    ( 192-15-2811 )                :\n");
	printf("\t\t\t\t\t:                                                                                    :\n");
	printf("\t\t\t\t\t:....................................................................................:");

	printf("\n\n\n\n\t Press 1 to continue => ");
	scanf("%d",&n);
	system("cls");
	
	if(n==1)
	{
		welcome();
    }
  
			
}


void welcome()
{
    int n;
	printf("\n\n\n\n\n\n");
	printf("    **                   **   **********   **              ******         ******     **        **   **********                     ***************     ******                       \n");
	printf("    **        ***        **   **           **            **      **     **      **   ****    ****   **                                    **         **      **                     \n");
	printf("     **      ** **      **    **           **           **             **        **  ** **  ** **   **                                    **        **        **                    \n");
	printf("      **    **   **    **     **********   **           **             **        **  **   **   **   **********                            **        **        **                    \n");
	printf("       **  **     **  **      **           **           **             **        **  **        **   **                                    **        **        **                    \n");
	printf("        ****       ****       **           **            **      **     **      **   **        **   **                                    **         **      **                     \n");
	printf("         **         **        **********   ***********     ******         ******     **        **   **********                            **           ******                       \n");
	printf("\n\n\n\n\n\n\n\n");
	printf("        *****           **         **              *****      **           **   **                   **      ******************      *******       **********                           \n");
	printf("      **     **        ****        **            **     **   **             **  **                  ****             **           **         **    **        **                         \n");
	printf("     **               **  **       **           **           **             **  **                 **  **            **          **           **   **         **                        \n");
	printf("    **               **    **      **          **            **             **  **                **    **           **         **             **  **         **                        \n");
	printf("    **              **      **     **          **            **             **  **               **      **          **         **             **  **        **                         \n");
	printf("    **             ************    **          **             **           **   **              ************         **         **             **  **********                           \n");
	printf("     **           **          **   **           **             **         **    **             **          **        **          **           **   **         **                        \n");
	printf("      **     **  **            **  **            **     **      **       **     **            **            **       **           **         **    **          **                       \n");
	printf("        *****   **              ** ************    *****          *******       * * * * * *  **              **      **              *******       **           **                      \n");
	printf("\n\n\n\n\t Press 2 to enter the calculator => ");
	scanf("%d",&n);
	system("cls");
	
	if(n==2)
	{
		calculator_operations();
    }
} 

 
void calculator_operations()
{
        printf("\n\n");
		printf("\t\t\t\t\t......................................................................................\n");
		printf("\t\t\t\t\t:              Basic Calculator           :           Scientific Calculator          :\n");
		printf("\t\t\t\t\t:.........................................:..........................................:\n");
        printf("\t\t\t\t\t:             a) Addition                 :           f) Logarithm                   :\n");
        printf("\t\t\t\t\t:             b) Subtraction              :           g) Square                      :\n");
        printf("\t\t\t\t\t:             c) Multiplication           :           h) Squareroot                  :\n");
        printf("\t\t\t\t\t:             d) Division                 :           i) Triogonometry               :\n");
        printf("\t\t\t\t\t:             e) Percentage               :           j) Equation Solver             :\n");
    	printf("\t\t\t\t\t:.........................................:..........................................:\n");
        printf("\t\t\t\t\t:                            For system clear press = C                              :\n");
        printf("\t\t\t\t\t:                               For system exit  =  E                                :\n");
        printf("\t\t\t\t\t:....................................................................................:\n");
    }

int add()
{
	double n , number,total=0, k=0; ;
	FILE *file;
    file= fopen("Calculator.txt","a");
    printf("\n\t\t\t\t\t How many numbers you want to add : ");
  	scanf("%lf",&n);
   	printf("\t\t\t\t\t Please enter numbers one by one : ");
   	
    while(k<n)
    {
        scanf("%lf",&number);
        total=total+number;
        k=k+1;
    }
       printf("\t\t\t\t\t......................................................................................\n");
	   printf("\t\t\t\t\t:                           Summation of numbers = %.2lf                             :\n",total);
	   printf("\t\t\t\t\t:....................................................................................:\n");
	   fprintf(file,"Summation of numbers = %.2lf \n",total);
       fputs("\n",file);
       fclose(file);
     
        
}

int sub()
{
		double x, y;
		FILE *file;
        file= fopen("Calculator.txt","a");
        printf("\n\t\t\t\t\t Enter number 1 : ");
        scanf("%lf",&x);
        printf("\t\t\t\t\t Enter number 2 : ");
        scanf("%lf",&y);
       
	    printf("\t\t\t\t\t......................................................................................\n");
		printf("\t\t\t\t\t:                        Your Subtraction result is = %.2lf                          :\n",x-y);
		printf("\t\t\t\t\t:....................................................................................:\n");
		fprintf(file,"Your Subtraction of (%.2lf-%.2lf) = %.2lf \n",x,y,x-y);
        fputs("\n",file);
        fclose(file);
}

int mul()
{
		double x, y;
		FILE *file;
        file= fopen("Calculator.txt","a");
        printf("\n\t\t\t\t\t Enter number 1 : ");
        scanf("%lf",&x);
        printf("\t\t\t\t\t Enter number 2 : ");
        scanf("%lf",&y);
        
		printf("\t\t\t\t\t......................................................................................\n");
		printf("\t\t\t\t\t:                      Your Multiplication result is = %.2lf                         :\n",x*y);
		printf("\t\t\t\t\t:....................................................................................:\n");
		fprintf(file,"Your Multiplication of(%.2lf X %.2lf) = %.2lf \n",x,y,x*y);
        fputs("\n",file);
        fclose(file);
}

int division()
{
		double x,  y;
		FILE *file;
        file= fopen("Calculator.txt","a");
        printf("\n\t\t\t\t\t Enter the Dividend : ");
        scanf("%lf",&x);
        printf("\t\t\t\t\t Enter the Divisor : ");
        scanf("%lf",&y);
        if(y!=0)
        {
		printf("\t\t\t\t\t......................................................................................\n");
		printf("\t\t\t\t\t:                          Your Quotient is = %.2lf                                   :\n",x/y);
		printf("\t\t\t\t\t:....................................................................................:\n");
		fprintf(file,"Your Quotient of (%.2lf X %.2lf) = %.2lf \n",x,y,x/y);
        fputs("\n",file);
        fclose(file);
     	}
     	else
     	{
     	printf("\t\t\t\t\t......................................................................................\n");
		printf("\t\t\t\t\t:                              M A T H  E R R O R                                    :\n",x/y);
		printf("\t\t\t\t\t:....................................................................................:\n");
	    }
}


int percentage()
{
       double x, y;
       FILE *file;
       file= fopen("Calculator.txt","a");
	   printf("\n\t\t\t\t\t Enter a number : ");
       scanf("%lf",&x);
       /*printf("\t\t\t\t\t Enter number 2 : ");
       scanf("%lf",&y);*/
 
       printf("\t\t\t\t\t......................................................................................\n");
	   printf("\t\t\t\t\t:                   Your Percentage of %.2lf is = %.2lf                               :\n",x,x/100);
	   printf("\t\t\t\t\t:....................................................................................:\n");
	   fprintf(file,"Your Percentage of (%.2lf)is = %.2lf  \n",x,x/100);
       fputs("\n",file);
       fclose(file);
}

int logarithm()
{
        double b,x;
        FILE *file;
        file= fopen("Calculator.txt","a");
		printf("\n\t\t\t\t\t Enter the base   : ");
        scanf("%lf",&b);
        printf("\t\t\t\t\t Enter a argument  : ");
        scanf("%lf",&x);
 
        printf("\t\t\t\t\t......................................................................................\n");
		printf("\t\t\t\t\t:                           Your Logarithm is = %.2lf                                 :\n",log10(x)/log10(b));
		printf("\t\t\t\t\t:....................................................................................:\n");
		fprintf(file,"Your Logarithm of base(%.2lf)and argument(%.2lf) = %.2lf   \n",b,x,log10(x)/log10(b));
        fputs("\n",file);
        fclose(file);
}

int trigonometry()
{
        double x;
        double PI =  3.1415926;
	    int n;
	    FILE *file;
        file= fopen("Calculator.txt","a");
	
		printf("\t\t\t\t\t.....................................................................................\n");
		printf("\t\t\t\t\t:   1) sin  :  2) cos  :  3) tan   :   4) sin^-1   :   5) cos^-1   :  6)  tan^-1    :\n");
		printf("\t\t\t\t\t:...................................................................................:\n");
		printf("\t\t\t\t\t Which one you want to do : ");
		scanf("%d",&n);
		printf("\t\t\t\t\t Enter the value : ");
		scanf("%lf",&x);
	
	if(n==1)
		{
			 printf("\t\t\t\t\t.....................................................................................\n");
		   	 printf("\t\t\t\t\t:                      The value of sin(%.2lf) = %.2lf                               :\n",x,sin(x*PI/180));
			 printf("\t\t\t\t\t:...................................................................................:\n");
			 fprintf(file,"The value of sin(%.2lf) = %.2lf   \n",x,sin(x*PI/180));
	         fputs("\n",file);
	         fclose(file);
		 }
		
	else if(n==2)
		{
			 printf("\t\t\t\t\t.....................................................................................\n");
		   	 printf("\t\t\t\t\t:                      The value of cos(%.2lf) = %.2lf                               :\n",x,cos(x*PI/180));
			 printf("\t\t\t\t\t:...................................................................................:\n");
			 fprintf(file,"The value of cos(%.2lf) = %.2lf   \n",x,cos(x*PI/180));
	         fputs("\n",file);
	         fclose(file);
		 }
	else if(n==3)
		{
			 printf("\t\t\t\t\t.....................................................................................\n");
		   	 printf("\t\t\t\t\t:                      The value of tan(%.2lf) = %.2lf                               :\n",x,tan(x*PI/180));
			 printf("\t\t\t\t\t:...................................................................................:\n");
			 fprintf(file,"The value of tan(%.2lf) = %.2lf   \n",x,tan(x*PI/180));
		     fputs("\n",file);
		     fclose(file);
		 }
    else if(n==4)
		{
			 printf("\t\t\t\t\t.....................................................................................\n");
		   	 printf("\t\t\t\t\t:                      The value of sin^-1(%.2lf) = %.2lf                             :\n",x,asin(x)*180/PI);
			 printf("\t\t\t\t\t:...................................................................................:\n");
			 fprintf(file,"The value of sin^-1(%.2lf) = %.2lf   \n",x,asin(x)*180/PI);
			 fputs("\n",file);
			 fclose(file);
		 }	
	else if(n==5)
		{
			 printf("\t\t\t\t\t.....................................................................................\n");
		   	 printf("\t\t\t\t\t:                      The value of cos^-1(%.2lf) = %.2lf                             :\n",x,acos(x)*180/PI);
			 printf("\t\t\t\t\t:...................................................................................:\n");
			 fprintf(file,"The value of cos^-1(%.2lf) = %.2lf   \n",x,acos(x)*180/PI);
			 fputs("\n",file);
			 fclose(file);
			 }	
 	else if(n==6)
		{
			 printf("\t\t\t\t\t.....................................................................................\n");
		   	 printf("\t\t\t\t\t:                      The value of tan^-1(%.2lf) = %.2lf                            :\n",x,atan(x)*180/PI);
			 printf("\t\t\t\t\t:...................................................................................:\n");
			 fprintf(file,"The value of tan^-1(%.2lf) = %.2lf   \n",x,atan(x)*180/PI);
			 fputs("\n",file);
			 fclose(file);
		 }
}

int square()
{
        double x;
        FILE *file;
        file= fopen("Calculator.txt","a");
	    printf("\n\t\t\t\t\t Enter number  : ");
        scanf("%lf",&x);
        printf("\t\t\t\t\t.....................................................................................\n");
		printf("\t\t\t\t\t:                       Square of %.2lf is = %.2lf                                    :\n",x,pow(x,2));
		printf("\t\t\t\t\t:...................................................................................:\n");
		fprintf(file,"Square of (%.2lf)is = %.2lf   \n",x,pow(x,2));
		fputs("\n",file);
		fclose(file);
}

int squareroot()
{
        double x;
        FILE *file;
        file= fopen("Calculator.txt","a");
		printf("\n\t\t\t\t\t Enter number  : ");
        scanf("%lf",&x);
        printf("\t\t\t\t\t.....................................................................................\n");
		printf("\t\t\t\t\t:                   Squareroot of %.2lf is = %.2lf                                  :\n",x,sqrt(x));
		printf("\t\t\t\t\t:...................................................................................:\n");
		fprintf(file,"Squareroot of (%.2lf)is = %.2lf   \n",x,sqrt(x));
		fputs("\n",file);
		fclose(file);
}

int equation()
{
	double a,b,c,p,q,r,x,y;
	double d,x1,x2,realPart, imagPart;
	int n;
	FILE *file;
    file= fopen("Calculator.txt","a");
	printf("\t\t\t\t\t.....................................................................................\n");
	printf("\t\t\t\t\t:       1. ax+b=c.     :     2. ax+by=c & px+qy=r.      :     3. ax^2+by+c.         :\n");
	printf("\t\t\t\t\t:...................................................................................:\n");
	
	printf("\t\t\t\t\t Which one you want to do : ");
	scanf("%d",&n);
	
	if(n==1)
	{
		printf("\n\t\t\t\t\t Enter the value of => a :");
  		scanf("%lf", &a);
  		printf("\t\t\t\t\t Enter the value of => b :");
  		scanf("%lf", &b);
  		printf("\t\t\t\t\t Enter the value of => c :");
  		scanf("%lf", &c);
  		
  		if(a == 0)
     		{
     			printf("\t\t\t\t\t.....................................................................................\n");
	   			printf("\t\t\t\t\t:                           Value of x cannot be predicted                          :\n");
		 		printf("\t\t\t\t\t:...................................................................................:\n");
          	
     		}
     	else
     		{
          		x = c - b / a;
     		}
  			printf("\t\t\t\t\t.....................................................................................\n");
	   		printf("\t\t\t\t\t:                                 Solution is x = %.2lf                              :\n",x);
		 	printf("\t\t\t\t\t:...................................................................................:\n");
		 	fprintf(file,"Solution is x = %.2lf   \n",x);
			fputs("\n",file);
			fclose(file);
	}
	
	if(n==2)
	{
		printf("\n\t\t\t\t\t Enter the value of => a :");
  		scanf("%lf", &a);
  		printf("\t\t\t\t\t Enter the value of => b :");
  		scanf("%lf", &b);
  		printf("\t\t\t\t\t Enter the value of => c :");
  		scanf("%lf", &c);
  		printf("\t\t\t\t\t Enter the value of => p :");
  		scanf("%lf", &p);
  		printf("\t\t\t\t\t Enter the value of => q :");
  		scanf("%lf", &q);
  		printf("\t\t\t\t\t Enter the value of => r :");
  		scanf("%lf", &r);
		
		if(((a*q-p*b)!=0)&&((b*p-q*a)!=0))
		{
			printf("\t\t\t\t\t                        The solution to the equations is unique\n");
			x=(c*q-r*b)/(a*q-p*b);
			y=(c*p-r*a)/(b*p-q*a);
			printf("\t\t\t\t\t.....................................................................................\n");
	   		printf("\t\t\t\t\t:                                 The value of x = %.2lf                            :\n",x);
	   		printf("\t\t\t\t\t:                                 The value of y = %.2lf                             :\n",y);
		 	printf("\t\t\t\t\t:...................................................................................:\n");
		 	fprintf(file,"The value of x = %.2lf and The value of y = %.2lf \n",x,y);
			fputs("\n",file);
			fclose(file);
		}
		else
		if(((a*q-p*b)==0)&&((b*p-q*a)==0)&&((c*q-r*b)==0)&&((c*p-r*a)==0))
		{
			printf("\t\t\t\t\t.....................................................................................\n");
	   		printf("\t\t\t\t\t:                               M A T H  E R R O R                                  :\n");
		 	printf("\t\t\t\t\t:...................................................................................:\n");

		    /*printf("The value of x can be varied and y can be calculated according to x's value using relation\n");
		    printf("y=%lf+(%lf)x",(c/b),(-1*a/b));*/
		}
		

	}
		
		
	if(n==3)
	{
		printf("\n\t\t\t\t\t Enter the value of => a :");
  		scanf("%lf", &a);
  		printf("\t\t\t\t\t Enter the value of => b :");
  		scanf("%lf", &b);
  		printf("\t\t\t\t\t Enter the value of => c :");
  		scanf("%lf", &c);
  		
	    d=b*b-4*a*c;
			    if (d == 0) 
				{
			        x1 = x2 = -b / (2 * a);
			        printf("\t\t\t\t\t                                    Both roots are equal.\n");
				    printf("\t\t\t\t\t.....................................................................................\n");
			   		printf("\t\t\t\t\t:                           The value of x1 = x2  = %.2lf                           :\n",x1);
				 	printf("\t\t\t\t\t:...................................................................................:\n");
					fprintf(file,"The value of x1 = x2  = %.2lf \n",x1);
				    fputs("\n",file);
				    fclose(file);		       
		       }
		    else if (d > 0) 
			{
		        x1 = (-b + sqrt(d)) / (2 * a);
		        x2 = (-b - sqrt(d)) / (2 * a);
		        printf("\t\t\t\t\t                               Both roots are real and diff-2\n");
			    printf("\t\t\t\t\t.....................................................................................\n");
		   		printf("\t\t\t\t\t:                                 First  root x1 = %.2lf                             :\n",x1);
		   		printf("\t\t\t\t\t:                                 Second root x2 = %.2lf                            :\n",x2);
			 	printf("\t\t\t\t\t:...................................................................................:\n");
			    fprintf(file,"First  root x1 = %.2lf and Second root x2 = %.2lf \n",x1,x2);
				fputs("\n",file);
				fclose(file);
		        
		
		    }
		   
		    else
			 {
		        realPart = -b / (2 * a);
		        imagPart = sqrt(-d) / (2 * a);  
		        printf("\t\t\t\t\t.....................................................................................\n");
		   		printf("\t\t\t\t\t:                           Roots are imaginary.No Real Solution                    :\n"/*,realPart, imagPart*/);
		   		//printf("\t\t\t\t\t:                                   x2 = %.2f-%.2fi                                :\n",realPart, imagPart);
			 	printf("\t\t\t\t\t:...................................................................................:\n");
			 	//fprintf(file,"x1 = %.2lf+%.2lfi \t\t x2 = %.2f-%.2fi  \n",realPart, imagPart,realPart, imagPart);
			 	fprintf(file,"Roots are imaginary.No Real Solution \n");
				fputs("\n",file);
				fclose(file);
		        
		    }
	}
			    
}



