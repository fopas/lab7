// Copyright 2022 Your Name <your_email>

#include "../include/from_json.hpp"
#include <fstream>
#include <sstream>

#include "from_json.hpp"

LoadFromFile::LoadFromFile(const std::string path) {
  _path = path; //возвращаем путь до файла
}
// возвращает данные из хранилища
json LoadFromFile::get_collection() const {
  return _collection; //получаем коллекцию
}

//подгружаем коллекцию из файла
void LoadFromFile::load_col_from_file(){
  try {
    std::ifstream file(_path);
    file >> _collection;
  } catch (const std::exception& exception) {
    std::cout << exception.what() << std::endl;
  }
}
