#include <iostream>
void valid_day(int day_number)
{
    switch (day_number)
    {
        case 1:
            std::cout<<"Today is Monday.."<<std::endl;
            break;
        case 2:
            std::cout<<"Today is Tuesday.."<<std::endl;
            break;
        case 3:
            std::cout<<"Today is Wednesday.."<<std::endl;
            break;
        case 4:
            std::cout<<"Today is Thursday.."<<std::endl;
            break;
        case 5:
            std::cout<<"Today is Friday.."<<std::endl;
            break;
        case 6:
            std::cout<<"Today is Saturday.."<<std::endl;
            break;
        case 7:
            std::cout<<"Today is Sunday.."<<std::endl;
            break;
              
        default:
            std::cout<<"Invalid day.."<<std::endl;
            break;
    }

}
int main()
{
 
    int day_count{};
    std::cout<<"Which day is it ? 1 : Monday,...,  7 : Sunday"<<std::endl;
    std::cin>>day_count;
    valid_day(day_count);

    return 0;
}

