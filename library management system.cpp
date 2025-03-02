#include<iostream>
#include<string>
using namespace std;
class Person {
	protected:
		string name;
	 
	 public:
	 	person(string name){
	 		name = name;
		 }
	 void setname(string n){
	 	name =n;
	 }
	 	string getname(){
	 		return name;
		 }
};
class LibraryMember:public Person{
	private:
		int memberID ;
		int booksBorrowed;
		
		public:
			LibraryMember(string n,int memberID,int booksBorrowed){
			
				memberID =memberID;
			    booksBorrowed = booksBorrowed;
			}
				
			int getmemberID(){
				return memberID;
			}
			int getbooksBorrowed(){
				return booksBorrowed;
			}
};
class PremiumMember:public LibraryMember{
	private:
		double MembershipFee;
		 
		 public:
		 	PremiumMember(string n,int memberID, int booksBorrowed,double membership): LibraryMember(name, memberID, booksBorrowed){
			 
			 MembershipFee =MembershipFee;
			 }
			 double getMembershipFee(){
			 	return MembershipFee;
			 }
};
int main(){

PremiumMember p("LYDIA",12345678,5,500);
cout<<"name:"<<p.getname()<<endl;
cout<<"memberID:"<<p.getmemberID()<<endl;
cout<<"borrowed books:/n"<<p.getbooksBorrowed()<<endl;
cout<<"membershipFee:"<<p.getMembershipFee()<<endl;
return 0;
}

