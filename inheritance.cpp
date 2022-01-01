#include<iostream>
#include <list>

using namespace std;


class YoutubeChannel {
	private : 

	string ChannelName;
	int Subcriber;
	list<string> PublishedVideoTitles;
	
	protected : 
		string Name;
	
	public : 
	YoutubeChannel (string name , string channelName){
		Name = name;
		ChannelName = channelName;
		Subcriber = 0;
		
			};
		
		void GetInfo (){
			cout << "Name: " << Name << endl;
		cout << "OwnerName: " << ChannelName << endl;
		cout << "SubscribersCount: " << Subcriber << endl;
		cout << "Videos: " << endl;
	for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
};

		void Subcribe (){
			Subcriber++;
		};
		
		void UnSubcribe (){
			if(Subcriber)
			Subcriber--;
		};
		
		void PublishVideo (string title){
			PublishedVideoTitles.push_back(title);
		}

		};


	
		class CookingYoutubeChannel: public YoutubeChannel {
		public : 
				CookingYoutubeChannel(string name, string channelName ):YoutubeChannel(name, channelName){
					
				};
				
		void TagLine(){
			cout << endl <<  Name << " " << "Practive Cooking, Be a Chef to spread Taste" << endl << endl;
		}		
	};


int main(){
	
//	YoutubeChannel ytbChannel("Programming" , "Sarim's Programming");
	
//	
//	ytbChannel.Subcribe();
//	ytbChannel.UnSubcribe();
//	ytbChannel.Subcribe();
//	ytbChannel.Subcribe();
//	ytbChannel.PublishVideo("Intro to OOP");
//	ytbChannel.PublishVideo("Inheritance");
//		ytbChannel.GetInfo();
	
	
	CookingYoutubeChannel TasteYtbChannel("Food","Food Fusion");
	
	
	
	
	TasteYtbChannel.Subcribe();
	TasteYtbChannel.UnSubcribe();
	TasteYtbChannel.Subcribe();
	TasteYtbChannel.Subcribe();
	TasteYtbChannel.PublishVideo("Masala Aloo");
	TasteYtbChannel.PublishVideo("Pakoray");
	TasteYtbChannel.GetInfo();
	TasteYtbChannel.TagLine();	
	
	
	
		CookingYoutubeChannel cookingYtbChannel("Chatkara","Chatkara Food");
	
	
	
	
	cookingYtbChannel.Subcribe();
	cookingYtbChannel.Subcribe();
	cookingYtbChannel.Subcribe();
	cookingYtbChannel.PublishVideo("Make Biryani");
	cookingYtbChannel.PublishVideo("Chinese Rice");
	cookingYtbChannel.GetInfo();
	cookingYtbChannel.TagLine();
	
		system("pause > 0");

}
