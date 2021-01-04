class calculator
{
    public:
        double calculate(double x, char oper, double y);
};

double calculator::calculate(double x, char oper, double y)
{
    switch (oper)
    {
    case '+':
        return x+y;
        break;
    case '-':
        return x-y;
        break;
    case '*':
        return x*y;
        break;
    case '/':
        return x/y;
        break;
    default:
        return 0;
        break;
    }
}