- [x] 1. Sum of Two Numbers: Write a program that takes two integers as input and calculates their sum. Print the result.
  int main()
 {
    int num1 = 0;
    int num2 = 0;
    int sum;
    std::cout << "Please enter two numbers:  ";
    std::cin >> num1 >> num2;
    sum = num1 + num2;
    std::cout << num1 << "+" << num2 << "=" << sum;
    

    return 0;
  }

- [x]  2. Average of Three Numbers: Create a program that computes the average of three integers. Print the average.


int main()
{
    int num1 = 0;
    std::cout << "Please enter the first number: ";
    std::cin >> num1;
    
    int num2 = 0;
    std::cout << "Please enter the second number: ";
    std::cin >> num2;
    
    int num3 = 0;
    std::cout << "Please enter the third number: ";
    std::cin >> num3;
    
    float average = (num1 + num2 + num3) / 3;
    std::cout << "Average: " << average << std::endl;
    
    

    return 0;
}


- [x] 3. Multiplication Table: Generate and print the multiplication table for a given number. Take the number as input and print its multiplication table from 1 to 10.

int main()
{
    int a {};
    std::cout <<"Please enter the number: ";
    std::cin >> a;
    for(int i = 1; i <= 10; ++i)
    {
        std::cout << a << " * " << i << " = " << a * i << std::endl;
    }
    return 0;
}


- [x] 4. Uppercase to Lowercase: Write a program that perform simple character manipulations, such as converting uppercase letters to lowercase.

int main()
{
    char c {};
    do{
        std::cout << "Enter the symbol: ";
        std::cin >> c;
    } while(c < 'A' || c >'Z');
    c += 32;
    std::cout << c;
    
    return 0;
}

- [x] 5. Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը։ Տպել էկրանին true եթե մուտքագրված սիմվոլը թվանշան է հակառակ դեպքում տպել false:
int main()
{
    char sym;
    std::cout <<"Please enter the character: ";
    std::cin >> sym;
    if(sym > '0' && sym < '9'){
        std::cout << "true";
    }else{
        std::cout << "false"; 
    }
    
    return 0;
}

&& sym-y partadir petqa mec lini 0 ic ev poqr 9 ic

- [x] 6. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել թիվ, ստուգել և տպել՝ արդյոք թիվը զույգ է, թե կենտ:
int main()
{
    int a {};
    std::cout << "Please enter the number: ";
    std::cin >> a;
    if(a % 2 == 0){
        std::cout << "Zuyg e";
    }else{
        std::cout << "Kent e";
    }

    return 0;
}

- [x] 7. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել տառ, ստուգել և տպել տառը բաղաձայն է, թե ձայնավոր:

Xndri algorithm.
Tolower  -function e, vory yndunum e nishy vorpes argument ev veracum poqratareri, ete ayn mecatar e. Isk ete nishn arden poqratar e uremn mnum e anpopox.
Kirarelov tolower letter popoxakani vra, apahovum enq vor cragiry karox e kargavorel ogtvoxi koxmic mecatar ev poqratar mutqagrumy. 
letter = tolower(letter); // ays toxy tuyl e tails hamematel mutqagrvac tary poqratereri het
Yndhanur armamb imasty ayn e vor mutqagroxy te mecatar te poqratar mutqagrelu depqum, mer cragiry kashxati

isalpha- function e, vory stugum e ardyoq tvyal character-y tar e, mecatar e kam poqratar

if (isalpha(letter)) // haytararutyuny apahovum e, vor menq miayn ksharunakenq stugel te ardyoq tary baxadzayn e kam dzaynavor. Ete mutqagrvac character-y aybbenakan nish che, if block-i nersum cragiry chi gorci



int main()
{
    char letter;
    std::cout << "Please enter the letter: ";
    std::cin >> letter;
    
    letter = tolower(letter);
    
    if(isalpha(letter)){
        if(letter == 'a' || letter == 'e' || letter == 'i' || letter == 'u'
        || letter == 'o'){
            std::cout << "is vowel" << std::endl;
        }else{
            std::cout << "is a consonant" << std::endl;
        }
    }else{
        std::cout << "invalid input. Please enter a valid letter: " << std::endl;
    }

    return 0;
}


- [x] 8. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երկու թիվ, ստուգել և տպել դրանցից ամենամեծը:
      
      int main()
{
    int a {};
    int b {};
    std::cout <<"Please enter two numbers: ";
    std::cin >> a >> b;
    
    if(a > b){
        std::cout <<"The largest number is: " << a;
    }else{
        std::cout <<"The largest number is: " << b;
    }
    return 0;
}



- [x] 9. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր, եթե երեք թվերից 2-ը հավասար են՝ տպել այդ երեք թվերից ամենամեծը
   evenCount variable- ogtagorcvum e hetevelu hamar, te tveric qanisn en zuyg

int main()
{
    int num1, num2, num3;
    std::cout << "Please enter the first number: ";
    std::cin >> num1;
    std::cout << "Please enter the second number: ";
    std::cin >> num2;
    std::cout << "Please enter the third number: ";
    std::cin >> num3;
    
    int evenCount = 0;
    if (num1 % 2 == 0) evenCount++;
    if (num2 % 2 == 0) evenCount++;
    if (num3 % 2 == 0) evenCount++;
    
    if(evenCount >= 2){
        int largest = num1;
        
        if(num2 > largest){
            largest = num2;
        }
        
        if(num3 > largest){
            largest = num3;
        }
        
        std::cout << "The largest number among the three is: " << largest << std::endl;
    }else{
        std::cout << "Not enough even numbers to determine the largest." << std::endl;
    }

    return 0;
}

- [x] 10. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել չորս թիվ, եթե այդ թվերի գումարը հավասար է 0-ի՝ տպել նրանցից ամենափոքրը

int num1, num2, num3, num4;
    std::cout << "please enter the first number: ";
    std::cin >> num1;
    std::cout << "please enter the second number: ";
    std::cin >> num2;
    std::cout << "please enter the third number: ";
    std::cin >> num3;
    std::cout << "please enter the fourth number: ";
    std::cin >> num4;
    
    int sum = num1 + num2 + num3 + num4;
    
    if(sum == 0){
        int smallest = num1;
        
        if(num2 < smallest){
            smallest = num2;
        }
        
        if(num3 < smallest){
            smallest = num3;
        }
        
        if(num4 < smallest){
            smallest = num4;
        }
        
        std::cout << "The smallest number among the four is: " << smallest << std::endl;
    }else{
        std::cout << "The sum of the numbers is not equal to 0. " << std::endl;
    }
    return 0;
    
}

11. Գրել ծրագիր, որը օգտվողին թույլ է տալիս մուտքագրել տարի, ստուգում և տպում է տարին նահանջ է, թե ոչ:

int main()
{
    int year;
    std::cout << "Please enter the year: ";
    std::cin >> year;
    
    if((year % 4 ==0 && year % 100 != 0) || (year % 400 == 0)) {
        std::cout << year << "year is a leap" << std::endl;
    }else{
        std::cout << "year is not leap" << std::endl;
    }

    return 0;
}


- [x] 12. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել երկու սիմվոլները, ստուգեք արդյոք սիմվոլները արտահայտում են նույն տառի մեծատառ և փոքրատառ տեսքերը, թե ոչ։

std::tolower - ogtagorcvum e character-y poqrartari hamarjeqin poxakerpelu hamar


int main()
{
    char symbol1, symbol2;
    
    std::cout << "enter the first symbol: ";
    std::cin >> symbol1;
    
    std::cout << "enter the second symbol: ";
    std::cin >> symbol2;
    
    char lowercase1 = std::tolower(symbol1);
    char lowercase2 = std::tolower(symbol2);
    
    if(lowercase1 == lowercase2){
        std::cout << "The symbols represent the same letter" << std::endl;
    }else{
        std::cout << "The symbols do not represent the same letter" << std::endl;
    }

    return 0;
}


- [x] 13. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ, և հաշվել նրա ֆակտորիալը:

int main()
{
    int num;
    std::cout << "Please enter the number: ";
    std::cin >> num;
    
    if(num < 0){
        std::cout << "Factorial is not defined for negative numbers: ";
    } else{
        long Factorial = 1;
        for(int i = 1; i <= num; ++i){
            Factorial *= i;
        }
        
        std::cout << "Factorial of " << num << " is: " << Factorial << std::endl;
    }
    return 0;
}
