
      //Procedural approach quiz game using C++ programming language for the first time.

#include<iostream>
#include<unistd.h>
  using namespace std;
  
       class   Quizgame
        {
		         
		         private:
		                  int play,showscore,guildlines,quit;
		                  int  enter,number;
		                  int sum,here;
		                  char ch,please,life;
		                  char name[20];
		                  int j;
		                  int i,sec;
		                  
		                  
		                  
		         public:
		         
		               void input()
		               {    system("clear");  
						    cout<<"\n\n\n\n\t\t\t\t\t\t\t\t***********************************************************"<<endl;
						    cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tWELCOME TO KBC QUIZ"<<endl;	      
						      cout<<"\n\t\t\t\t\t\t\t\t***********************************************************"<<endl; 						      
						      cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t------------------------------------------"<<endl;
						      cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tPlay"<<endl;
						      cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tShow score"<<endl;
						       cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tReset score"<<endl;
						      cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\tGuidelines"<<endl;
						      cout<<"\n\t\t\t\t\t\t\t\t\t\t\t\t\t\tQuit "<<endl;
						      cout<<"\n\n\n\t\t\t\t\t\t\t\t\t------------------------------------------\n\n\n\n"<<endl;
						      cout<<"\t\t\t\t\t\t\t\tSelect the number you want to perform as seen in  the list\t";
						      cin>>enter;
						      
						 }     
						 
				   void loading()
			                      { 
									       for(j=5;j>=0;j--)
                                             { 
												  sleep(1);
										        system("clear");
												 cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tLoading:"<<j<<endl;		 										 
											 }									  
									  }      
								  
						
								  
			  void  display()
						   { 
							   
							   					   
				           switch(enter)
				         {
				                case 1:	
							        system("clear");
							         cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tEnter your name:\t";
				                    cin>>name;
				                    system("clear");                             
	                               cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tAre you sure want to play the game. yes/no?  if yes press y or n for  home\t";
	                               cin>>please;
	                              
	                               if(toupper(please)=='Y')
	                                    {		
                                          system("clear");
                                          cout<<" \n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t************************************"<<endl;                      			
								         cout<<"\n\n\t\t\t\t\t\t\t\t\t\tWelcome  to you "<<name << "\tin kBC quiz"<<endl;
								        cout<<"\n\n\t\t\t\t\t\t\t\t\t\t************************************"<<endl;	
											             
															cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tSo we are checking the player patience level so, press 1  to continue the game \t";
															cin>>number;
													
															loading(); 
                                                              switch(number)
																	{ 
													                      
													             
												                              case 1:             system("clear");
												                             							cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t1. Which  is the oldest religion of our  country ?\n\n"<<endl;
																									    cout<<"\n\n\t\t\t\t\t\t\t\ta. Christianity "<<"\t\t\tb. Hinduism"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Buddhism "<<"\t\t\t\td. Islam\n"<<endl;																					
												                                     					cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     					cout<<"\t\t\t\t\t\t\t\t	Select your answer\t\t\t"; 
																									    cin>>ch;
																										 
																											                       if(toupper(ch)=='L')
																											                           {
																																		   	
																																		   	   cout<<" \n\t\t\t\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tb. hindusim"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Buddhism"<<endl;	
																																		 	cin>>ch;			
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\tHindiusm is correct "<<endl;
																																									  
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\tIt is wrong "<<endl;
																																								
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																											   
																																										}         				  			     					
																																	       }
																																	  	
																																	else{
																																													
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\tHindiusm is correct "<<endl;
																																									 
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\tIt is wrong "<<endl;

																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;																																										
																																										}     			       
																																		}
																											
																												  
												     	case 2:                                            	
																		                                         cout<<"\n\n\t\t\t\t\t\t\t\t2.  What % of the earth's surface is covered by water?\n\n"<<endl;
																												cout<<"\t\t\t\t\t\t\t\ta. 91%"<<"\t\t\tb. 71%"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. 61% "<<"\t\t\td. 81% \n"<<endl;																								
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                           {
																																		   	   cout<<" \n\n\t\t\t\t\t\t\t\t\t\t\tb. 71%"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. 61%\n"<<endl;	
																																		 	cin>>ch;			
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t 71% is correct "<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																													
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t71% is correct "<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																					
																																		}
																	                                                                  
																	              
																        	case 3:                     											                                                      
																			                                   cout<<"\n\n\t\t\t\t\t\t\t\t3.  Which is the second Largest country in the world? (by land )\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. Russia"<<"\t\t\tb. China "<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Canada "<<"\t\t\td. Japan\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\t	Select your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                           {
																																		   	   cout<<" \n\t\t\t\n\n\t\t\t\t\t\t\t\t\t\t\t\t\tb. China"<<endl<<"c. Canada\n"<<endl;	
																																		 	cin>>ch;			
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Canada is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																													
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\tCanada  is correct "<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='A' || toupper(ch)=='D' || toupper (ch)=='B') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																		}
																	                
																	                                                                         
																          case 4:                      
																          								
																			                                   cout<<"\n\n\t\t\t\t\t\t\t\t4. How many sides does heptagon have?\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. 11"<<"\t\t\tb. 7"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. 5 "<<"\t\t\td. 8\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\t	Select your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                           {
																											                           cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\tb. 7"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. 5 \n"<<endl;	
																																		 	cin>>ch;			
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t 7 is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																													
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t7 is correct "<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='A' || toupper(ch)=='D' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																		}
																	                
														
																        	case 5:                    
																			                                   cout<<"\n\n\t\t\t\t\t\t\t\t5.  What is the average numbers of teeth in a normal adult male ?(exculding wisdom teeth)\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. 32"<<"\t\t\tb. 36"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. 40"<<"\t\t\td. 38\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                           {																			                                   
																											                               cout<<"\n\n\t\t\t\t\t\t\t\ta. 32"<<endl<<"\n\n\t\t\t\t\t\t\t\t\t\t\td. 38\n"<<endl;										
																																		 	cin>>ch;			
																																							if(toupper(ch)=='A')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t 32 is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='B') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																													
																																							if(toupper(ch)=='A')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t32 is correct "<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																		}
																	                			                                                                         
                                                                                         
																        	case 6:                       
																			                                   cout<<"\n\n\t\t\t\t\t\t\t\t6. ................., the country with highest population.\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. India "<<"\t\t\tb. China"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. England"<<"\t\t\td.  Japan\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                           {
																			                                   			     			    cout<<"\n\n\t\t\t\t\t\t\t\ta. India "<<"\t\t\tb. China\n"<<endl;										
																																		 	cin>>ch;			
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t China is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																											if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t China is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}           
																																		}
																	                			                                                                         
                                                                        
																        	case 7:                       
																			                                   cout<<"\n\n\t\t\t\t\t\t\t\t7.  Which place  is the gateway  to  Mt.Everest ?\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. Musatang "<<"\t\t\tb. Bandipur"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Namchebazar"<<"\t\t\td.  Srinagar\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                           {						
																											                                 cout<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Namchebazar"<<"\t\t\td.  Srinagar\n"<<endl;										
																																		 	cin>>ch;			
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Namchebazar  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																											
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Namchebazar  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}           
																																		    }                              																	
																																		             																	
                                                                         
																        	case 8:                       
																			                                   cout<<"\n\n\t\t\t\t\t\t\t\t8.  What is the total area of Nepal?\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. 1,57,187 sq.km "<<"\t\t\tb.  1,47,181 sq,km"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. 1,23,187  sq.km"<<"\t\t\td.  1,97,111 sq.km\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                                cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\tb.  1,47,181 sq,km"<<endl<<"\n\t\t\t\t\t\t\t\tc. 1,23,187  sq.km\n"<<endl;						
																																		 	cin>>ch;			
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t 1,47,181 sq,km  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																											
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t 1,47,181 sq,km  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																		    }                               																	
                                                                                                      																	
																																		
																	           
																       	case 9:                            
																			                                   cout<<"\n\n\t\t\t\t\t\t\t\t9.  Which first electrical item did Thomas Edison invent?\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. Iron"<<"\t\t\tb. Radio "<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Television"<<"\t\td. Lightbulb\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                                 cout<<"\n\n\t\t\t\t\t\t\t\ta. Iron "<<endl<<"\n\n\t\t\t\t\t\t\t\t\t\t\td. Lightbulb\n"<<endl;							
																																		 	cin>>ch;			
																																							if(toupper(ch)=='D')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Lighbulb  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='B' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																
																																							if(toupper(ch)=='D')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Lighbulb  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='B' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																		    }                               																	
                                                                         
                                                                         																	
																	           
																	case 10:                             
																			                                   cout<<"\n\n\t\t\t\t\t\t\t\t10.  During which year did World War I begin?\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. 1940 A.D"<<"\t\t\tb.  1914 A.D "<<endl<<"\n\n\t\t\t\t\t\t\t\tc. 1918 A.D"<<"\t\t\td.  1920 A.D\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                                cout<<"\n\n\t\t\t\t\t\t\t\ta. 1940 A.D"<<"\t\t\tb.  1914 A.D \n"<<endl;							
																																		 	cin>>ch;			
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t 1914 A.D  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																             
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t 1914 A.D  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																		    }                               																	
                                                                                                      																																											
																	
                                                                      	case 11:                         
																			                                   cout<<"\n\n\t\t\t\t\t\t\t\t11.  Which instrument is used for measuring wind speed?\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. Galvanometer"<<"\t\t\tb.  Speedometer"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Anemometer "<<"\t\t\td.  Ammeter\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                           cout<<"\n\n\t\t\tb.  Speedometer"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Anemometer \n"<<endl;					
																																		 	cin>>ch;			
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Anemometer is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																             
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Anemometer is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																		    }                               																	
                                                                                                      													   
                                                                         
                                                                                 	case 12:           
																			                                   cout<<"\n\n\t\t\t\t\t\t\t\t12.  How many players are there in an ice hockey team?\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. Six"<<"\t\t\tb. Seven"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Nine "<<"\t\t\td. Ten\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                           cout<<"\n\n\t\t\t\t\t\t\t\ta.  Six"<<endl<<"\t\t\tb. Seven \n"<<endl;					
																																		 	cin>>ch;			
																																							if(toupper(ch)=='A')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Six is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																             	if(toupper(ch)=='A')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t six is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																		    }                               																	
                                                                     
                                                                          case 13:       
                                                                                                               cout<<"\n\n\t\t\t\t\t\t\t\t13.  How many oscars did the Titanic movie got?\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. Eight"<<"\t\t\tb. Seven"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Eleven"<<"\t\td. Ten\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t\n"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                           cout<<"\n\n\t\t\t\t\t\t\t\ta. Nine"<<endl<<"\n\n\t\t\t\t\t\t\t\tc.  Eleven\n"<<endl;					
																																		 	cin>>ch;			
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Eleven is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='A' || toupper(ch)=='D' || toupper (ch)=='B') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																		
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Eleven is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='A' || toupper(ch)=='D' || toupper (ch)=='B') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}             
																																		    }                               				
                                                                          
                                                                          
                                                                   
                                                                          case 14:     
                                                                                                               cout<<"\n\n\t\t\t\t\t\t\t\t14.  In which sport can you win the Davis Cup?\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. Football"<<"\t\t\tb. Cricket"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Basketball"<<"\t\t\td. Tennis\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											          
																											                       if(toupper(ch)=='L')
																											                         {   
																											                               cout<<"\n\n\t\t\t\t\t\t\t\ta. Football"<<endl<<"\n\t\t\t\t\t\t\t\t\t\t\td. Tennis\n"<<endl;						
																																		 	cin>>ch;			
																																							if(toupper(ch)=='D')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Tennis is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='A' || toupper(ch)=='B' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																		
																																							if(toupper(ch)=='D')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Tennis is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='A' || toupper(ch)=='B' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																		    }            
																																		    
																			              
                                                                          case 15:                      
                                                                                                               cout<<"\n\n\t\t\t\t\t\t\t\t15.  H2O is the chemical formula for what?\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. Glycerine"<<"\t\t\tb. Water"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Hydrogen"<<"\t\t\td. Oxygen\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                              cout<<"\n\n\t\t\t\t\t\t\t\ta. Glycerine"<<"\t\t\tb. Water\n"<<endl;								
																																		 	cin>>ch;			
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\tWater  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='A' || toupper(ch)=='D' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																				if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Water is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='A' || toupper(ch)=='D' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}      
																																		    }   
																																	    
																	 case 16:                            cout<<"\n\n\t\t\t\t\t\t\t\t16.  Which joint connects the foot to the leg??\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. Ankle"<<"\t\t\tb.  Pivot"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Hinge "<<"\t\t\td. Saddle\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                               cout<<"\n\n\t\t\t\t\t\t\t\ta. Ankle"<<endl<<"\n\t\t\t\t\t\t\t\t\t\t\td. Saddle\n"<<endl;						
																																		 	cin>>ch;			
																																							if(toupper(ch)=='A')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Ankle is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																		
																																							if(toupper(ch)=='A')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Ankle is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}                  
																																		    }               															    
																																		              																	    
																																		    
																																				    
																	 case 17:                             
                                                                                                                cout<<"\n\n\t\t\t\t\t\t\t\t17.  Which place in Nepal is  also called switzerland.\n\n"<<endl;
																											    cout<<"\n\n\t\t\t\t\t\t\t\ta. Srinagar"<<"\t\t\tb. Jiri(Dolakha) "<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Bandipur "<<"\t\t\td. Mustang\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                               cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\tb. Jiri(Dolakha) "<<endl<<"c. Bandipur \n"<<endl;						
																																		 	cin>>ch;			
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Jiri(Dolakha) is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='D' || toupper(ch)=='A' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																		
																																							if(toupper(ch)=='B')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t Jiri(Dolakha) is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='D' || toupper(ch)=='A' || toupper (ch)=='C') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																		    }         
																																		    
																																		    
																	case  18 :                            
																	                                            cout<<"\n\n\t\t\t\t\t\t\t\t18.   When was the constitution of Nepal introduced?\n\n"<<endl;
																											    cout<< "\n\n\t\t\t\t\t\t\t\ta. 2 Jestha,2072"<<"\t\tb. 1 Baisakh,2072"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. 3 Ashoj,2072"<<"\t\t\td. 3 Kartik,2072\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                               cout<<"\n\n\t\t\t\t\t\t\t\t\t\t\ta. 2 Jestha,2072"<<endl<<"\n\n\t\t\t\t\t\t\t\t\t\t\t c. 3 Ashoj,2072\n"<<endl;						
																																		 	cin>>ch;			
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<" \n\n\n\t\t\t\t\t\t\t\t\t 3 Ashoj,2072  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='D' || toupper(ch)=='B' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																		
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<" \n\n\n\t\t\t\t\t\t\t\t\t 3 Ashoj,2072  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='D' || toupper(ch)=='B' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}                     
																																		    }         
																																		    
																		case  19:                       
																	                                            cout<<"\n\n\t\t\t\t\t\t\t\t19.   Name the country where there no mosquitoes are found?\n\n"<<endl;
																											    cout<< "\n\n\t\t\t\t\t\t\t\ta. Japan "<<"\t\t\tb.Argentina"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Italy"<<"\t\t\td. France\n"<<endl;																							
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     							cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																											    cin>>ch;
																											    
																											                       if(toupper(ch)=='L')
																											                         {   
																											                               cout<<"\n\n\n\t\t\t\t\t\t\t\tc. Italy"<<"\t\t\td. France\n"<<endl;						
																																		 	cin>>ch;			
																																							if(toupper(ch)=='D')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t  France  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='B' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																		      
																																							if(toupper(ch)=='D')
																																								  {
																																									  cout<<" \n\n\n\t\t\t\t\t\t\t\t\t France  is correct"<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='C' || toupper(ch)=='B' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "Invalid input" <<endl;
																																										}             
																																		    }                      																	    
																																		    
																																		
																	case 20:																						
																			             cout<<"\n\n\t\t\t\t\t\t\t\t21. Which is the smallest  district in our country?\n\n "<<endl;
																			             cout<<"\n\n\t\t\t\t\t\t\t\ta.  Jhapa "<<"\t\t\tb. Morang"<<endl<<"\n\n\t\t\t\t\t\t\t\tc. Bhaktapur"<<"\t\t\td.  kathmandu\n"<<endl;
																			             cout<<"\n\n\t\t\t\t\t\t\t\tPress L for  lifeline i.e 50-50\t  OR,"<<endl;
												                                     	 cout<<"\n\n\t\t\t\t\t\t\t\tSelect your answer\t\t\t"; 
																						 cin>>ch;
																			                                        
																			                                        
																											                       if(toupper(ch)=='L')
																											                           {
																																		   	cout<<"\nWhich is the smallest  district in our country\n\n "<<endl;
																																		   	   cout<<"\n\n\t\t\t\t\t\t\t\ta.  Jhapa "<<endl<<"\n\n\t\t\t\t\t\t\t\tc.  Bhaktapur"<<endl;	
																																		 	   cin>>ch;			
																																							if(toupper(ch)=='C')
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\tBhaktapur is correct "<<endl;
																																									}
																																									
																																							 else if(toupper(ch)=='B' || toupper(ch)=='D' || toupper (ch)=='A') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																										}            
																																	       }
																																	  	
																																	else{
																																											
																			                                					                            if(toupper(ch) =='C' )
																																								  {
																																									  cout<<"\n\n\n\t\t\t\t\t\t\t\t\tbhaktapur  is correct "<<endl;
																																									}
																																									
																																							 else if(toupper(ch) =='A' || toupper(ch)== 'B'|| toupper(ch)== 'D') 
																																								 {
																																										cout<<"\n\n\n\t\t\t\t\t\t\t\t\t It is wrong "<<endl;
																																								  }  
																																							   else
																																										 {
																																											cout<< "\n\n\n\t\t\t\t\t\t\t\t\tInvalid input" <<endl;
																																									    }                    
																																		}
																																		
						
 																	
															        }			
		                  
										
												  }  
										 								
										 								
										 										 
									else  if (toupper(please)=='N')
									      {
											       system("clear");
													cout<<"\n\n\n\n\t\t\t\t\t\t\t\t***********************************************************"<<endl;
													cout<<"\n\n\t\t\t\t\t\t\t\t\t\tWELCOME TO KBC QUIZ"<<endl;	      
													  cout<<"\n\t\t\t\t\t\t\t\t***********************************************************"<<endl; 
													  
													  cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t------------------------------------------"<<endl;
													  cout<<"\n\n\n\n\t\t\t\t\t\t\t\t\t\tPlay"<<endl;
													  cout<<"\n\t\t\t\t\t\t\t\t\t\tShow score"<<endl;
														cout<<"\n\t\t\t\t\t\t\t\t\t\tReset score"<<endl;
													  cout<<"\n\t\t\t\t\t\t\t\t\t\tGuidelines"<<endl;
													  cout<<"\n\t\t\t\t\t\t\t\t\t\tQuit "<<endl;
													  cout<<"\n\n\n\t\t\t\t\t\t\t\t\t------------------------------------------\n\n\n\n"<<endl;
													 cout<<"\t\t\t\t\t\t\t\tSelect the number you want to perform as seen in list\t";
													  cin>>enter;
												  
						                }	  	
						                
						                else {
											          
											         cout<<"Invalid key pressed  "<<endl;
											}
						                
						         		                 break;
					             case 2 :   system("clear");
					                                cout<<"we are under construction "<<endl;
					                                   break;
					                                   
					             case  3:    system("clear");
					                                cout<<"we are under constructing the full application so be connected with us" <<endl;
					                                break;                      
					                                   
					              case 4:  system("clear");
												cout<<"\n\n \n\n\n\n\t\t\t\t\t\t\t\t\t\t\t\tGuidelines"<<endl;
												cout<<"\n \n\t\t\t\t\t\t\t\t-------------------------------------------------------------------------"<<endl;
												cout<<"\n \t\t\t\t\t\t\t\t\t................BECOME A MILLIONAIRE................"<<endl;
												cout<<"\n \t\t\t\t\t\t\t>> There are two rounds in the game, WARMUP ROUND & CHALLANGE ROUND"<<endl;
												cout<<"\n \t\t\t\t\t\t\t>> In warmup round you will be asked a total of 3 questions to test your general knowledge."<<endl;
												cout<<"\n \t\t\t\t\t\t\t>>You will be eligible to play the game if you can give all 3 right answers otherwise"<<endl;
												cout<<"\n \t\t\t\t\t\t\t\tyou can't play the Game."<<endl;
												cout<<"\n \t\t\t\t\t\t\t>> Your game starts with the CHALLANGE ROUND. In this round you will be asked"<<endl;
												cout<<"\n \t\t\t\t\t\t\t\ttotal 10 questions each right answer will be awarded $100,000."<<endl;
												cout<<"\n \t\t\t\t\t\t\t\tBy this way you can win upto ONE MILLION cash prize in USD..............."<<endl;
												cout<<"\n \t\t\t\t\t\t\t>> You will be given 4 options and you have to press A, B ,C or D for the right option"<<endl;
												cout<<"\n \t\t\t\t\t\t\t >> Questions will be asked continuously."<<endl;
												cout<<"\n \t\t\t\t\t\t\t>> No negative marking for wrong answers"<<endl;

												cout<<"\n \n\t\t\t\t\t\t\t\t  -------------------------------BEST OF LUCK ---------------------------------"<<endl;
												cout<<"\n\n\t'\t\t\t\t\t\t\t'BECOME A MILLIONAIRE'' game is developed by Raju Tamang, Rejina Khadka and Ritesh Baral "<<endl;
												   break;
												   
									case 5:  system("clear"); 
									              cout<<"hello world"<<endl;
									                break;			   
												
										default:
										               system("clear");
										             cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\tYou haven't seen the homepage properly.Read the instructions please."<<endl;				
				              	}
                                       
					     }
		           };
		           
		           
		      		int main()
		          {
					    Quizgame R;
			
					    R.input();
					    R.display();		  
				   }
	                   
	             
	   
