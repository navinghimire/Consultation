/*
 * Name: YOUR NAME
 * Consultations Project
 * Course: CSI218 (Spring 2015)
 * Date: April 13, 2015
 * Description: ADD A DESCRIPTION.
 */

#include <cctype>
#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>
#include "dequeue.cpp"
using namespace std;

// Class to store quotes on projects resulting
// from consultations.
struct Quote
{
public:
	string client;

	// COMPLETE THIS CLASS.

};


// Read quotes from file, prioritizing short projects (no more
// than 7 days) at the front.
void readQuotes(istream &inStream, Dequeue<Quote> &quotes);

// Determine total revenue and days from approved quotes.
// If a quote does not come from a "senior" designer,
// it requires manual approval.
void approveQuotes(Dequeue<Quote> &quotes, double &revenue, int &days);


int main()
{
	// Double-ended queue to store quotes as they come
	// in from consultations.
	Dequeue<Quote> quotes;

	// File containing quotes from consultations.
	const char consultFileName[] = "consultations.txt";
	ifstream consultFile(consultFileName);

	if (consultFile.fail())
	{
		cerr << "Cannot read quotes from consulation file: "
			 << consultFileName << endl;
		//exit(1);
		return -1;
	}

	// Read quotes from file into queue.
	readQuotes(consultFile, quotes);

	consultFile.close();

	double revenueProjection = 0.0;
	int totalDays = 0;

	// Process quotes.  For those not from a "senior"
	// designer, ask for approval.  The cost and number
	// of days for all approved quotes are accumulated.
	approveQuotes(quotes, revenueProjection, totalDays);

	// Display expected revenue and days of work for projects.
	cout << "\nRevenue projection: $" << revenueProjection << endl;
	cout << "Total days: " << totalDays << endl;

	return 0;
}

// Read quotes from file, prioritizing short projects (no more
// than 7 days) at the front.
void readQuotes(istream &inStream, Dequeue<Quote> &quotes)
{
	while (true)
	{
		// Read character to allow testing for end-of-file.
		char ch = inStream.get();

		if (inStream.eof())
			break;

		// Put back character read to test end-of-file.
		inStream.putback(ch);

		// READ IN AND QUEUE QUOTE.


	}
}

// Determine total revenue and days for approved quotes.
// If a quote does not come from a "senior" designer,
// it requires manual approval.
void approveQuotes(Dequeue<Quote> &quotes, double &revenue, int &days)
{
	while (!quotes.isEmpty())
	{
		Quote q1;

		// COMPLETE THIS LOOP.

		cout << "\n\"" << q1.client
			 << "\" project automatically approved" << endl;

	}
}
