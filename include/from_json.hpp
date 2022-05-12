// Copyright 2022 Your Name <your_email>


#ifndef LAB_07_HTTP_SERVER_FROM_JSON_HPP
#define LAB_07_HTTP_SERVER_FROM_JSON_HPP

#include <iostream>
#include <string>
#include "nlohmann/json.hpp"

using json = nlohmann::json;
// Класс отвечает за хранение json файла на сервере, файл может изменяться
// поэтому есть возможность упрощенной работы с ним, загрузки из него данных
class LoadFromFile{
 public:
  explicit LoadFromFile(const std::string path);
  json get_collection() const; // возвращает данные из хранилища
  void load_col_from_file();//подгружаем коллекцию из файла

 private:
  json _collection; //коллекция
  std::string _path; //путь до файла с коллекцией
};
#endif  // INCLUDE_FROM_JSON_HPP_
