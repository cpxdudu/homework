//猜数字
#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main(){
	int num1, num2, num3, i, Time, Ttime, Ftime, input1, input2, input3, A, B;
	char choice;
	
	srand(time(NULL));
	
	Ttime = 0; Ftime = 0 ; Time = 0;
	cout << "需要玩游戏吗（Y/N）？"; 
	choice = cin.get();
	
	while (choice == 'Y'){
		
		num1 =  rand() % 10;  num2 =  rand() % 10;  num3 =  rand() % 10; 
		A=0; B=0; ++Time;
		
		while (num2 == num1 ){
			num2 =  rand() % 10;
		}
		while (num3 == num1 || num3 == num2 ){
			num3 =  rand() % 10;
		}
		
		for(i=0; i<7; ++i){
			A = 0; B = 0; 
			cout << "请输入你猜测的数字:" << endl; cin >> input1 >> input2 >> input3;
			
			if (input1 == num1 & input2 == num2 & input3 == num3){
				cout << "恭喜，你猜对了\n" ;
				++Ttime;
				break;
			}  
			
			if (input1 == num1){
				++A;
			}
			if (input1 == num2 || input1 == num3 ){
				++B;
			}
			
			if (input2 == num2){
				++A;
			}
			if (input2 == num1 || input2 == num3 ){
				++B;
			}
			
			if (input3 == num3){
				++A;
			}
			if (input3 == num1 || input3 == num2 ){
				++B;
			}
			
			cout << A << "A" << B << "B" << endl; 
			
			if (i == 6) {
				++Ftime;
	   			cout << "很遗憾，你没有在规定次数内猜对。答案是 " << num1 << num2 << num3 << endl;
			}
			
	    }
	    cout << "需要玩游戏吗（Y/N）？"; 
		
		cin >> choice;
	    
	    
	}	
	
	cout << "你一共玩了" << Time << "局，赢了" << Ttime << "局，输了" << Ftime << "局";
	return 0; 
} 
