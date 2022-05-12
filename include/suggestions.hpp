// Copyright 2022 Your Name <your_email>


#ifndef INCLUDE_SUGGESTIONS_HPP_
#define INCLUDE_SUGGESTIONS_HPP_


#include <iostream>
#include <string>
#include "nlohmann/json.hpp"

using json = nlohmann::json;

// Класс отвечает за текущую коллекцию предположений
class Suggestions{
 public:
  Suggestions();
  //Подготавливаем ответ для пользователя - сортировка
  void sort_response(json collection);
  //Формируем ответ для пользователя
  json suggest_to_response(const std::string& input);

 private:
  json sorted_collection; //выданные пользователю предложения
};

#endif  // INCLUDE_SUGGESTIONS_HPP_
