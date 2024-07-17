#ifndef _CONFIG_H
#define _CONFIG_H

typedef enum
{
    default_state,              // Состояние по умолчанию
    addition_state,             // Состояние сложение
    subtraction_state,          // Состояние вычитание
    multiplication_state,       // Состояние умножение
    division_state              // Состояние деление
} States;
extern States state;            // Текущее состояние

typedef struct
{
    double res;                 // Результат расчёта
    double oper1;               // Операнд 1
    double oper2;               // Операнд 2
} Memory;
extern Memory memory;           // Структура памяти

#endif