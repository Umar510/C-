// #include <iostream>
// using namespace std;
// int main()
//{
//  int n = 4, k = 2;
//
//  cout << ++n << endl; //5
//  cout << n << endl; //5
//  cout << n++ << endl; //5 is printed but n is incremneted by 1
//  cout << n << endl; //6
//  cout << -n << endl; //-6
//
//  cout<<"line  " << n << endl; //6
////
// cout << --n << endl; // 5
// cout << n << endl; //5
////
// cout << n-- << endl; //5
// cout << n << endl; //4
//
// cout << n + k << endl; //6
// cout << n << endl; //4
// cout << k << endl;//2
// cout << n << k << endl;//4 and 2
// cout << n << endl; //4
// cout << " " << n << endl; //4
// cout << " n=n" << endl; // 4
// cout << "\n" << endl; //to next line
// cout << " n * n = "<<endl; //CAREFUL!
// cout << n * n << endl;//16
// cout << 'n' << endl;
//
// return 0;
//}

// problem 2

// #include <iostream>
// using namespace std;
// int main()
//{
//  int n = 3;
//  while (n >= 0)
//	--n;
//  	cout<<"At n="<<n<<"  / " << n * n << endl;
//
//  cout<<"outside 1st loop n = " << n << endl;
//
//  while (n < 4)
//  			cout<<"outside 2nd loop n = " << n << endl;
//  {
//  	 			cout<< ++n << endl;
//  }
//  return 0;
// }

// #include <iostream>
// using namespace std;
//
// int main()
//{
//  int n;
//   cout << (n = 4) << endl;
//  cout << (n == 3) << endl;
//  cout<< (n > 3) << endl;
//  cout << (n < 4) << endl;
//  cout <<"n=0 "<< (n = 0) << endl;
//  cout << (n == 0) << endl;
//  cout << (n > 0) << endl;
//  cout<<"n && 4   " << (n && 4) << endl;
//  cout << (n || 4) << endl;
//  cout << (!n) << endl;
//  return 0;
// }

// #include <iostream>
// using namespace std;
// int main()
// {
// enum color_type {red, orange, yellow, green, blue, violet};
// color_type shirt, pants;
// shirt = red;
// pants = blue;
// cout << shirt << " " << pants << endl;

// int n;
// cout << "Enter an integer:: ";
// cin>>n;
// int found = 0, count = 5;
// if (!found || --count == 0)
// cout << "danger" << endl;
// cout << "count = " << count << endl;
// return 0;
// }

// #include <iostream>
// using namespace std;
//  void counter(int* count)
//     {
//         count++;
//     }
// int main()
// {
//     int n;
//     cout << "Enter an integer: ";
//     cin >> n;
//     if (n < 10)
//         cout << "less than 10" << endl;
//     else if (n > 5)
//         cout << "greater than 5" << endl;
//     else
//         cout << "not interesting" << endl;
// string food = "Pizza";
// string& meal = food;
// cout << meal;
// string fullName;
// cout << "Type your full name: ";
// cin>>fullName;
// getline(cin, fullName);
// cout << "Your name is: " << fullName;
//     static int count=5;
//    for(int i=0;i<3;i++)
//    {
//     counter(&count);
//    }
//     return 0;
// }


