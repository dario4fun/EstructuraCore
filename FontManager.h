#pragma once


#ifndef FONTS_H
#define FONTS_H

#include <SFML/Graphics.hpp>
#include <unordered_map>
#include <string>

/// <summary>
/// Esta clase controla la carga de todas las fuentes base del motor
/// </summary>
class FontManager {

public:

    void LoadFonts();                                                   // Cargar todas las fuentes necesarias

    const sf::Font& GetFont(const std::string& name) const;             // Obtener una fuente espec�fica por nombre

private:


    std::unordered_map<std::string, sf::Font> fonts;                    // Diccionario para almacenar las fuentes cargadas

    void LoadFont(const std::string& name, const std::string& path);    // Funci�n auxiliar para cargar una fuente
};

#endif 

