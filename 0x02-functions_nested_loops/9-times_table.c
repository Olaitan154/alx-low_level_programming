#include "main.h"
/**
* times_table - print tables
*
* Return: Always 0.
*/
void times_table(void)
{
int a;
int b;
int c;
for (a = 0; a <= 9; a++)
{
for (b = 0; b <= 9; a++)
{
c = a * b;
if ((c / 10) == 0)
{
if (b == 0) {
