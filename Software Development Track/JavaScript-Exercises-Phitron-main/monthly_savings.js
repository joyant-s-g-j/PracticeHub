const money_savings = (array, number) =>
{
    if (!Array.isArray(array) || typeof number != 'number')
    {
        return "Invalid Input";
    }

    let total_pay = 0;

    for(let i=0; i < array.length; i++)
    {
        let element = array[i];

        if (element >= 3000)
        {
            var tax = element * (20/100);
            element = element - tax;
            total_pay = total_pay + element;
        }
        else
        {
            total_pay = total_pay + element
        }
    }
    const total_savings = total_pay - number
    if (total_savings < 0)
    {
        return "Earn more";
    }
    else
    {
        return total_savings;
    }
}

var payment = [1000, 2000, 3000]; 
var cost = 5400;
const savings = money_savings(payment, cost);
console.log(savings);