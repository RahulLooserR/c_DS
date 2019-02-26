#include <stdio.h>
#include <string.h>
#define charset 256    // number of characters in ASCII

void searchPattern (char string[], char pattern[], int prime)
{ 
	int m = strlen(pattern); 
	int n = strlen(string); 
	int i, j; 
	int p = 0; // hash value for pattern 
	int s = 0; // hash value for string 
	int h = 1; 

	// The value of h would be "pow(d, M-1)%q" 
	for (i = 0; i < m-1; i++) 
		h = (h*charset)%prime; 

	// Calculate the hash value of pattern and first 
	// window of text 
	for (i = 0; i < m; i++) 
	{ 
		p = (charset * p + pattern[i]) % prime; 
		s = (charset * s + string[i]) % prime; 
	} 

	// Slide the pattern over text one by one 
	for (i = 0; i <= n - m; i++) 
	{ 

		// Check the hash values of current window of text 
		// and pattern. If the hash values match then only 
		// check for characters on by one 
		if ( p == s ) 
		{ 
			/* Check for characters one by one */
			for (j = 0; j < m; j++) 
			{ 
				if (string[i+j] != pattern[j]) 
					break; 
			} 

			// if p == t and pat[0...M-1] = txt[i, i+1, ...i+M-1] 
			if (j == m) 
				printf("Pattern found at index %d \n", i); 
		} 

		// Calculate hash value for next window of text: Remove 
		// leading digit, add trailing digit 
		if ( i < n-m ) 
		{ 
			s = (charset*(s - string[i]*h) + string[i+m]) % prime; 

			// We might get negative value of t, converting it 
			// to positive 
			if (s < 0) 
				s = (s + prime); 
		} 
	} 
} 


int main()
{
	char string[] = "aabcaabc";
	char pattern[] = "abc";
	int prime = 101;

	searchPattern (string, pattern, prime);

	return 0;
}
