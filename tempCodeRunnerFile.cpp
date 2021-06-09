Student(string firstName, string lastName, int id, std::vector<int> &scores)
        : Person(firstName, lastName, id)
    {
        testScores = scores;
    }
    char calculate()
    {
        int avg = 0;
        for (int i = 0; i < testScores.size(); i++)
        {
            avg = avg + testScores[i];
        }
        avg = avg/2;
        if (avg <= 100 && avg >= 90)
        {
            return 'O';

        }
        else if (avg < 90 && avg >= 80)
        {
            return 'E';
        }
        else if (avg < 80 && avg >= 70)
        {
            return 'A';
        }
        else if (avg < 70 && avg >= 55)
        {
            return 'P';
        }
        else if (avg < 55 & avg >= 40)
        {
            return 'D';
        }
        else
        {
            return 'T';
        }
    }