const year = 1900;

if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
{
    console.log("This is an leap year")
}
else
{
    console.log("This is not leap year")
}