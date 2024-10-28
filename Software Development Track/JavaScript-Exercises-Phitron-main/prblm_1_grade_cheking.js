var mark = 69;

if (mark <= 100 && mark >= 80)
{
    console.log("Your grade is A+");
}
else if (mark <=79 && mark >= 70)
{
    console.log("Your grade is A");
}
else if (mark <=69 && mark >= 60)
{
    console.log("Your grade is A-");
}
else if (mark <=59 && mark >= 50)
{
    console.log("Your grade is B");
}
else if (mark <=49 && mark >= 40)
{
    console.log("Your grade is C");
}
else if (mark <=39 && mark >= 33)
{
    console.log("Your grade is D");
}
else if (mark < 33 && mark >= 0)
{
    console.log("Your grade is F");
}
else
{
    console.log("Invalid mark")
}