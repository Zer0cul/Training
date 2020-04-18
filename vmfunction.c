/* 
 * File: vmfunction.c
 * Description: The file contaisn accountand functions
 * the vmfunction.h has interface definition
 */

/*
 * Calculates the revenue from budget and expences
 * Returns: revenue as integer
 */
int
getRevenue(int budget, int expences)
{
	return budget-expences;
}