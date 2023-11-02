//#include<iostream>
//#include<string>
//using namespace std;
//void main()
//{
//	int books = 4, overdue_day;
//	char selection;
//	do
//	{
//		cout << "\nMenu" << endl
//			<< "If you want to Borrow press (B)" << endl
//			<< "If you want to Return press (R)" << endl
//			<< "If Quit press (Q)" << endl
//			<< "Enter your choice: ";
//		cin >> selection;
//		switch(selection)
//		{ 
//		case 'B':
//		{
//			if (books > 0)
//			{
//				books--;
//				cout << "Book Borrowed Successfully!"<<endl;
//			}
//			else
//				cout << "No Book is available at the moment."<<endl;
//			break;
//		}
//		case 'R':
//		{
//			if (books < 4)
//			{
//				int fine = 1;
//				books++;
//				cout << "Enter the number of days ";
//				cin >> overdue_day;
//				if (overdue_day > 5) {
//					fine = overdue_day * fine;
//					cout << "Your fine due to overdue book is " << fine << "$" << endl;
//					cout << "Book Returned Successfully" << endl;
//				}
//				else
//					cout << "Book Returned within due date." << endl
//					<< "Book returned Successfully"<<endl;
//			}
//			else
//				cout << "The book was not Issued"<<endl;
//			break;
//		}
//		case'q':
//		{
//
//		}
//		case 'Q':
//		{
//			cout << "Quit"<<endl;
//			break;
//		}
//		default:
//			cout << "Invalid Choice" << endl;
//			break;
//		}
//	} while (selection != 'Q' && selection != 'q');
//}