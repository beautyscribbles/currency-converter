/*AUTH: @beautyscribbles*/
#include <iostream>
using namespace std;

int main() {
 float USD_RUB = 55.84001;
 float EUR_RUB = 60.78989;
 float EUR_USD = EUR_RUB / USD_RUB;
 float USD_EUR = USD_RUB / EUR_RUB;
 float Money = 0;
 int Currency = 0;
 float Result;

cout << "Convert to some currency: enter 1 rub to usd, 2 rub to eur, 3 eur to usd, 4 usd to eur" << endl;

cin >> Money >> Currency;

if(Money > 0 && Currency > 0)
{
								            cout << "Alright" << endl;
									            switch(Currency)
											            {
													        case 1:
															        Result = Money * USD_RUB;
																        cout << Result << " Rubles in dollar" << endl;
																	    break;
																	        case 2:
																	            Result = Money * EUR_RUB;
																		            cout << Result << " Rubles in euro" << endl;
																			        break;
																				    case 3:
																				        Result = Money * USD_EUR;
																					        cout << Result << " Euro in Dollars" << endl;
																						    break;
																						        case 4:
																						            Result = Money * EUR_USD;
																							            cout << Result << " Dollars in euro" << endl;
																								        break;
																									        }
										        }
						    else
							        {
									       cout << "Not alright" << endl;
									           }
						        return 0;
}
