#ifndef SOBR_OBJ_H
#define SOBR_OBJ_H

class Tempo{
private:
    int horas;
    int minutos;
public:
    Tempo();
    Tempo(int h, int m = 0);

    void Exibir() const;
    Tempo operator+ (const Tempo& t)const;
    Tempo operator- (const Tempo& t)const;
};

#endif