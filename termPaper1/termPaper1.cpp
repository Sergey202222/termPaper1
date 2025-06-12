#include <iostream>
#include <vehicle.hpp>
#include <vector>
#include <map>

void race(std::vector<vehicle::Transport*>& vehicles, int distance)
{
    for (int iindex{ 1 }; iindex < vehicles.size(); ++iindex)
    {
        for (int jindex{ iindex }; jindex > 0; --jindex)
        {
            if (vehicles[jindex]->Time(distance) < vehicles[jindex - 1]->Time(distance))
            {
                std::swap(vehicles[jindex], vehicles[jindex - 1]);
            }
        }
    }
}


int main()
{
    setlocale(LC_ALL, "rus");
    std::vector<vehicle::Transport*> vehicles;
    int action{};
    int type{};
    bool flag{ true };
    int distance{};

    while (true)
    {
        std::cout << "Добро пожаловать в гоночный симулятор!\n";
        std::cout << "1. Гонка для наземного транспорта\n";
        std::cout << "2. Гонка для воздушного транспорта\n";
        std::cout << "3. Гонка для наземного и воздушного транспорта\n";
        std::cout << "Выберете тип гонки: ";

        std::cin >> type;
        std::cout << "Укажите длину дистанции (должна быть положительна): ";
        std::cin >> distance;

        std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n1. Зарегистрировать транспорт\nВыберете действие: ";

       
        std::cin >> action;
        
        int checked[7]{};

        while (flag)
        {
            switch (type)
            {
            case 1:
                std::cout << "Гонка для наземного транспорта. Расстояние " << distance << '\n';
                break;
            case 2:
                std::cout << "Гонка для воздушного транспорта. Расстояние " << distance << '\n';
                break;
            case 3:
                std::cout << "Гонка для наземного и воздушного транспорта. Расстояние " << distance << '\n';
                break;
            }

            if (vehicles.size() > 0)
            {
                std::cout << "Зарегестрированные транспортные средства: ";
                size_t count{ vehicles.size() - 1};
                for (int index{}; index < vehicles.size(); ++index)
                {
                   std::cout << vehicles[index]->get_name();
                   if (count > 0)
                   {
                      std::cout << ", ";
                      --count;
                   }
                }
                std::cout << '\n';
            }

            std::cout << "1. Ботинки-вездеходы\n2. Метла\n3. Верблюд\n4. Кентавр\n5. Орёл\n6. Верблюд-быстроход\n"
                << "7. Ковёр-самолёт\n0. Закончить регистрацию\nВыберете транспорт или 0 для окончания регистрации: ";

            std::cin >> action;

            switch (action)
            {
            case 1:
                if (type == 1 || type == 3)
                {
                    vehicles.push_back(new vehicle::AllTerrainBoots);
                }
                else std::cout << "Попытка зарегестрировать неправильный тип транспортного средства!\n";
                break;
            case 2:
                if (type == 2 || type == 3)
                {
                    vehicles.push_back(new vehicle::Broom);
                }
                else std::cout << "Попытка зарегестрировать неправильный тип транспортного средства!\n";
                break;
            case 3:
                if (type == 1 || type == 3)
                {
                    vehicles.push_back(new vehicle::Camel);
                }
                else std::cout << "Попытка зарегестрировать неправильный тип транспортного средства!\n";
                break;
            case 4:
                if (type == 1 || type == 3)
                {
                    vehicles.push_back(new vehicle::Centaur);
                }
                else std::cout << "Попытка зарегестрировать неправильный тип транспортного средства!\n";
                break;
            case 5:
                if (type == 2 || type == 3)
                {
                    vehicles.push_back(new vehicle::Eagle);
                }
                else std::cout << "Попытка зарегестрировать неправильный тип транспортного средства!\n";
                break;
            case 6:
                if (type == 1 || type == 3)
                {
                    vehicles.push_back(new vehicle::TheFastMovingCamel);
                }
                else std::cout << "Попытка зарегестрировать неправильный тип транспортного средства!\n";
                break;
            case 7:
                if (type == 2 || type == 3)
                {
                    vehicles.push_back(new vehicle::FlyingCarpet);
                    checked[6] = 1;
                }
                else std::cout << "Попытка зарегестрировать неправильный тип транспортного средства!\n";
                break;
            case 0:
                if (vehicles.size() >= 2)
                {
                    std::cout << "1. Зарегестрировать транспорт\n2. Начать гонку\nВыберете действие: ";
                    std::cin >> action;
                    if (action == 2) flag = false;
                }
                else
                {
                    std::cout << "Должно быть зарегистрировано хотя бы 2 транспортных средства\n"
                              << "1. Зарегистрировать транспорт\nВыберете действие: ";
                    std::cin >> action;
                }
                break;
            }

        }

        std::cout << '\n';
        race(vehicles, distance);
        std::cout << "Результаты гонки:\n";
        for (int index{}; index < vehicles.size(); ++index)
        {
            std::cout << index + 1 << ". " << vehicles[index]->get_name() << ". Время: " << vehicles[index]->Time(distance) << '\n';
        }
        vehicles.clear();
        flag = true;
        std::cout << "\n1. Провести ещё одну гонку\n2. Выйти\nВыберете действие: ";
        std::cin >> action;
        if (action == 2) break;
    }
   
    return EXIT_SUCCESS;
}