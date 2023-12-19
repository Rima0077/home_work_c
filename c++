1. Sum of Two Numbers: Write a program that takes two integers as input and calculates their sum. Print the result.
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

2. Average of Three Numbers: Create a program that computes the average of three integers. Print the average.


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


3. Multiplication Table: Generate and print the multiplication table for a given number. Take the number as input and print its multiplication table from 1 to 10.

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


4. Uppercase to Lowercase: Write a program that perform simple character manipulations, such as converting uppercase letters to lowercase.

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

5. Ստեղծել sym անունով char տիպի փոփոխական։ Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել sym անունով փոփոխականի արժեքը։ Տպել էկրանին true եթե մուտքագրված սիմվոլը թվանշան է հակառակ դեպքում տպել false:
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

6. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել թիվ, ստուգել և տպել՝ արդյոք թիվը զույգ է, թե կենտ:
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

7. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել տառ, ստուգել և տպել տառը բաղաձայն է, թե ձայնավոր:

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


8. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երկու թիվ, ստուգել և տպել դրանցից ամենամեծը:
      
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



9. Գրել ծրագիր, որը թույլ կտա օգտվողին մուտքագրել երեք թվեր, եթե երեք թվերից 2-ը հավասար են՝ տպել այդ երեք թվերից ամենամեծը
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

10. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել չորս թիվ, եթե այդ թվերի գումարը հավասար է 0-ի՝ տպել նրանցից ամենափոքրը

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


12. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել երկու սիմվոլները, ստուգեք արդյոք սիմվոլները արտահայտում են նույն տառի մեծատառ և փոքրատառ տեսքերը, թե ոչ։

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


13. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ, և հաշվել նրա ֆակտորիալը:

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
14. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել ինդեքս և տպել էկրանին Ֆիբոնաչիի հաջորդականության առաջին տարրից մինչև մուտքագրված ինդեքսին համապատասխանող տարրը:

15. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և հաշվել այդ թվի թվանշանների գումարը։

16. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և էկրանին տպել մուտքագրված թվի reverse տարբերակը (Օր․՝ 1234 -> 4321)։
 
17. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և պարզել արդյո՞ք թիվը պարզ է, թե ոչ։

18. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և պարզել արդյո՞ք թիվը 3֊ի աստիճան է, թե ոչ։

19. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել թիվ և պարզել արդյո՞ք թվի երկուական տեսքի ավագ և կրտսեր բիթերը համընկնում են, թե ոչ։

20. Գրել ծրագիր, որը օգտվողին թույլ կտա մուտքագրել 0-ից 7 թվերից որևէ մեկը, և տպել էկրանին մուտքագրված թվին համապատասխանող շաբաթվա օրը։
21. Գրեք ծրագիր, որը հաշվարկում և տպում է տվյալ ամբողջ թվով զանգվածի բոլոր տարրերի գումարը:
22. Ստեղծեք ծրագիր, որը հաշվարկում և տպում է տվյալ ամբողջ թվով զանգվածի տարրերի միջինը (միջինը):
23. Գրեք ծրագիր, որը գտնում և տպում է առավելագույն արժեքը ամբողջ թվով զանգվածում:
24. Մշակեք ծրագիր, որը գտնում և տպում է նվազագույն արժեքը ամբողջ թվով զանգվածում:
25. Իրականացնել ծրագիր, որը որոնում է որոշակի ամբողջ արժեք զանգվածում: Եթե արժեքը գտնվի, տպեք դրա ինդեքսը. հակառակ դեպքում նշեք, որ արժեքը զանգվածում չէ:
26. Գրեք ծրագիր, որը տեսակավորում է ամբողջ թվով զանգվածի տարրերը աճման կարգով` օգտագործելով սովորական տեսակավորման ալգորիթմը, ինչպիսին է փուչիկների տեսակավորումը կամ ընտրության տեսակավորումը: Տպեք տեսակավորված զանգվածը։
       (Bubble sort, selection sort)
27. Ստեղծեք ծրագիր, որը հակադարձում է ամբողջ թվային զանգվածի տարրերը և տպում հակադարձ զանգվածը:
28. Մշակեք ծրագիր, որը ստուգում է, թե արդյոք կան կրկնվող արժեքներ ամբողջ թվային զանգվածում: Տպեք հաղորդագրություն, որը ցույց է տալիս կրկնօրինակների առկայությունը, թե ոչ:
29. Գրեք ծրագիր, որը նույնականացնում և տպում է բոլոր պարզ թվերը տվյալ ամբողջ թվով զանգվածում:
30. Մշակեք ծրագիր, որը միավորում է երկու ամբողջ թվային զանգվածներ մեկ զանգվածի մեջ՝ հեռացնելով կրկնօրինակները և տպում ստացված միությունը:
31. Գրեք ծրագիր, որը ամբողջ թվով զանգվածը բաժանում է երկու զանգվածի. մեկը կենտ թվեր է պարունակում, մյուսը՝ զույգ թվեր։ Տպեք երկու զանգվածները:
32. Ստեղծեք ծրագիր, որը գտնում և տպում է երկրորդ ամենամեծ տարրը ամբողջ թվով զանգվածում:                            


POINTER
33. Գրեք C++ ծրագիր, որն գումարում է նույն չափերի երկու մատրիցա։ Խնդրեք օգտվողին մուտքագրել արժեքները երկու մատրիցների համար, կատարել գումարումը և տպել արդյունքը:
34. Ստեղծեք 1-ին խնդրի նման ծրագիր, բայց գումարման փոխարեն մատրիցային հանում:
35. Գրեք C++ ծրագիր, որը բազմապատկում է երկու մատրիցա։ Խնդրեք օգտվողին մուտքագրել չափերն ու արժեքները երկու մատրիցների համար, կատարել բազմապատկում և տպել արդյունքը:
36. Մշակեք ծրագիր, որը փոխադրում է տվյալ մատրիցը: Մատրիցայի փոխադրումը նշանակում է տողերի փոխանակում սյունակներով: Օգտատիրոջը հուշեք մուտքագրել մատրիցա, տեղափոխել այն և տպել փոխադրված մատրիցը:
37. Write a C++ program that checks if a given square matrix is an identity matrix. An identity matrix is a square matrix with ones on the diagonal and zeros elsewhere.
       Գրեք C++ ծրագիր, որը ստուգում է՝ արդյոք տրված քառակուսի մատրիցը նույնական մատրիցա է: Ինքնության մատրիցը քառակուսի մատրից է, որի անկյունագծով միավորներն են, իսկ այլուր՝ զրոները:
38. Օգտագործողի կողմից մուտքագրված 2x2 մատրիցայի որոշիչի հաշվարկման ծրագիր իրականացնել: Implement a program to calculate the determinant of a 2x2 matrix entered by the user.
39. Create a program that calculates the inverse of a 2x2 matrix. Ensure that the matrix is invertible (determinant is not zero) before attempting to find the inverse. Ստեղծեք ծրագիր, որը հաշվարկում է 2x2 մատրիցայի հակադարձությունը: Համոզվեք, որ մատրիցը հակադարձելի է (որոշիչը զրոյական չէ) նախքան հակադարձը գտնելը:
40. Develop a program that searches for a specific value in a matrix. If the value is found, print its row and column indices; otherwise, indicate that the value is not in the matrix. Մշակեք ծրագիր, որը որոնում է որոշակի արժեք մատրիցայում: Եթե արժեքը գտնվի, տպեք դրա տողերի և սյունակների ինդեքսները. հակառակ դեպքում նշեք, որ արժեքը մատրիցայում չէ:
41. Write a C++ program that rotates a square matrix 90 degrees clockwise. Prompt the user to enter a matrix, rotate it, and print the rotated matrix. Գրեք C++ ծրագիր, որը քառակուսի մատրիցը պտտում է 90 աստիճան ժամացույցի սլաքի ուղղությամբ: Հորդորեք օգտվողին մուտքագրել մատրիցա, պտտել այն և տպել պտտվող մատրիցը:
42. Write a C++ program that sorts the rows of a matrix. Գրեք C++ ծրագիր, որը տեսակավորում է մատրիցայի տողերը:


DYNAMIC MEMORY
43. 		Duplicate Element Removal:
*           Create a program that works with a dynamically allocated N-dimensional array. The program should:
* 		Check for and identify all duplicate elements in the array.
* 		Remove duplicates, resizing the array accordingly.
Կրկնվող տարրի հեռացում.
           Ստեղծեք ծրագիր, որն աշխատում է դինամիկորեն հատկացված N-չափական զանգվածով: Ծրագիրը պետք է.
Ստուգեք և հայտնաբերեք զանգվածի բոլոր կրկնօրինակ տարրերը:
Հեռացրեք կրկնօրինակները՝ համապատասխանաբար չափափոխելով զանգվածը:
44. 	Matrix Merge:
* Develop a program that combines two 2D arrays, both of size NxM, to create a new 2NxM matrix.
Մատրիցային միաձուլում.
Մշակեք ծրագիր, որը միավորում է երկու 2D զանգված, երկուսն էլ NxM չափի, ստեղծելու նոր 2NxM մատրիցա:
45. 	String Concatenation:
*  Write a program that can concatenate two dynamic strings.
Գրեք ծրագիր, որը կարող է միացնել երկու դինամիկ տող:
46. 	String Anagram Check:
*  Develop a program that checks if two strings are anagrams of each other (contain the same characters in a different order).
* Մշակեք ծրագիր, որը ստուգում է, թե արդյոք երկու տողերը միմյանց անագրամներ են (պարունակում են նույն նիշերը տարբեր հերթականությամբ):
47. 	Print Pascal's Triangle:
*  Create a program that prints Pascal's triangle up to a specified number of rows.
* Ստեղծեք ծրագիր, որը տպում է Պասկալի եռանկյունը մինչև որոշակի թվով տողեր:
48. 	String Compression:
*  Implement a program that compresses a string by replacing repeated characters with a character followed by the count. You can use boolean variables to track character repetition.
* Իրականացրեք ծրագիր, որը սեղմում է տողը` կրկնվող նիշերը փոխարինելով նիշով, որին հաջորդում է հաշվարկը: Նիշերի կրկնությանը հետևելու համար կարող եք օգտագործել բուլյան փոփոխականներ:
49. 	Array Left Shift with Printing
*  Write a C++ program that performs a left shift operation on an array arr for a given number of times n. After each left shift, print the updated array.
       Գրեք C++ ծրագիր, որը կատարում է ձախ հերթափոխի գործողություն զանգվածի զանգվածի վրա n-ի տրված թվով: Յուրաքանչյուր ձախ հերթափոխից հետո տպեք թարմացված զանգվածը:”
